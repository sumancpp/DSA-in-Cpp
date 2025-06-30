#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[start] <= arr[mid]){ // Left sorted
          if (arr[start] <= target && target <= arr[mid]){
            end = mid - 1;
           }
         else{
            start = mid + 1;
         }
        }
         else{   //Right sorted
         if(arr[mid] <= target && target <= arr[end]){ 
            start = mid + 1;
         }else{
            end = mid - 1;
           }
        }
    }
    return -1;
}

int main(){
 vector<int>arr={7, 8, 9, 0, 1, 2, 3, 4, 5, 6};
 int target = 6;
 cout<<search(arr,target);

    return 0;
}