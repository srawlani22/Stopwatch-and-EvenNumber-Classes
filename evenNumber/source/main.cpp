#include <iostream>
#include "even.h"
using namespace std;

int main(){
    EvenNumber number;// called the class with a variable name to 
    cout<< "Enter the starting number: "; 
    cin >> number.num2;// the user enters the number

    
   
    
    while(number.getValue() < number.getNumber()){// the while loop checks if the getValue(uner value) is less than the getNumber(incrementedv value) and prints the next number upto the limit.
         number.getNext();// gets the next number
        cout << number.getValue()<< endl;// prints the series of all numbers upto the number entered by the user
    }

    while(number.getValue() > number.getNumber()){// this while is just the opposite of the previous one, the numbers are returned in opposite order.
         number.petPrevious();
        cout << number.getValue()<< endl;
    }
    return 0;
}