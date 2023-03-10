using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class Arachnophobia_Start : MonoBehaviour
{


    [SerializeField]
    private GameObject[] TableObjs;

    [SerializeField]
    private GameObject[] Toactiv;

    private Animation AnimTable;
    private float TimeT = 0.3f;

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < TableObjs.Length; i++)
        {
            StartCoroutine(AnimGo(i));
            
            TimeT++; ///<------ beurk
            //StartCoroutine(TimeToGo(TimeT));
        }
    }
    //private IEnumerator TimeToGo(float t)
    //{
    //    //Debug.Log("");
    //    new WaitForSeconds(t);
    //}
    private IEnumerator AnimGo(int ObjIndx)
    {

            //TimeToGo += 1000f;
            //AnimTable = TableObjs[ObjIndx].GetComponent<Animation>();
            
            //
            //TableObjs[i].GetComponent<Animator>().SetTrigger("Table");
            
        yield return new WaitForSeconds(TimeT);
        TableObjs[ObjIndx].SetActive(true);

        if (ObjIndx==TableObjs.Length-1)
        {
            for (int i = 0; i < Toactiv.Length; i++)
            {
                Toactiv[i].SetActive(true);
            }

        }
        //AnimTable.Play();
    }
}
