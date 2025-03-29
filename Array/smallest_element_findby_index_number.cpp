#include<iostream>
using namespace std;
int main(){
   cout<<"Enter the size of  the array ";
   int size;
   cin>>size;
   int array[size];
   for(int i=0;i<size;i++){
    cin>>array[i];
   }
   int small=array[0];
   for(int i=0;i<size;i++){
    if(array[i]<small){
        small=i;
    }
   }
   cout<<"The smallest number index is "<<small<<endl;
   int large=array[0];
   for(int i=0;i<size;i++){
    if(array[i]>large){
        large=i;
    }
   }
   cout<<"The largest number index is "<<large;


    return 0;
}