#include <iostream>// included standard c++ library
#include "stop.h"// included the header file whch has the basic class structure
#include <ctime>// included ctime in order to time_t keyword from the library that counts the current time
using namespace std;

// Refrence 1: Jonus helped me on a couple of functions on this assignment, namely start and isWorking
// Refrence 2: I got the hang of ctime and time_t from Stackoverflow


// Constructor Stopwatch that sets the starting, stopping, and the elapsed time equal to 0 initially, since the watch starts counting from 0 seconds
//Input: None
//Output: None
StopWatch::StopWatch(){
     startTime=0;// declared all the three time variables 0, or otherwise the watch starts with 1.
     stopTime=0;
     elapsedTime=0;
}

// function start: the keyword time_t starts counting the time when the user runs the program
//Input: time variable timer passes the current time with reference into starttime to start the watch
// Output: NA
void StopWatch::start(){
    time_t timer;
    startTime=time(&timer);// passed the timer variable with reference in order to count the current time. These are the function where stck overflow helped me.
    stopTime=0;// making stoptime 0 again, just double checking 
}


// function stop: the keyword time_t counts the time from the start function and is stopped using the stop function, the only thing with time_t is that it needs user input to start and stop
//Input: timer is passed with reference to time_t
// Output: stops the timer, which means time_t is stopped from counting the current time
void StopWatch::stop(){
    time_t timer;
    stopTime=time(&timer);
}

// function getElapsedTime: sbtracts the stopping time from the current time to display the elapsed time after the user stops the watch
//Input: NA
// Output: NA
int StopWatch::getElapsedTime(){
    elapsedTime = stopTime-startTime;// simple math, elapsed time is the difference of stop time and start time
    return elapsedTime;
}

// function isWorking: tells the staus of the watch, whether it is running or stopped
//Input: checks if the stoptime is true
// Output: if the stoptime is true, returns true, otherwise returns false.
bool StopWatch::isWorking(){
    if(stopTime==0){
        return true;
    }
    else{
        return false;
    }
}


// function printWatch: prints the status of the watch
//Input: NA
// Output: returns true if the watch is running otherwise returns false, in terms of cout statements. 
void StopWatch::printWatch(){
    if(isWorking()){
        cout<< "The stopwatch is still running!"<< endl;
    }
    else{
        cout<< "The stopwatch has stopped" << endl;
    }
}