using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationVoid : MonoBehaviour
{
    


    public void Begin()
    {
        GameManager.Instance.player.GetComponentInChildren<Animator>().SetTrigger("spin");
    }
    
    
    
    public void Stop()
    {
        GameManager.Instance.player.GetComponentInChildren<Animator>().SetBool("spin", false);
    }
}
