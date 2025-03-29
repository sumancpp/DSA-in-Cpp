#include<iostream>
using namespace std;
void findIntersection(int arr1[],int arr2[],int arr1Size,int arr2Size){
    cout<<"The intersection of the two array is ";
    for(int i=0;i<arr1Size;i++){
        for(int j=0;j<arr2Size;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}
int main(){
  int arr1[]={1,2,3,4,5};
  int arr1Size=5;
  int arr2[]={4,5,6,7,8};
  int arr2Size=5;

   findIntersection(arr1,arr2,arr1Size,arr2Size);
    return 0;
}