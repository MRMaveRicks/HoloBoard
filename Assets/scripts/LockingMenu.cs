using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LockingMenu : MonoBehaviour
{
    public void Lock()
    {
        Component IsLocked = GetComponent("HandConstraintPalmUp");      // to keep menu visible when follow-me behavior is enabled (body-locked menu)
        Behaviour bhvr = (Behaviour)IsLocked;                           // get the enable behavior (of locking behavior)
        bhvr.enabled = !bhvr.enabled;                                   // toggle the enable behavior

        // follow-me menu (body-locked menu)
        GameObject FollowCont = GameObject.Find("FollowContainer");
        if (bhvr.enabled == true)
        {
            FollowCont.transform.localPosition = new Vector3(0, 0, 0);
            FollowCont.transform.localRotation = Quaternion.Euler(0, 0, 0);
        }
    }

}
