#include <iostream>
using namespace std;

// Min of two num
int minOfTwoNum (double num1, double num2){// parameters
    if(num1 > num2){
        return num2;
    }
    else{
        return num1;
    }
}
int main(){

    cout<<"The min of two num is" <<minOfTwoNum(10,11); // arguments
       
    return 0;
}