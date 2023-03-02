using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tarentula_AIM_Ground : MonoBehaviour
{
    LayerMask LayerMask;
    GameObject RaycastOrigin;
    // Start is called before the first frame update
    void Start()
    {
        LayerMask = LayerMask.GetMask("Ground");
        RaycastOrigin = transform.parent.gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        RaycastHit hit;
        if(Physics.Raycast(RaycastOrigin.transform.position + new Vector3 (0f,0.01f,0f), -transform.up, out hit, Mathf.Infinity, LayerMask))
        {
            transform.position = hit.point + new Vector3(0f, 0.01f, 0f);
        }
    }
}
