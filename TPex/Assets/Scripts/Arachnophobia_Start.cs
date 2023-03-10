using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class Arachnophobia_Start : MonoBehaviour
{


    [SerializeField]
    private GameObject[] TableObjs;

    private Animation AnimTable;
    private float TimeT = 1f;

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < TableObjs.Length; i++)
        {
            StartCoroutine(AnimGo(i));
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
            //AnimTable = TableObjs[i].GetComponent<Animation>();
            TableObjs[ObjIndx].SetActive(true);
        //new WaitForSeconds(2);
        //TableObjs[i].GetComponent<Animator>().SetTrigger("Table");
        //AnimTable.Play();
        yield return null;
    }
}
