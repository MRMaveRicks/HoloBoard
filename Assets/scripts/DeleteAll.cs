using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeleteAll : MonoBehaviour
{
    public GameObject[] ListOfObjects;
    public int listIdx;

    public void DeleteObjects()
    {
        // destroy each of the objects contained in the list
        // (the list was enlarged by each of the instantiated objects)

        for (int i = 0; i < listIdx; i++)
        {
            Destroy(ListOfObjects[i]);
        }

        listIdx = 0;
    }
}
