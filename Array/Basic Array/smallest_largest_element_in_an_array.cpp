#include<iostream>
using namespace std;
int main(){

       int arr[5]={10,20,30,-40,50};
       int largest= INT8_MIN;
       int smallest=INT8_MAX;
       for(int i=0;i<5;i++){
        smallest=min(arr[i],smallest);
        largest = max(arr[i],largest);
       }
       cout<<"The largest element is "<<largest<<endl;
       cout<<"The smallest element is "<<smallest;

    
     
    return 0;
}