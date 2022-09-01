// NAME: Ben Smith
// PROGRAM STATUS: Complete

// This program calculates the time it will take sound to travel a given distance
// through a given medium. Distance and medium are provided by the user. 


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double AIR_FPS = 1100,        // speed of sound through air (feet per second)
                 WATER_FPS = 4900,      // speed of sound through water (feet per second)
                 STEEL_FPS = 16400;     // speed of sound through steel (feet per second)
    int choice;                         // user's menu choice
    double distance,                    // distance sound will travel (input by user)
           speed,                       // speed of sound (determined by user's choice of medium)
           time;                        // time it will take the sound to travel the given distance

    // set output precision
    cout << setprecision(4) << fixed;
    
    // display menu
    cout << "Enter the number corresponding to your choice of medium:\n";
    cout << "[1] Air\n";
    cout << "[2] Water\n";
    cout << "[3] Steel\n";

    // get user menu choice
    cin >> choice;

    // validate menu choice
    if (choice == 1 or choice == 2 or choice == 3)
        {
            // get user input for distance
            cout << "Enter the distance (in feet) the sound will travel.\n";
            cin >> distance;

            // determine speed based on menu choice
            switch (choice)
                {
                    case 1:
                        speed = AIR_FPS;
                        break;
                    case 2:
                        speed = WATER_FPS;
                        break;
                    case 3:
                        speed = STEEL_FPS;
                        break;
                }

            // calculate time
            time = distance / speed;

            // display time
            cout << "It will take "; 
            cout << time; 
            cout << " seconds for the sound to travel ";
            cout << distance << " feet.";
        }
    // if menu choice is invalid, display message and end program
    else 
        cout << "Restart the program and enter a valid menu choice";
        
    return 0;
}







