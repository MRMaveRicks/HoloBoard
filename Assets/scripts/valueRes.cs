using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class valueRes : MonoBehaviour
{
    public GameObject stripe1, stripe2, stripe3;    // bands gameObjects
    public GameObject txt;     // text that will display the value
    public Material[] mats;     // list of materials
    char digit;                 // number in the button pressed
    string band;                // 1st, 2nd or 3th
    public string[] value;      // [digit1, digit2, ceros]

    string zeros, res;
    public string resStr;
    public int resVal;


    // from spawnThisObj
    public GameObject Obj_toSpawn;
    GameObject Menu;
    public GameObject[] LofO;
    public int Idx;


    void Start()
    {
        value = new string[3];

        value[0] = "1";
        value[1] = "0";
        value[2] = "00";

        // initial value corresponds to the resistor Prefab
        zeros = "00";
        resStr = "1k";
        resVal = 1000;

        txt.GetComponent<TMP_Text>().text = resStr + " ohms";
    }

    public void ChangeValue(GameObject button)
    {
        digit = button.name[button.name.Length - 1];        // get digit of the button pressed 
        band = button.transform.parent.gameObject.name;     // get the band to which the button belongs

        int number = int.Parse(digit.ToString());


        // change materials (color) of the corresponding band

        if (band == "digitFirst")
        {
            value[0] = number.ToString();
            stripe1.GetComponent<Renderer>().material = mats[number];
        }

        else if (band == "digitSecond")
        {
            value[1] = number.ToString();
            stripe2.GetComponent<Renderer>().material = mats[number];
        }

        //  0 - 5
        else if (band == "manyCeros")
        {
            value[2] = number.ToString();
            stripe3.GetComponent<Renderer>().material = mats[number];

            zeros = "";
            for (int i = 0; i < number; i++)
                zeros = zeros + "0";
        }


        // resistor value to cientific notation 

        res = value[0] + value[1] + zeros;
        resVal = int.Parse(res);

        if (3 < res.Length && res.Length <= 6)
        {
            res = res.Substring(0, res.Length - 3) + "." + res.Substring(res.Length - 3);
            resStr = float.Parse(res).ToString() + "k";
        }

        else if (5 < res.Length && res.Length <= 12)
        {
            res = res.Substring(0, res.Length - 6) + "." + res.Substring(res.Length - 6);
            resStr = float.Parse(res).ToString() + "M";
        }

        else
            resStr = float.Parse(res).ToString();


        // change the string of the resistor value accordingly to the selected colors
        txt.GetComponent<TMP_Text>().text = resStr + " ohms";

    }


    // when the 'select' button is pressed, a resistor will be instantiated with the current colors (values) 
    public void SpawResistor()
    {
        Menu = GameObject.Find("HoloBoardMenus");
        LofO = Menu.GetComponent<changeMenu>().ListOfObjects;

        // add the component to each of the instantiated objects without the need to have the original one in the scene
        // catch the object that has been instantiated
        GameObject objectSpawned = Instantiate(Obj_toSpawn);


        // append the instantiated object to the list of objects LofO
        // so when pressing the button DeleteAll, each of the objects will be destroyed 
        Idx = Menu.GetComponent<changeMenu>().listIdx;
        LofO[Idx] = objectSpawned;

        Menu.GetComponent<changeMenu>().listIdx++;


        // change the color of the instantiated resistor
        objectSpawned.name = "res" + value[0] + value[1] + zeros;

        Transform newRes_S1 = objectSpawned.transform.Find("body/digit1");
        Transform newRes_S2 = objectSpawned.transform.Find("body/digit2");
        Transform newRes_S3 = objectSpawned.transform.Find("body/ceros");

        newRes_S1.gameObject.GetComponent<Renderer>().material = mats[int.Parse(value[0])];
        newRes_S2.gameObject.GetComponent<Renderer>().material = mats[int.Parse(value[1])];
        newRes_S3.gameObject.GetComponent<Renderer>().material = mats[zeros.Length];

        // the name of the instantiated resistor will be its value, so it can be used later on 
        Debug.Log(objectSpawned.name.Substring(3));     
    }

}
