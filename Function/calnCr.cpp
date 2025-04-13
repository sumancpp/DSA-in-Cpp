#include <iostream>
using namespace std;
int calfact(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
} 
int calnCr (int n, int r){
   int fact_n = calfact(n);
   int fact_r = calfact(r);
   int fact_nmr = calfact(n-r);

   return fact_n / (fact_r * fact_nmr);
}
 
int main (){
    int n = 8, r = 2;
   cout<<calnCr(n,r);

    return 0;
}