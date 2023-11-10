using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using SparseDesign.ControlledFlight;


public class PlayerController : MonoBehaviour
{
    public Animator playerAnimator;

    public Animator womanOneAnim;

    public Animator womanTwoAnim;

    public Animator womanThreeAnim;

    public Animator womanFourAnim;

   
    public GameObject gateFx;
    public GameObject enemyFx;
    public GameObject santaFx;
    
    public GameObject sled;
    public GameObject obstacleFx;
    public bool finnish;
    private bool stop;
    void Start()
    {
        
    }

    
    void Update()
    {
        if (GameManager.Instance.gameState == GameManager.GameState.Play)
        {
            playerAnimator.SetBool("isMoving", true);
        }

        if (finnish)
        {
            Camera.main.transform.DOLookAt(gameObject.transform.position, 2f);
        }

    }

    public void FixedUpdate()
    {
        GameManager.Instance.ChangeLevel();
                      
    }

    public void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Collectable"))
        {
            Destroy(other.gameObject);
            GameManager.Instance.score += 2;
            UIManager.Instance.variable = 2;
            UIManager.Instance.value = UIManager.Instance.progress.value;
            UIManager.Instance.plus = true;

            Vibration.VibratePop();

        }

        if (other.gameObject.CompareTag("Obstacle"))
        {
            Destroy(other.gameObject);
            GameManager.Instance.score -= 5;
            UIManager.Instance.variable = -5;
            UIManager.Instance.value = UIManager.Instance.progress.value;
            UIManager.Instance.plus = true;
            Instantiate(obstacleFx, other.transform.position, Quaternion.identity);

            Vibration.VibratePeek();

            if (GameManager.Instance.score <= 0)
            {
                stop = true;
                GameManager.Instance.GameLose();
                GameManager.Instance.moveSpeed = 0;
                GameManager.Instance.speedSideways = 0;
                womanOneAnim.SetTrigger("lose");

                Vibration.VibratePeek();

            }
        }

        if (other.gameObject.CompareTag("Gift"))
        {
            Destroy(other.gameObject);
            GameManager.Instance.score += 10;
            UIManager.Instance.variable = 10;
            UIManager.Instance.value = UIManager.Instance.progress.value;
            UIManager.Instance.plus = true;
            Vibration.VibratePop();
            Vector3 vec = new Vector3(other.transform.position.x, other.transform.position.y + 2, other.transform.position.z);
            Instantiate(gateFx, other.transform.position, Quaternion.identity);


        }

        if (other.gameObject.CompareTag("CandyCane"))
        {
            Destroy(other.gameObject);
            GameManager.Instance.score += 20;
            UIManager.Instance.variable = 20;
            UIManager.Instance.value = UIManager.Instance.progress.value;
            UIManager.Instance.plus = true;
            
            Vector3 vec = new Vector3(other.transform.position.x, other.transform.position.y + 2, other.transform.position.z);
            Instantiate(gateFx, other.transform.position, Quaternion.identity);
        }

        if (other.gameObject.CompareTag("Hat"))
        {
            Destroy(other.gameObject);
            GameManager.Instance.score += 15;
            UIManager.Instance.variable = 15;
            UIManager.Instance.value = UIManager.Instance.progress.value;
            UIManager.Instance.plus = true;
            
            Vector3 vec = new Vector3(other.transform.position.x, other.transform.position.y + 2, other.transform.position.z);
            Instantiate(gateFx, other.transform.position, Quaternion.identity);
        }

        if (other.gameObject.CompareTag("Tree"))
        {
            Destroy(other.gameObject);
            GameManager.Instance.score += 5;
            UIManager.Instance.variable = 5;
            UIManager.Instance.value = UIManager.Instance.progress.value;
            UIManager.Instance.plus = true;

            Vibration.VibratePop();

            Vector3 vec = new Vector3(other.transform.position.x, other.transform.position.y + 2, other.transform.position.z);
            Instantiate(gateFx, other.transform.position, Quaternion.identity);
        }

        if (other.gameObject.CompareTag("Enemy"))
        {
            Destroy(other.gameObject);
            GameManager.Instance.score -= 10;
            UIManager.Instance.variable = -10;
            UIManager.Instance.value = UIManager.Instance.progress.value;
            UIManager.Instance.plus = true;
            
            Vibration.VibratePeek();
            
            Instantiate(enemyFx, other.transform.position, Quaternion.identity);
        }

        if (other.gameObject.CompareTag("Finish"))
        {
            TimeManager.Instance.transform.DOMoveX(0f, 3f).OnComplete(() => sled.GetComponent<MissileSupervisor>().enabled = true);

            GameManager.Instance.currentText.gameObject.SetActive(false);
            UIManager.Instance.progress.gameObject.SetActive(false);
           
            GameManager.Instance.moveSpeed = 0;
            GameManager.Instance.speedSideways = 0;


            womanOneAnim.SetTrigger("jump");
            womanTwoAnim.SetTrigger("jump");
            womanThreeAnim.SetTrigger("jump");
            womanFourAnim.SetTrigger("jump");
            
            GameManager.Instance.player.transform.parent = GameManager.Instance.santa.transform;
            
            Instantiate(santaFx, other.transform.position, Quaternion.identity);
            Camera.main.transform.DOLocalMove(new Vector3(5.15f, 3.8f, -5.45f), 2f);
            Camera.main.transform.DOLocalRotate(new Vector3(12f, -40f, 0f), 2f);
            Camera.main.transform.parent.gameObject.GetComponent<CameraFollow>().enabled = false;

            GameManager.Instance.player.GetComponent<Rigidbody>().isKinematic = true;
            
            if (!stop)
            {
                transform.DOJump(GameManager.Instance.lap.position, 2, 1, 1);
                TimeManager.Instance.transform.DOMoveX(1f, 3f).OnComplete(() => GameManager.Instance.GameWin());
            }

            other.gameObject.GetComponent<Canvas>().DOKill();

            Vibration.VibratePop();

            finnish = true;
        }

        if (other.gameObject.CompareTag("air"))
        {
            womanOneAnim.SetTrigger("sit");
            womanTwoAnim.SetTrigger("sit");
            womanThreeAnim.SetTrigger("sit");
            womanFourAnim.SetTrigger("sit");

           
        }
    }
}
