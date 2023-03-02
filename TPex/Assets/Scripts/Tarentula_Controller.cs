using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tarentula_Controller : MonoBehaviour
{

    Vector3 OriginalPosition;
    public float LegMoveSpeed = 7f;
    public float LegMoveDistance = 0.7f;
    public float LegStoppingDistance = 0.4f;
    public GameObject MovCube;
    public Tarentula_Controller OppositeLeg;
    bool IsMoving = false;
    bool Moving = false;

    //public bool Back_Leg = false;


    // Start is called before the first frame update
    void Start()
    {
        OriginalPosition = transform.position;
    }



    // Update is called once per frame
    void Update()
    {
        //transform.position = OriginalPosition; 
        float distanceToMoveCube = Vector3.Distance(transform.position, MovCube.transform.position);
        Debug.Log("distance" + distanceToMoveCube);

        if (Input.anyKey)
        {
            if ((distanceToMoveCube >= LegMoveDistance && OppositeLeg.IsItMoving() == false) || Moving)
            {
                Moving = true;
                transform.position = Vector3.Lerp(transform.position, MovCube.transform.position + new Vector3(0f, 0.03f, 0F), Time.deltaTime * LegMoveSpeed);
                OriginalPosition = transform.position;
                IsMoving = true;
                if (distanceToMoveCube < LegStoppingDistance)
                {
                    Moving = false;
                }
            }
            else
            {
                transform.position = Vector3.Lerp(transform.position, OriginalPosition + new Vector3(0f, -0.03f, 0F), Time.deltaTime * LegMoveSpeed * 3f);
                IsMoving = false;
            }
        }
        else
        {
            transform.position = Vector3.Lerp(OriginalPosition + new Vector3(0f, -0.03f, 0F), transform.position, Time.deltaTime * LegMoveSpeed * 3f);
            //OriginalPosition = transform.position;
            Moving = false;
        }
    }

    public bool IsItMoving()
    {
        return IsMoving;
    }
}
