using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class simulation : MonoBehaviour
{
    public Material[] btnMaterial;
    public GameObject button, btnContainer, breadboard;
    Transform circuit, child, hint;
    Transform comp1, comp2, comp3, comp4;
    GameObject comp2GO;
    string command;
    int completeCircuit;
    string sliderVal;

    void Start()
    {
        StartCoroutine(parentEmpty());
        StartCoroutine(voice());
    }

    // coroutine to check if all the components have been placed on the hint
    // -> every time a component is placed on its hint position, that GameObject is moved to the the parent of the hint,
    //    so, when all the components are in place, the parent that initially had the components should be empty;
    //    also, when the component has been placed, the target hint is disabled (edited from PartAssemblyController.cs)
    IEnumerator parentEmpty()
    {
        while (true)
        {
            if (breadboard.transform.childCount > 0)
            {
                circuit = breadboard.transform.GetChild(0);     // check whick circuit (1, 2 or 3) is child of the breadboard
                child = circuit.transform.Find("components");   // get the child under components 
                hint = circuit.transform.Find("hints");         // get the child under hits 
            }

            // if the component GameObejct exists and it is empty
            if (child != null && child.transform.childCount == 0) 
            {
                button.SetActive(true);     // show the simultaion button

                // variable to know which circuit has been completed
                if (circuit.name == "circuit1(Clone)")
                    completeCircuit = 1;

                else if (circuit.name == "circuit2(Clone)")
                    completeCircuit = 2;

                else if (circuit.name == "circuit3(Clone)")
                    completeCircuit = 3;

                print(String.Format("circuit{0} complete", completeCircuit));       // sanity check
            }

            // if the working circuit is Circuit2 (the one with the potentiometer),
            // the value of the slider, which represents the potentiometer wiper, is checked constantly on the coroutine 
            if (comp2GO != null)
            {
                sliderVal = comp2GO.GetComponent<TMP_Text>().text;          // get the value of the slider from the TextMexhPro component 
                comp1.gameObject.GetComponent<Light>().intensity = 5.0f * float.Parse(sliderVal);       // change the value of the light on the led accordingly to the slider value
            }

            yield return null;
        }
    }

    // start the simulation when the button is pressed
    public void startSimulation()
    {
        // actions for circuit 1
        if (completeCircuit == 1)
        {
            comp1 = hint.transform.Find("led/light");                   // get the transform of the led gameObject
            comp1.gameObject.GetComponent<Light>().enabled = true;      // enable the light component of the led
        }

        // actions for circuit 2
        else if (completeCircuit == 2)
        {
            comp1 = hint.transform.Find("led/light");                   // get the transform of the led gameObject
            comp1.gameObject.GetComponent<Light>().enabled = true;      // enable the light component of the led

            comp2 = hint.transform.Find("PinchSlider");                 // get the transform of the PinchSlider gameObject
            comp2.gameObject.SetActive(true);                           // activate the PinchSlider gameObject to make it visible

            comp2GO = comp2.Find("SliderValue").gameObject;

            sliderVal = comp2GO.GetComponent<TMP_Text>().text;          // get the value of the slider
            comp1.gameObject.GetComponent<Light>().intensity = 5.0f * float.Parse(sliderVal);       // change the value of the light on the led accordingly to the slider value
        }

        // actions for circuit 3
        else if (completeCircuit == 3)
        {
            comp1 = hint.transform.Find("ledUp/light");                 // get the transform of the led1 (pull-up) gameObject
            comp1.gameObject.GetComponent<Light>().enabled = true;      // enable the light component of the led1 (pull-up)

            comp3 = hint.transform.Find("HolobuttonUp");                // get the transform of the button (pull-up) gameObject
            comp3.gameObject.SetActive(true);                           // activate the buttonUp gameObject to make it visible

            comp2 = hint.transform.Find("ledDown/light");               // get the transform of the led2 (pull-down) gameObject
            comp2.gameObject.GetComponent<Light>().enabled = true;      // enable the light component of the led2 (pull-down)
            comp2.gameObject.SetActive(false);                              // since the led2 is has pull-down configuration, it starts OFF 

            comp4 = hint.transform.Find("HolobuttonDown");              // get the transform of the button (pull-down) gameObject
            comp4.gameObject.SetActive(true);                           // activate the buttonDown gameObject to make it visible
        }

        btnContainer.SetActive(false);
    }


    // start the simulation when the voice command "Start the simulation." is given
    IEnumerator voice()
    {
        while (true)
        {
            command = gameObject.GetComponent<SpeechRecon>().voiceCommand;

            if (command == "Start the simulation.")
                startSimulation();

            yield return null;
        }
    }

}