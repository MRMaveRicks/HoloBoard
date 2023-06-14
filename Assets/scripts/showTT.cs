using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class showTT : MonoBehaviour
{
    public GameObject breadboard;
    public Transform circuit, TT;
    string command;

    void Start()
    {
        StartCoroutine(voice());
    }

    public void showTTs(bool flag)
    {
        circuit = breadboard.transform.GetChild(0);     // check whick circuit (1, 2 or 3) is child of the breadboard
        TT = circuit.transform.Find("ToolTips");

        TT.gameObject.SetActive(flag);
    }


    // toggle component information when the voice command "Switch components information." is given
    IEnumerator voice()
    {
        while (true)
        {
            if (breadboard.transform.childCount > 0)
            {
                circuit = breadboard.transform.GetChild(0);     // check whick circuit (1, 2 or 3) is child of the breadboard
                TT = circuit.transform.Find("ToolTips");
            }


            command = gameObject.GetComponent<SpeechRecon>().voiceCommand;

            if (command == "Enable components information." &&  TT != null)
                TT.gameObject.SetActive(true);

            if (command == "Disable components information." && TT != null)
                TT.gameObject.SetActive(false);


            yield return null;
        }
    }


}
