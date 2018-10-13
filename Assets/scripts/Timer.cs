﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour {


    #region Fields
    float totalSeconds = 0;
    float elapsedSeconds = 0;
    bool running = false;
    bool started = false;
    #endregion

    #region Properties
    public float Duration
    {
        set
        {
            if(!running)
            {
                totalSeconds = value;
            }    
        }
    }
    public bool Finished
    {
        get { return running; }
    }
    public float SecondsLeft
    {
        get
        {
            if(running)
            {
                return totalSeconds - elapsedSeconds;
            }
            else
            {
                return 0;
            }
        }
    }
    #endregion

    #region Methods
    private void Update()
    {
        if(running)
        {
            elapsedSeconds += Time.deltaTime;
            if(elapsedSeconds >= totalSeconds)
            {
                running = false;
            }
        }    
    }
    public void Run()
    {
        if(totalSeconds > 0)
        {
            started = true;
            running = true;
            elapsedSeconds = 0;
        }    
    }
    public void Stop()
    {
        started = false;
        running = false;
    }
    public void AddTime(float seconds)
    {
        totalSeconds += seconds;
    }
    #endregion
}
