#include <iostream>
using namespace std;

// function to check prime number
int check_prime(int n) {

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        return 0;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    bool result = check_prime(67);

    if (result == 1)
        cout << "Prime Number";
    else
        cout << "Non-prime Number";

    return 0;
}
