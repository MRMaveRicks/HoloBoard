using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class booklet : MonoBehaviour
{
    public GameObject[] pages;
    int idx;

    void Start()
    {
        idx = 0;
        pages[idx].SetActive(true);
    }

    public void Next()
    {
        // next page of the book
        if (idx < 8)
        {
            pages[idx].SetActive(false);
            idx++;
            pages[idx].SetActive(true);
        }
    }

    public void Previous() 
    {
        // previous page of the book
        if (idx > 0)
        {
            pages[idx].SetActive(false);
            idx--;
            pages[idx].SetActive(true);
        }
    }

}
