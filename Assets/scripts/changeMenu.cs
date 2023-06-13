using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
//using System.Diagnostics;

public class changeMenu : MonoBehaviour
{
    public GameObject components;

    public GameObject[] Menus;
    public GameObject[] Circuits;
    GameObject circuitDisplayed;
    public int menuId = 0, circuitID;

    // from DeleteAll
    public GameObject[] ListOfObjects;
    public int listIdx;
    string lang;



    void Start()
    {
        menuId = 1;
    }


    // HOME icon  ->  go backward in the menu hierarchy 
    public void GoBack()
    {
        if (menuId > 1)
        {
            // if the user is inside a lesson, the GoBack button will go back to the lesson selection menu and the circuit will be removed
            if (Circuits[0].activeInHierarchy == true  &&  menuId == 3)
            {
                Circuits[0].SetActive(false);       // deactivate the breadboard GameObject
                Destroy(circuitDisplayed);          // destroy the componets of the current circuit

                Menus[Menus.Length - 2].SetActive(false);          // deactivate options menu

                // from DeleteAll
                for (int i = 0; i < listIdx; i++)
                    Destroy(ListOfObjects[i]);      // destroy all the instantiated obejects from the components box

                listIdx = 0;        // once the list of objects has been emptied, reset the index of the list for new objects instantiation

                //playBtn.SetActive(false);       // deactivate the Start Simulation button
            }


            // if the user is in any of the menus (unit -> lesson -> components box), 
            // the GoBack button will go one menu back
            if (menuId < 4)
            {
                Menus[menuId].SetActive(false);     // deactivate current menu
                menuId--;
                Menus[menuId].SetActive(true);      // activate previous menu

                if (menuId == 2)
                    Debug.Log("coming back from lesson");

               
                
            }

            // if the user is inside any of the specific-component selection menu (led/resistor/cables),
            // the GoBack button will go back to the components box menu
            else
            {
                Menus[menuId].SetActive(false);     // deactivate specific-component selection menu menu
                menuId = 3;
                Menus[menuId].SetActive(true);      // activate the components box menu
            }
        }
    }


    // when navigating forward (menuId++) through the menus, change the menu menuId to keep track of the current menu
    // the method GoBack, is responsible of backward navigation (menuId--)
    public void GoForward(int component)        
    {
        // the 'component' argument is used for activating the led/resistor/cables menu when inside the component box menu
        // if that is not the case, i.e. when inside any other menu (unit -> lesson -> components box), menuId++  
        if (component == 0)
            menuId++;

        else
            menuId = component;

    }


    // activate the breadboard GameObject and activate the circuit corresponding to the selected lesson 
    public void OpenLesson(int lesson)
    {
        circuitID = lesson;

        Menus[menuId].SetActive(false);     // deactivate lesson menu
        menuId++;
        Menus[menuId].SetActive(true);      // activate component box menu

        Menus[Menus.Length - 2].SetActive(true);        //  activate opcions menu

        // activate the breadboard GameObject in front of the menu and get its position
        Circuits[0].SetActive(true);
        Circuits[0].transform.position = transform.position + transform.forward + new Vector3(0, -0.5f, 0);

        // instantinate the circuit of the selected lesson (components, hints and tooltips) on top of the breadboard GameObject
        var myCircuit = Instantiate(Circuits[lesson], 
            new Vector3(Circuits[0].transform.position.x - 0.483f, Circuits[0].transform.position.y - 0.018f, Circuits[0].transform.position.z - 0.023f), 
            Quaternion.identity);
        myCircuit.transform.parent = Circuits[0].transform;

        // activate the circuit GameObject
        myCircuit.SetActive(true);
        circuitDisplayed = myCircuit;
        //myCircuit.name = "Circuit";     // change the name of the instantiated clone circuit

        //playBtn.SetActive(true);        // activate the Start Simulation button
    }




}
