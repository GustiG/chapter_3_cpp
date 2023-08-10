#include <iostream>
using namespace std;

// function to add numbers
int add_numbers(int n1, int n2) {
    return n1 + n2;
}

// function to multiply numbers
int multiply_numbers(int n1, int n2) {
    return n1 * n2;
}

int main() {
    int sum, product;

    sum = add_numbers(5, 4);
    cout << "Sum = " << sum << "\n";

    product =multiply_numbers(5, 4);
    cout << "Product = " << product;

    return 0;
}