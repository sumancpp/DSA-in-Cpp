//Kadane's Algorithm
#include<iostream>
using namespace std;
int main(){
     int arr[]={1,2,-3,4,5};
     int size=5;
     int currSum = 0;
     int maxSum=INT16_MIN;
     for(int i = 0;i<size;i++){
        currSum += arr[i];
        maxSum=max(currSum,maxSum);//Update maxSum with the larger value
        if(currSum < 0){
         currSum = 0;
        }
        }
     
     cout<<"The maximum subarray is "<<maxSum;
     
    return 0;
}