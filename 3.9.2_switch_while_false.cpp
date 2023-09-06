#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 'a', 'b', 'c', or 'q' to quit. ";
    char answer;
    bool quit = false;

    while(!quit) {
        cin >> answer;

        if (answer == 'q') {
            cout << "Bye!\n";
            break;
        }

        switch (answer) {
            case 'a':
                cout << "'a' is for answer.\n";
                break;
            
            case 'b':
                cout << "'b' is for bool.\n";
                break;

            case 'c':
                cout << "'c' is for char.\n";
                break;
   
            default:  
                cout << "Try again.\n";

        }       

    }

    return 0;
}