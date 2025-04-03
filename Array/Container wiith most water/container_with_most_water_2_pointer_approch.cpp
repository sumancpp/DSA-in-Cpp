#include<iostream>
using namespace std;
int main(){

int arr[]={1,8,6,2,5,4,8,3,7};
int size = 9;
int lp = 0;
int rp = size-1;
int maxWater = 0;

while(lp<rp){
    int w = rp - lp;
    int h = min(arr[rp] , arr[lp]);
    int currWater = w * h;
    maxWater = max(currWater,maxWater);
    arr[lp] < arr[rp] ? lp++ : rp--;

}
  cout<<maxWater;

 return 0;
}

// This code takes time o(n)