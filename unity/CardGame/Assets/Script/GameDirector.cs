using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;



[Serializable]
public class GameDirector : MonoBehaviour
{
    [SerializeField]
    GameObject[] hit_ob = new GameObject[2]; // 뒤집어진 카드 Object 저장
    Sprite[] check_card = new Sprite[2];     //뒤집어진 카드의 이미지 저장

    AudioSource audioSource;
    public AudioClip correctAudio;
    public AudioClip wrongAudio;
    public AudioClip doneAudio;

    public GameObject wordPanel; // *****맞추면 단어 보여주는 창*****

    private GameObject wordText; // *****단어 텍스트*****


    public int touch_c = 0;
    public int score = 0;
    public static STATE state = STATE.START;
    public enum STATE
    {
        START, HIT, WAIT, IDLE
    };

    private void Awake()
    {
    //    DontDestroyOnLoad(gameObject);
    }
    // Start is called before the first frame update
    void Start()
    {
        audioSource = this.GetComponent<AudioSource>();
        wordPanel.SetActive(false); //*****
       
    }

    public void Count_minus()
    {
        touch_c -= 1;
    }

    // Update is called once per frame
    void Update()
    {
        switch (state)
        {
            case STATE.IDLE:
                if (Input.GetMouseButtonDown(0))
                {
                    try
                    {
                        Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                        RaycastHit2D hit = Physics2D.Raycast(pos, Vector2.zero);

                        hit_ob[touch_c] = hit.transform.gameObject;
                        hit.transform.gameObject.GetComponent<rotation1>().react();


                        //Debug.Log(hit.transform.gameObject.name);
                    }
                    catch (NullReferenceException ie)
                    {

                    }
                }
                break;

            case STATE.START:
                break;

            case STATE.HIT:
                StartCoroutine(check_Card());
                if (Input.GetMouseButtonDown(0)&&wordPanel.activeSelf == true)  //여기 if문 삭제해도 무방. 단어창 띄워주고 터치하면 빨리 사라지게 하려고 만듦.
                {
                    this.GetComponent<Timer>().timeStop = false;
                    wordPanel.SetActive(false);
                    state = STATE.IDLE;
                }
                break;  
        }

    }

    public IEnumerator check_Card()
    {
        if (touch_c == 1)
        {
            state = STATE.IDLE;
            yield return null;
        }
        else if (touch_c == 2)
        {

            if (check_card[0] == check_card[1]) //이미지 비교
            {
                
                touch_c = 0;
                score += 1; // 짝 맞으면 점수 1점씩 더함 총 8카드에서는 4점이 최대
                audioSource.clip = correctAudio;
                audioSource.Play();

                StartCoroutine(show_Word());

                if (score == GetComponent<BuildGame>().level / 2)
                {
                    audioSource.clip = doneAudio;
                    audioSource.Play();
                    Invoke("gameClear", 2);
                    yield return null;
                }
            }
            else
            {
                audioSource.clip = wrongAudio;
                audioSource.Play();
                StartCoroutine(hit_ob[0].GetComponent<rotation1>().RotateCard_back());
                StartCoroutine(hit_ob[1].GetComponent<rotation1>().RotateCard_back());

                yield return new WaitForSeconds(0.7f);
                state = STATE.IDLE;


            }
        }
    }

    public void selected_Card(Sprite worldImage) //이 함수는 카드를 클릭하면 호출된다. 호출되었을 때 클릭한 카드를 배열에 저장한다.
                                                 //배열에 클릭된 카드 2장을 저장하는 함수
    {
        check_card[touch_c] = worldImage;
    }

    void gameClear()
    {
        
        SceneManager.LoadScene("GameClear");

    }

    public void touch_count()
    {
        touch_c += 1;
    }

    public IEnumerator show_Word()   //*****
    {
        
        yield return new WaitForSeconds(0.5f);
        this.GetComponent<Timer>().timeStop = true;
        wordPanel.SetActive(true);
        

        wordPanel.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>().text = check_card[0].name;
        wordPanel.transform.GetChild(1).GetComponent<Image>().sprite = check_card[0];
        
        yield return new WaitForSeconds(1.3f);
        this.GetComponent<Timer>().timeStop = false;
        wordPanel.SetActive(false);
        state = STATE.IDLE;

    }


}