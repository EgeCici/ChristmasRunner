using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    #region Instance Method / ElephantSDK
    public static GameManager Instance;
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
    [InfoBox("**Oyun CPI testine çıkıcağı zaman bool true yapılıp build alınıcak.**", InfoMessageType.Warning)]
    public bool elephantSdk;

    #endregion
    public float clampValue = 5;
    public float speedSideways = 500;

    private bool holding;

    public int moveSpeed;

    public int score;

    public int maxScore = 100;

    public int currentLevel = -1;

    public int oldLevel = -2;

    private Vector3 pos1, pos2;

    public GameObject player;

    public GameObject collectable;

    private Rigidbody playerRb;



    public GameObject santa;

    public Transform lap;

    public List<GameObject> myChars = new List<GameObject>();
    public enum GameState
    {
        Play,
        Pause,
        Win,
        Lose,
        StartMenu,
    }
    public GameState gameState;



    private void Awake()
    {
        #region Instance Method
        InstanceMethod();
        #endregion

    }

    private void Start()
    {
        playerRb = player.GetComponent<Rigidbody>();


    }

    public void FixedUpdate()
    {
        if (gameState == GameState.Play)
        {
            player.transform.Translate(player.transform.forward * moveSpeed * Time.deltaTime);
        }

    }
    private void Update()
    {
        if (gameState == GameState.Play)
        {
            player.transform.position =
                   new Vector3(Mathf.Clamp(playerRb.transform.position.x, -clampValue, clampValue),
                       playerRb.transform.position.y, playerRb.transform.position.z);

            if (Input.GetMouseButtonDown(0))
            {
                pos1 = GameManager.Instance.GetMousePosition();

                holding = true;
            }

            if (Input.GetMouseButton(0) && holding) //set players velocity on X axis and clamp value
            {
                pos2 = GameManager.Instance.GetMousePosition();

                Vector3 delta = pos1 - pos2;

                pos1 = pos2;

                playerRb.velocity =
                    new Vector3(Mathf.Lerp(playerRb.velocity.x, -delta.x * speedSideways, 100f * Time.deltaTime),
                        playerRb.velocity.y, playerRb.velocity.z);


            }

            if (Input.GetMouseButtonUp(0))
            {
                holding = false;

                playerRb.velocity = Vector3.zero;
            }
        }
    }

    public void GameWin()
    {
        gameState = GameState.Win;
        //////////////////////////
        UIManager.Instance._GameWin();

        /*
         DoTween.Play("Star_1");
         DoTween.Play("Star_2");
         DoTween.Play("Star_3");
         */

        //Elephant Setup
        if (elephantSdk)
        {
            print("ElephantManager.LevelComplete();");
            ElephantManager.LevelComplete();
        }
    }

    public void GameLose()
    {
        gameState = GameState.Lose;
        ///////////////////////////
        UIManager.Instance._GameLose();

        //Elephant Setup
        if (elephantSdk)
        {
            print("ElephantManager.LevelFailed();");
            ElephantManager.LevelFailed();
        }
    }

    public List<string> myLabels = new List<string>();
    
    public TextMeshPro currentText;
    public Sprite slider1,slider2,slider3,slider4;
    public Image currentImage;
    public void ChangeLevel()
    {
        if (score < 25)
        {
            currentLevel = 0;
            currentImage.sprite = slider1;
            currentText.text = myLabels[0];
        }

        else if (score < 50)
        {
            currentLevel = 1;
            currentImage.sprite = slider2;
            currentText.text = myLabels[1];
        }

        else if (score < 75)
        {
            currentLevel = 2;
            currentImage.sprite = slider3;
            currentText.text = myLabels[2];
        }

        else if (score < 100)
        {
            currentLevel = 3;
            currentImage.sprite = slider4;
            currentText.text = myLabels[3];
        }

       

        ChangeChar();

       
    }

   public void ChangeChar()
    {
        if (oldLevel != currentLevel)
        {
            for (int i = 0; i < myChars.Count; i++)
            {
                if (currentLevel == i)
                {
                    myChars[i].SetActive(true);

                }
                else
                {
                    myChars[i].SetActive(false);
                }
            }

            if (currentLevel < oldLevel)
            {
                player.GetComponentInChildren<Animator>().SetTrigger("spin");
                player.GetComponentInChildren<DOTweenAnimation>().DOPlay();
               
            }
            else
            {
                player.GetComponentInChildren<Animator>().SetTrigger("spin");
                player.GetComponentInChildren<DOTweenAnimation>().DOPlay();


                
            }
            
            oldLevel = currentLevel;

        }
    }

    

    #region Constant Methods

    public static float ClampAngle(float angle, float min, float max)
    {
        angle = Mathf.Repeat(angle, 360);
        min = Mathf.Repeat(min, 360);
        max = Mathf.Repeat(max, 360);
        var inverse = false;
        var timing = min;
        var tangle = angle;
        if (min > 180)
        {
            inverse = true;
            timing -= 180;
        }
        if (angle > 180)
        {
            inverse = !inverse;
            tangle -= 180;
        }
        var result = !inverse ? tangle > timing : tangle < timing;
        if (!result)
            angle = min;
        inverse = false;
        tangle = angle;
        var tax = max;
        if (angle > 180)
        {
            inverse = true;
            tangle -= 180;
        }
        if (max > 180)
        {
            inverse = !inverse;
            tax -= 180;
        }
        result = !inverse ? tangle < tax : tangle > tax;
        if (!result)
            angle = max;
        return angle;
    }
    
    public Vector2 GetMousePosition()
    {
        var pos = new Vector2(Input.mousePosition.x / Screen.width, Input.mousePosition.y / Screen.height);

        return pos;
    }
    
    #endregion
}
