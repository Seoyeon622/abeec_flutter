using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneChange : MonoBehaviour
{
    // Start is called before the first frame update
    public int level;
    public GameObject Click;
    GameObject game;
    public GameObject warningPanel;
    bool gameActive = false; // 단어 개수에 따라 게임 실행여부 판단

    public int w_c; // 단어 개수

    void Start()
    {
        warningPanel.SetActive(false);

        /*        game = GameObject.Find("Game"); // MainMenu의 id변수를 가진 오브젝트 가져옴 
                Debug.Log(game.GetComponent<Game>().id + game.GetComponent<Game>().word_c.ToString());

                warningPanel.SetActive(true);
                warningPanel.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>().text = string.Format("{0}, {1}",
              game.GetComponent<Game>().id, game.GetComponent<Game>().word_c);
                w_c = game.GetComponent<Game>().word_c;*/
        //w_c = 5;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void closePanel()
    {
        GameObject clickBtn2 = EventSystem.current.currentSelectedGameObject;
        warningPanel.SetActive(false);


        DontDestroyOnLoad(Click);
    }

    public void Change() // 버튼을 누르면 레벨별로 level변수 지정하고 씬 전환
    {
        
        GameObject clickBtn = EventSystem.current.currentSelectedGameObject;
         game = GameObject.Find("Game");
        int w_c = game.GetComponent<Game>().word_c;

        string id = game.GetComponent<Game>().id;
        Debug.Log("00000000000000000000000");

        Debug.Log(id);
        Debug.Log(w_c);
        Debug.Log("00000000000000000000000");

        //Debug.Log(clickBtn.GetComponentInChildren<Text>().text);
        switch (clickBtn.GetComponentInChildren<Text>().text) // 버튼의 text에 따라 level설정
        {
            case "Easy":

                if (w_c < 4)
                {
                    int i = 4 - w_c;
                    gameActive = false;
                    warningPanel.SetActive(true);
                    warningPanel.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>().text = string.Format("단어 {0}개가 부족해요.", i);
                }
                else
                {
                    level = 8;
                    gameActive = true;
                }

                break;
            case "Normal":
                if (w_c < 6)
                {
                    int i = 6 - w_c;
                    gameActive = false;
                    warningPanel.SetActive(true);
                    warningPanel.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>().text = string.Format("단어 {0}개가 부족해요.", i);
                }
                else
                {
                    level = 12;
                    gameActive = true;
                }


                break;
            case "Hard":
                if (w_c < 7)
                {
                    int i = 7 - w_c;
                    gameActive = false;
                    warningPanel.SetActive(true);
                    warningPanel.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>().text = string.Format("단어 {0}개가 부족해요.", i);
                }
                else
                {
                    level = 14;
                    gameActive = true;
                }
                break;
            default: break;
        }
        // Debug.Log(level);

        if (gameActive)
        {
            SceneManager.LoadScene("EasyLevel"); //씬전환
        }
        DontDestroyOnLoad(Click); // 해당 오브젝트를 다른 씬에서 접근하여 사용하기 위하여 오브젝트 파괴하지 않고 유지
    }

    public void replay()
    {
        SceneManager.LoadScene("MainMenu");
    }
}