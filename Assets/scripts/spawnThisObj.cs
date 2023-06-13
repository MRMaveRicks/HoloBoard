using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// the Obj_toSpam have to be a prefab GameObject
public class spawnThisObj : MonoBehaviour
{
    //public Transform toSpawm = null;
    public GameObject Obj_toSpawn;
    //public Transform plane;
    GameObject theCamera, Menu;

    public GameObject[] LofO;
    public int Idx;
    

    void Start()
    {
        theCamera = GameObject.Find("Main Camera");
        Menu = GameObject.Find("HoloBoardMenus");

        //LofO = Menu.GetComponent<DeleteAll>().ListOfObjects;
        LofO = Menu.GetComponent<changeMenu>().ListOfObjects;
    }

    public void Spawner()
    {
        // add the component to each of the instantiated objects without the need to have the original one in the scene
        // catch the object that has been instantiated
        //GameObject objectSpawned = Instantiate(Obj_toSpawn, transform.position + plane.up + theCamera.transform.forward * 2, Quaternion.identity);
        GameObject objectSpawned = Instantiate(Obj_toSpawn);


        // append the instantiated object to the list of objects LofO
        // so when pressing the button DeleteAll, each of the objects will be destroyed 
        //Idx = Menu.GetComponent<DeleteAll>().listIdx;
        Idx = Menu.GetComponent<changeMenu>().listIdx;
        LofO[Idx] = objectSpawned;

        //Menu.GetComponent<DeleteAll>().listIdx++;
        Menu.GetComponent<changeMenu>().listIdx++;
    }
}
