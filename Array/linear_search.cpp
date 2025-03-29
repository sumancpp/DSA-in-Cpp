#include<iostream>
using namespace std;
int search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
    if(arr[i]==target){
        return i;
    }
   }
   return -1;
   }
      
int main(){
     cout<<"Enter the size of the array ";
     int size;
     cin>>size;
     int arr[size];
     cout<<"Enter the elements ";
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }
     int target;
     cout<<"Enter the target ";
     cin>>target;
     int result=search(arr, size, target);
     if (result !=-1){
        cout<<"Found your target at index "<<result<<" number";
     }
     else{
        cout<<"We cant find your target in the array";
     }

    
    return 0;
}