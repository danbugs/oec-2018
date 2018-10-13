using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawning : MonoBehaviour {

    [SerializeField]
    GameObject medusa;

    [SerializeField]
    GameObject zeus;

    int medusaFrequency = 3;
    int zeusFrequency = 3;
    int screenSize = 8;

    float startX = -3.5f;
    float startY = 3.5f;

	// Use this for initialization
	void Start () {
        int medusaPerRow = Mathf.FloorToInt(screenSize / medusaFrequency);
        int numberOfMedusas = medusaPerRow * screenSize/2;

        for (int j = 0; j < numberOfMedusas; j++)
        {
            for (int i = 1; i < medusaPerRow + 1; i++)
            {
            Instantiate(medusa, new Vector2(-3.5f + medusaFrequency*i + 1, 3.5f - j), Quaternion.identity);
            }  
        }
        int zeusPerRow = Mathf.FloorToInt(screenSize / zeusFrequency);
        int numberOfZeus = medusaPerRow * screenSize / 2;

        for (int j = 0; j < numberOfZeus; j++)
        {
            for (int i = 1; i < zeusPerRow + 1; i++)
            {
                Instantiate(zeus, new Vector2(-4.5f + zeusFrequency * i, 3.5f - j), Quaternion.identity);
            }
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
