#ifndef EVENNUMBER_H
#define EVENNUMBER_H
#include <iostream>

// class evenNumber
// shows the even numbers upto the mark where the user enters the value.
// has two member variables, two constructors, and 4 methods
class EvenNumber{
 public:
    int num1;
    int num2;
    

    
    EvenNumber();

    EvenNumber(int num);
    int getNumber();// method getNumber- compares with the number entered by the user 
    int getValue();// method getValue- gets the value from the user
    int getNext();// gets the next value
    int petPrevious();// gets the previous value
};

#endif