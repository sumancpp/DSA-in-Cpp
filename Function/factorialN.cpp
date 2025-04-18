#include <iostream>
using namespace std;
 int factN(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
 }
int main(){
     cout<<factN(5)<<endl;
     cout<<factN(8);
   
    return 0;
}