//WAf to print all the unique value in an array.
#include<iostream>
using namespace std;
void uniqueValue(int arr[],int size){
  cout<<"The unique value in the array is ";
  for (int i=0;i<size;i++){
    int flag=0;
    for(int j=0;j<size;j++){
      if(arr[i]==arr[j] && i!=j){
        flag=1;
        break;
      }
    }
    if(flag==0){
      cout<<arr[i]<<",";
    }
  }
}
int main(){
  int arr[]={1,2,2,3,1,4,10,1};
  int size=8;
  uniqueValue(arr,size);


return 0;
}