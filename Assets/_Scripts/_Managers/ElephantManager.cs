using ElephantSDK;
using UnityEngine;

public class ElephantManager : MonoBehaviour
{
    #region Instance Method / ElephantSDK
    public static ElephantManager Instance;
    private void InstanceMethod()
    {
        if (Instance)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }
    }
    #endregion
    
    private void Awake()
    {
        #region Instance Method
        InstanceMethod();
        #endregion
        
        
    }
    
    
    public static void LevelStart()
    {
        Elephant.LevelStarted(LevelManager.Instance.currentLevelNumber);
    }

    public static void LevelComplete()
    {
        Elephant.LevelCompleted(LevelManager.Instance.currentLevelNumber);
    }

    public static void LevelFailed()
    {
        Elephant.LevelFailed(LevelManager.Instance.currentLevelNumber);
    }
}
