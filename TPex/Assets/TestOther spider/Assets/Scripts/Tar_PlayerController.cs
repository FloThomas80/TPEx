using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tar_PlayerController : MonoBehaviour
{


    [Header("Grounding")]
    public CapsuleCollider capsuleCollider;
    public Transform body;
    private Vector3 bodyCentroid;
    private Vector3 bodyY;
    public float bodyOffsetHeight;

    [Header("Movement")]
    public float MoveSpeed = 1.3f;
    public float RotSpeed = 10.0f;

    [Header("Breathing")]
    public bool breathing;
    [Range(0.01f, 20)]
    public float breathePeriod;
    [Range(0, 1)]
    public float breatheMagnitude;



    private void Start()
    {
        bodyY = body.transform.up;
        bodyCentroid = body.transform.position + getScale() * bodyOffsetHeight * transform.up;
    }



    void Update()
    {
        if (breathing)
        {
            float t = (Time.time * 2 * Mathf.PI / breathePeriod) % (2 * Mathf.PI);
            float amplitude = breatheMagnitude * getColliderRadius();
            //Vector3 direction = body.TransformDirection(bodyY);

            body.transform.position = bodyCentroid + amplitude * (Mathf.Sin(t) + 1f) * bodyY;
        }
        // Handle keyboard control
        // This loop competes with AdjustBodyTransform() in LegController script to properly postion the body transform
       
            float ws = Input.GetAxis("Vertical") * MoveSpeed * Time.deltaTime;
            transform.Translate(0, 0, ws);

            float ad = Input.GetAxis("Horizontal") * MoveSpeed * Time.deltaTime;
            transform.Translate(ad, 0, 0);

            if (Input.GetKey(KeyCode.Q))
            {
                transform.Rotate(0, -RotSpeed * Time.deltaTime, 0);
            }
            if (Input.GetKey(KeyCode.E))
            {
                transform.Rotate(0, RotSpeed * Time.deltaTime, 0);
            }


            
     
    }

    public float getColliderRadius()
    {
        return getScale() * capsuleCollider.radius;
    }
    public float getScale()
    {
        return transform.lossyScale.y;
    }
}
