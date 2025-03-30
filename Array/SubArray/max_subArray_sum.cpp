//brute force approch
#include<iostream>
using namespace std;
int main(){
     int arr[]={1,2,-3,4,5};
     int size=5;
     int maxSum=arr[0];
     for(int st=0;st<size;st++){
        int curSum=0;
        for(int end=st;end<size;end++){
         curSum+=arr[end];
         maxSum=max(curSum,maxSum);//Update maxSum with the larger value
        }
     }
     cout<<"The maximum subarray is "<<maxSum;
     
    return 0;
}