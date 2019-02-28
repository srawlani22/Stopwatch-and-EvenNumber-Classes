#ifndef STOP_H
#define STOP_H

#include <iostream>
#include <ctime>

// class StopWatch
// a class that counts the elapsed time in seconds using different methods
// has 4 member variables, one constructor, and 5 methods
class StopWatch{
    private:// all the member variables are private so that they cannot be changes
        time_t timer;// time_t counts the current time
        int startTime;// variable that starts time
        int stopTime;// variable that stops time
        int elapsedTime;// variable counts the elapsed time

    public: 
        StopWatch();// defined a constructor that has all the member variables decalred to 0 initially
            void start();// method start that starts the watch
            void stop();// method stop that stops the watch
            int getElapsedTime();// method elapsedTime that calculates the elapsed time
            void printWatch();// method printWatch prints the status of the watch
            bool isWorking();// method isWorking that checks if the watch is running or not. 
};

#endif