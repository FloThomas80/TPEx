using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Breath : MonoBehaviour
{
    [SerializeField]
    private GameObject Breath_Bar;
    [SerializeField]
    private float Inhale_Sec;
    private float Exhale_Sec = 10;
    //public AnimationCurve test;


    // Start is called before the first frame update
    void Start()
    {   


            Animation anim = GetComponent<Animation>();
            AnimationCurve curve;

            // create a new AnimationClip
            AnimationClip clip = new AnimationClip();
            clip.legacy = true;

            // create a curve to move the GameObject and assign to the clip
            Keyframe[] keys;
            keys = new Keyframe[3];
            keys[0] = new Keyframe(0.0f, 0.02f);
            keys[1] = new Keyframe(Inhale_Sec, 0.981f);
            keys[2] = new Keyframe(Exhale_Sec, 0.02f);
            curve = new AnimationCurve(keys);
            clip.SetCurve("", typeof(Transform), "m_LocalScale.z", curve);

            // update the clip to a change the color
            //curve = AnimationCurve.EaseInOut(0.0f, 1.0f, 5.0f, 0.0f );
            clip.SetCurve("", typeof(Material), "_Color.b", curve);

            // now animate the GameObject
            anim.AddClip(clip, clip.name);
            anim.wrapMode = WrapMode.Loop;
            anim.Play(clip.name);
    }


    // Update is called once per frame
    void FixedUpdate()
    {
        
    }
}
