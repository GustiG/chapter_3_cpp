#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;
    cout <<"**CodeBeauty calculator**" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation) 
    {
        case '-': cout << num1 << operation << num2 << " = " << num1 - num2;
        break;
        case '+': cout << num1 << operation << num2 << " = " << num1 + num2;
        break;
        case '/': cout << num1 << operation << num2 << " = " << num1 / num2;
        break;
        case '*': cout << num1 << operation << num2 << " = " << num1 * num2;
        break;
        case '%': 
            bool is_num1_int, is_num2_int;
            is_num1_int = ((int)num1==num1); // 5 == 5.0
            is_num2_int = ((int)num2 == num2);

            if(is_num1_int && is_num2_int)
                cout << num1 << operation << num2 << " = " << int(num1) % (int)num2;
            else
                cout << "Not valid";
            break;
    default: cout << "Not a valid operation!" << endl;

        
    }
    return 0;
}