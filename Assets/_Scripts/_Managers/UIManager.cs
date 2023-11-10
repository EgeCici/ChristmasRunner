using DG.Tweening;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    #region Instance Method
    public static UIManager Instance;
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

    #region Constant
    public TextMeshProUGUI levelIndex;
    public GameObject levelComplete,levelFailed,confetti;
    
    public GameObject myTutorial;
    
    
    #endregion
    public Image progressImage;
    
    public Slider progress;
    public float value,variable;
    public bool minus, plus;

    
    
    private void Awake()
    {
        #region Instance Method
        InstanceMethod();
        #endregion
    }

    private void Start()
    {
        
    }

    private void Update()
    {
        if (plus)
        {
            plus = false;
            DOTween.To(() => value, x => value = x, value + variable, .2f).OnUpdate(() => { ProgressValue(); });
        }

        if(minus)
        {
            minus = false;
            DOTween.To(() => value, x => value = x, value - variable, .2f).OnUpdate(() => { ProgressValue(); });
        }
    }

    private void ProgressValue()
    {
        progress.value = value;

        
    }
    public void _GameInStartMenu()
    {
        myTutorial.SetActive(false);
        levelIndex.enabled = true;
        
        GameManager.Instance.gameState = GameManager.GameState.Play;
    }

    public void _GameWin()
    {
        levelIndex.enabled = false;
        levelComplete.SetActive(true);
        confetti.SetActive(true);
    }

    public void _GameLose()
    {
        levelIndex.enabled = false;
        levelFailed.SetActive(true);
    }

    public void _OptionsMenu()
    {
        levelIndex.enabled = false;
       
        myTutorial.SetActive(false);
       
        
    }

    public void _ShopButton()
    {
       
        levelIndex.enabled = false;
        myTutorial.SetActive(false);
        
        
    }

    public void _BackButton()
    {
        levelIndex.enabled = true;
        
        myTutorial.SetActive(true);
        
    }
    
    public void SetLevelIndex()
    {
        levelIndex.text = "Level " + LevelManager.Instance.currentLevelNumber;
    }

    public void Progress()
    {
        progressImage.fillAmount = GameManager.Instance.score * 1f/100;
    }

    
}
