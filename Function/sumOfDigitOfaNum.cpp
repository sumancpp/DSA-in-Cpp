#include <iostream>
using namespace std;
int sumOfDigit(int num){
    int sum = 0;
    while (num > 0){
      int reminder = num % 10;
      sum = sum + reminder;
      num = num / 10;
    }
    return sum;
}
int main (){

    cout << sumOfDigit(245);

    return 0;
}