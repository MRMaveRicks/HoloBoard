using UnityEngine;
using Microsoft.CognitiveServices.Speech;


public class SpeechRecon : MonoBehaviour
{
    private string recognizedString = "Select a mode to begin.";
    private object threadLocker = new object();

    private SpeechRecognizer recognizer;

    private bool micPermissionGranted = false;
    ///private bool scanning = false;

    private string fromLanguage = "en-US";

    private LunarcomController lunarcomController;

    //public GameObject cube, LunarModule;
    //Material cubeMat;
    public string voiceCommand;


    void Start()
    {
        //cubeMat = cube.GetComponent<Renderer>().material;
        //cubeMat.SetColor("_Color", Color.white);


        lunarcomController = LunarcomController.lunarcomController;

        if (lunarcomController.outputText == null)
        {
            Debug.LogError("outputText property is null! Assign a UI Text element to it.");
        }
        else
        {
            micPermissionGranted = true;
        }

        lunarcomController.onSelectRecognitionMode += HandleOnSelectRecognitionMode;
    }


    private void Update()
    {
        if (lunarcomController.CurrentRecognitionMode() == RecognitionMode.Speech_Recognizer)
        {
            if (recognizedString != "")
            {
                lunarcomController.UpdateLunarcomText(recognizedString);

                voiceCommand = recognizedString;

                /*
                if (recognizedString == "Blue.")
                    cubeMat.SetColor("_Color", Color.blue);
                if (recognizedString == "Red.")
                    cubeMat.SetColor("_Color", Color.red);
                if (recognizedString == "Green.")
                    cubeMat.SetColor("_Color", Color.green);

                if (recognizedString == "Start the simulation.")
                    cubeMat.SetColor("_Color", Color.green);
                */
            }
        }
    }


    public void HandleOnSelectRecognitionMode(RecognitionMode recognitionMode)
    {
        if (recognitionMode == RecognitionMode.Speech_Recognizer)
        {
            BeginRecognizing();
        }
        else
        {
            if (recognizer != null)
            {
                recognizer.StopContinuousRecognitionAsync();
            }
            recognizer = null;
            recognizedString = "";
        }
    }

    public async void BeginRecognizing()
    {
        if (micPermissionGranted)
        {
            CreateSpeechRecognizer();

            if (recognizer != null)
            {
                await recognizer.StartContinuousRecognitionAsync().ConfigureAwait(false);
                recognizedString = "Say something...";
            }
        }
        else
        {
            recognizedString = "This app cannot function without access to the microphone.";
        }
    }

    void CreateSpeechRecognizer()
    {
        if (recognizer == null)
        {
            SpeechConfig config = SpeechConfig.FromSubscription(lunarcomController.SpeechServiceAPIKey, lunarcomController.SpeechServiceRegion);
            config.SpeechRecognitionLanguage = fromLanguage;
            recognizer = new SpeechRecognizer(config);
            if (recognizer != null)
            {
                recognizer.Recognizing += RecognizingHandler;
                recognizer.Recognized += RecognizedHandler;
                recognizer.SpeechStartDetected += SpeechStartDetected;
                recognizer.SpeechEndDetected += SpeechEndDetectedHandler;
                recognizer.Canceled += CancelHandler;
                recognizer.SessionStarted += SessionStartedHandler;
                recognizer.SessionStopped += SessionStoppedHandler;
            }
        }
    }

    #region Speech Recognition Event Handlers
    private void SessionStartedHandler(object sender, SessionEventArgs e)
    {
    }

    private void SessionStoppedHandler(object sender, SessionEventArgs e)
    {
        recognizer = null;
    }

    private void RecognizingHandler(object sender, SpeechRecognitionEventArgs e)
    {
        if (e.Result.Reason == ResultReason.RecognizingSpeech)
        {
            lock (threadLocker)
            {
                recognizedString = $"{e.Result.Text}";
            }
        }
    }

    private void RecognizedHandler(object sender, SpeechRecognitionEventArgs e)
    {
        if (e.Result.Reason == ResultReason.RecognizedSpeech)
        {
            lock (threadLocker)
            {
                recognizedString = $"{e.Result.Text}";
            }
        }
        else if (e.Result.Reason == ResultReason.NoMatch)
        {
        }
    }

    private void SpeechStartDetected(object sender, RecognitionEventArgs e)
    {
    }

    private void SpeechEndDetectedHandler(object sender, RecognitionEventArgs e)
    {
    }

    private void CancelHandler(object sender, RecognitionEventArgs e)
    {
    }
    #endregion




    void OnDestroy()
    {
        if (recognizer != null)
        {
            recognizer.Dispose();
        }
    }
}
