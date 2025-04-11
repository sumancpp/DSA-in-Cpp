#include <iostream>
using namespace std;
int sumOfNNum (int a){
    int total = 0;
    for(int i=1; i<=a; i++){
        total += i;
    }
    return total;
}
int main() {
    int num;
    cout<<"Enter a number ";
    cin>>num;
    cout<< "The sum of 1 to "<<num <<" is "<<sumOfNNum(num);
     

    return 0;
}