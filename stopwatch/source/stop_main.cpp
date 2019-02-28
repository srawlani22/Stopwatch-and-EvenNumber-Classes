#include <iostream>// included standard c++ library
#include "stop.h"// included the header file whch has the basic class structure
#include <ctime>// included ctime in order to time_t keyword from the library that counts the current time
using namespace std;


int main(){
    cout<< "********************The STOPWATCH Program******************"<< endl;
    StopWatch module;// decalred a variable to call the methods of the class

    cout<< "The watch starts"<< endl;
    module.start();// the watch starts with 0 seconds as soon as the user runs the programme

    cout<< "Watch Status: ";
    module.printWatch();// tells the status of the watch, always running at this point


    cout << endl << endl;

    

    cout<< "The watch is stopping" << endl;
    module.stop();// the watch stops using the stop method as soon user presses the key

    cout << "The elapsed time is :" << module.getElapsedTime()<< " seconds"<< endl;// getElapsed method tells the elapsed time in seconds

    cout<< "Watch Status: ";
    module.printWatch();// finally the new status of the watch is showed, which is stopped at this point.


    cout<< "/////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl<<endl;

    cout<< "Watch second starting up"<< endl;
    module.start();// the watch starts with 0 seconds as soon as the user runs the programme

    cout<< "Watch Status: ";
    module.printWatch();// tells the status of the watch, always running at this point

    char key;// the problem with the watch was that it would just show the elapsed time as 0 since there was nothing to stop the watch, so a user input stops the watch and tells the required elapsed time
    cout << "Press any key and then enter to stop the watch ";
    cin >> key ;// key is char so that the user can press any single key on their keyboard. 

    cout<< "The watch is stopping" << endl;
    module.stop();// the watch stops using the stop method as soon user presses the key

    cout << "The elapsed time is :" << module.getElapsedTime()<< " seconds"<< endl;// getElapsed method tells the elapsed time in seconds

    cout<< "Watch Status: ";
    module.printWatch();// finally the new status of the watch is showed, which is stopped at this point.


    cout<< "/////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl<<endl;

    cout<< "Watch 3 is starting"<< endl;
    module.start();// the watch starts with 0 seconds as soon as the user runs the programme

    cout<< "Watch Status: ";
    module.printWatch();// tells the status of the watch, always running at this point

    
    cout << "Press any key and then enter to stop the watch ";
    cin >> key ;// key is char so that the user can press any single key on their keyboard. 

    cout<< "The watch is stopping" << endl;
    module.stop();// the watch stops using the stop method as soon user presses the key

    cout << "The elapsed time is :" << module.getElapsedTime()<< " seconds"<< endl;// getElapsed method tells the elapsed time in seconds

    cout<< "Watch Status: ";
    module.printWatch();// finally the new status of the watch is showed, which is stopped at this point.


    return 0;
}