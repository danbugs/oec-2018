using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

    Rigidbody2D rb2d;
    BoxCollider2D boxCollider2D;
    Vector2 position;
    int allowedMoves = 8;
    int dieRoll;
    int direction = 1;
    int movementType = 0;
    Timer clock;
    int Z = 1;
    int M = - 1;

	// Use this for initialization
	void Start () 
    {
        position = transform.position;
        rb2d = GetComponent<Rigidbody2D>();
        boxCollider2D = GetComponent<BoxCollider2D>();
	}
	
	// Update is called once per frame
	void FixedUpdate ()
    {
        if(allowedMoves > 6)
        {
            allowedMoves = 6;
        }
        if(Input.GetKeyDown("space"))
        {
            dieRoll = direction*1;
            Movement(dieRoll, false);
            Debug.Log("Allowed moves: (space)" + allowedMoves);
            Debug.Log("Die roll: (space) " + dieRoll);
        }
	}

    void Movement (int moves, bool medusa)
    { 
        movementType = allowedMoves - Mathf.Abs(moves);
        if(movementType >= 0)
        {
            position.x += dieRoll;
            if(medusa)
            {
                allowedMoves = allowedMoves + direction*Mathf.Abs(moves);  
            }
            else
            {
                if(direction < 0)
                {
                    allowedMoves = allowedMoves + direction * Mathf.Abs(moves); 
                }
                else
                {
                    allowedMoves = allowedMoves - direction * Mathf.Abs(moves);  
                }
            }
        }
        else if(movementType < 0)
        {
            if(movementType == -1)
            {
                position.y -= 1;
                direction = -direction;
                allowedMoves = 7;
            }
            else{
                position.x += direction * allowedMoves;
                position.y -= 1;
                direction = -direction;
                dieRoll = direction * (Mathf.Abs(moves) - allowedMoves);
                position.x += moves;
                allowedMoves = 7 - Mathf.Abs(moves); 
            }
        }

        gameObject.transform.position = position;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.CompareTag("Zeus"))
        {
            dieRoll = direction * Z;
            Movement(dieRoll, false);
            Destroy(collision.gameObject);
            Debug.Log("Allowed moves: (trigger) " + allowedMoves);
            Debug.Log("Die roll: (trigger) " + dieRoll);
        }
        else if(collision.CompareTag("Medusa"))
        {
            dieRoll = direction * M;
            Movement(dieRoll, true);
            Destroy(collision.gameObject);
            Debug.Log("Allowed moves: (trigger) " + allowedMoves);
            Debug.Log("Die roll: (trigger) " + dieRoll);
        }  
    }
}
