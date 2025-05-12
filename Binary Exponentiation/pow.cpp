#include <iostream>
#include <cmath>
using namespace std;

double myPow(double number, int power) {
    if (power == 0) return 1.0;
    if (number == 0) return 0.0;
    if(number == -1 && power % 2 == 0) return 1.0;
    if(number == -1 && power % 2 != 0) return -1.0;

    long long binForm = power;
    if (power < 0) {
        number = 1 / number;
        binForm = -binForm;
    }
    double ans = 1.0;
    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans *= number; //5
        }
        number *= number;
        binForm /= 2;
    }
    return ans;
}

int main() {
    cout << myPow(3, 2) << endl; // Example usage

    return 0;
}
