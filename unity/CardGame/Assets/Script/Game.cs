using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class Game : MonoBehaviour
{

    public string id;
    public int word_c;
    public Dictionary<string, dynamic> k;
    public object obj1;
    public string str;
    // Start is called before the first frame update
    void Start()
    {
        /*k = new Dictionary<string, dynamic> { };
        k.Add("args", "qwer");
        k.Add("w_c", 3);
        Debug.Log(k);
        setId(k);*/

        //setId("qwer,1");
    }
    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void setId(string args)
    {
        //Debug.Log(args);
        string[] arg = args.Split(',');
        id = arg[0];
        word_c = Convert.ToInt32(arg[1]);
        

        //k = obj;
        //str = JsonUtility.ToJson(obj);
        //id = a["args"];
        // word_c = a["w_c"];

        //Debug.Log("Flutter to Unity: " + args);
        //k = { "args":"qwer",}
        //word_c = w_c;
    }
}