#include<iostream>
#include<vector>
using namespace std;
int binsearch(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    while( start <= end){
      //int mid = (start + end) / 2;
      int mid = start + (end - start) / 2;
      if( target > arr[mid]){
        start = mid + 1;
      }else if( target < arr[mid]){
        end = mid - 1;
      }
      else{
        return mid;
      }
    }
    return -1;
}
int main(){
  
vector<int>arr={1, 2, 7, 9, 12};
int target;
cout<<"Enter your target ";
cin>>target;
cout<<"You found your target at the index of "<<binsearch(arr,target);

    return 0;
}

