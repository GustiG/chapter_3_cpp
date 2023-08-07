#include <iostream>
using namespace std;

int main(){

    int host_user_num, guest_user_num;
    cout << "Host: ";
    cin >> host_user_num;
    system("cls");
    cout << "Guest: ";
    cin >> guest_user_num;

    // ternary:
    (host_user_num == guest_user_num)? 
    cout <<  "Correct!": cout << "Failed!";
    /*if(host_user_num == guest_user_num)
        cout << "Correct!\n";
    else
        cout << "Try again\n";*/

    
    return 0;
}