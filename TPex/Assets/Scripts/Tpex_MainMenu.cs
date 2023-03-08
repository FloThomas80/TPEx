using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Tpex_MainMenu : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField]
    private TMP_Dropdown SceneList;
    [SerializeField]
    private TMP_Text Console;

    private string SelectedScene;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Launch()
    {
        SelectedScene = SceneList.options[SceneList.value].text;
   

        if (DoesSceneExist(SelectedScene))
        {
            Console.text = SelectedScene;


            SceneManager.LoadScene(SelectedScene);
        }
        else
        {
            Console.text = (SelectedScene + " Scene introuvable");
        }
    }


    public static bool DoesSceneExist(string name) // regarde si la scene que l'on veut lancer existe ou non
    {
        if (string.IsNullOrEmpty(name))
            return false;

        for (int i = 0; i < SceneManager.sceneCountInBuildSettings; i++)
        {
            var scenePath = SceneUtility.GetScenePathByBuildIndex(i);
            var lastSlash = scenePath.LastIndexOf("/");
            var sceneName = scenePath.Substring(lastSlash + 1, scenePath.LastIndexOf(".") - lastSlash - 1);

            if (string.Compare(name, sceneName, true) == 0)
                return true;
        }

        return false;
    }
}
