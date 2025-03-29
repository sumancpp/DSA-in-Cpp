//write a function to find the sum and product of all numbers in an array
#include<iostream>
using namespace std;
int findSum(int arr[],int size,int ans){
    for(int i=0;i<size;i++){
        ans=ans+arr[i];
    }
    return ans;
}
int main(){
    int arr[]{1,3,5,7,9};
    int size = 5;
    int ans = 0;
    // findSum(arr,size,ans);
    cout<<"The sum of the elements are "<<findSum(arr,size,ans)<<endl;

    return 0;
}