using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using TMPro;

public class playAudio : MonoBehaviour
{
    public AudioSource audio2Play;
    public AudioClip[] myClip; 



    public void startAudio(string comingFrom)
    {

        AudioSource audio = GetComponent<AudioSource>();

        audio.clip = myClip[0];

        audio.Play();
    }
}
