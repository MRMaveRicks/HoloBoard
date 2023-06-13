using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using TMPro;

public class playAudio : MonoBehaviour
{
    public GameObject activeLanguage;
    public AudioSource audio2Play;
    public AudioClip[] myClip; 
    public string Language;


    public void startAudio(string comingFrom)
    {
        Language = activeLanguage.GetComponent<TMP_Text>().text;  
        print(Language);


        AudioSource audio = GetComponent<AudioSource>();

        if (Language == "English")
            audio.clip = myClip[0];

        else if (Language == "Espanol")
            audio.clip = myClip[1];

        else
            audio.clip = myClip[0];

        audio.Play();
    }
}
