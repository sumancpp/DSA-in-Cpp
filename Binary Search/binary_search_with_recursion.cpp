#include<iostream>
#include<vector>
using namespace std;

int recbinsearch(vector<int>arr, int target, int start, int end){
    if(start <= end){
      int mid = start + (end - start) / 2;
      if(target > arr[mid]){ //2nd half
        return recbinsearch(arr, target, mid+1, end);
      }
      else if(target < arr[mid]){ //1st half
        return recbinsearch(arr, target, start, mid-1);
      }
      else{
        return mid;
      }
    }
    return -1;
}

int main(){
  
vector<int>arr={1, 2, 7, 9, 12};
int size = 5;
int target;
cout<<"Enter your target ";
cin>>target;
cout<<"You found your target at the index of "<<recbinsearch(arr, target, 0, size-1);

    return 0;
}