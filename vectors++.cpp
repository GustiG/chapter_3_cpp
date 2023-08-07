#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> even;
    vector<int> odd;
    int sum_even = 0;
    int product_odd = 1;

    cout << "List: ";

    for (int num : list) {
       cout <<  num << " ";
    }
    cout<< endl;

    // append evens and odds to their respective vector variables and do calculations with them:

    for (int i = 0; i < list.size(); i++) {
        if (list[i] % 2 == 0)  {
            even.push_back(list[i]);
            sum_even += list[i];
        } else {
            odd.push_back(list[i]);        
            product_odd += list[i];
        }
              
    }
    cout << "Evens: ";
    for (int num : even)
        cout << num << " ";

    cout << endl;
    cout << "Sum of evens: " << sum_even;
   
    cout << endl << "Odds: ";

    for (int num : odd)
        cout << num << " ";
    cout << endl;
    cout << "Product of odds: " << product_odd;

    return 0;
    
}





