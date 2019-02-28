#include <iostream>
#include "even.h"
using namespace std;

// constructor 1
// sets the first number to 0 so that all the outputs start with 0
// Input and Output: None
EvenNumber::EvenNumber(){
     num1=0;
     
}


// constructor 2
// sets the seond number equal to the number that will be entered by the user
// Input and Output: None
EvenNumber::EvenNumber(int num){
     num2=num;
}


// function getValue
// the function simply return 0 because num1=0 in first constructor, the only reason I created this method was becuase while loop was running infinitely otherwise inside the main function
// Input and Output: None
int EvenNumber::getValue(){
    return num1;
}


// function getNumber
// gets the input by the user, sets it equal to num 2 and returns num 2 which further returns num using the second constructor
// Input and Output: None
int EvenNumber::getNumber(){
    return num2;
}


// function getNext
// gets the even numbers upto the mark enterd by the user by adding two to it. 
// Input and Output: None
int EvenNumber::getNext(){
    num1=num1 + 2;
    return num2;
}


// function petPrevious
// gets the even numbers previous to the user's input
// Input and Output: None
int EvenNumber::petPrevious(){
    num1=num1-2;
    return num2;
}