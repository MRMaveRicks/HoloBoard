using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class taskDescrp : MonoBehaviour
{
    public GameObject[] lessons;

    // activate the task description of the selected lesson
    public void startLesson(int lesson)
    {
        lessons[0].SetActive(false);
        lessons[1].SetActive(false);
        lessons[2].SetActive(false);

        lessons[lesson].SetActive(true);
    }

}
