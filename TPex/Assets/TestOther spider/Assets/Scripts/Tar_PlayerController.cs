using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tar_PlayerController : MonoBehaviour
{
    private float distance;

    [Header("Grounding")]
    public CapsuleCollider capsuleCollider;
    public Transform body;
    private Vector3 bodyCentroid;
    private Vector3 bodyY;
    public float bodyOffsetHeight;

    [Header("Movement")]
    public GameObject target;
    public GameObject spiderT;

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
        distance = Vector3.Distance(transform.position, target.transform.position);
        Debug.Log(distance);

        if (breathing)
        {
            float t = (Time.time * 2 * Mathf.PI / breathePeriod) % (2 * Mathf.PI);
            float amplitude = breatheMagnitude * getColliderRadius();
            //Vector3 direction = body.TransformDirection(bodyY);

            body.transform.position = bodyCentroid + amplitude * (Mathf.Sin(t) + 1f) * bodyY;
        }

        // Handle keyboard control
 
       
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

            if (distance >= 2)
        { 
        transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(target.transform.position - transform.position), RotSpeed * Time.deltaTime);
        transform.position += transform.forward * Time.deltaTime * MoveSpeed;
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
