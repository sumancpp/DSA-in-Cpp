#include <iostream>
using namespace std;
  void fibonacci(int num){
    int num1 = 0;
    int num2 = 1;
    int nextNum;
    for(int i=1; i<=num; i++){
        cout<<num1<<" ";
        nextNum = num1 + num2;
        num1 = num2; 
        num2 = nextNum;
    }
     cout<<endl;
    }
int main () {
    
   fibonacci(10);


    return 0;
}