#include <iostream>
using namespace std;

void checkPrime(int num){
    int count = 0;
    for(int i=1; i<=num; i++){
        if(num % i == 0){
            count++ ;
        }
        
      }
      
      if(count == 2){
        cout<<"This is a prime number";
      }else {
        cout<<"This is not a prime number";
      }
}
  
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    checkPrime(num);

}