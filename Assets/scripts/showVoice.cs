using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;

public class showVoice : MonoBehaviour
{
    public GameObject help, tasks, breadboard;
    public Transform circuit;
    string command;

    void Start()
    {
        StartCoroutine(voice());
    }

    // toggle at the voice commands
    IEnumerator voice()
    {
        while (true)
        {

            if (breadboard.transform.childCount > 0)
                circuit = breadboard.transform.GetChild(0);


            command = gameObject.GetComponent<SpeechRecon>().voiceCommand;

            //*
            if (command == "Enable manipulation.")
                gameObject.GetComponent<BoundsControl>().enabled = true;

            if (command == "Disable manipulation.")
                gameObject.GetComponent<BoundsControl>().enabled = false;
            //*/

            if (command == "Enable task description." && tasks != null)
                tasks.SetActive(true);

            if (command == "Disable task description." && tasks != null)
                tasks.SetActive(false);

            if (command == "Enable help." && help != null)
                help.SetActive(true);

            if (command == "Disable help." && help != null)
                help.SetActive(false);




            yield return null;
        }
    }

}
