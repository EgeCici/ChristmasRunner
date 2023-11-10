using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelSpecial : MonoBehaviour
{
    public Transform lap;

    private void Start()
    {
        GameManager.Instance.lap = lap;
    }
}
