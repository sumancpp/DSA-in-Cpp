#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    for(int st=0;st<size;st++){
        for(int end=st;end<size;end++){
            for(int i=0;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }



    return 0;
}