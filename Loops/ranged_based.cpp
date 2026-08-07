#include<iostream>
using namespace std;
int main (){
// Used for arrays and containers.

// int arr[]={10,20,30};

// for(int x:arr)
// {
//     cout<<x<<" ";
// }




// Modify values

// int arr[]={1,2,3};

// for(int &x:arr)
// {
//     x*=2;
//     cout<<x<<" ";
// }




// Without &
// for(int x:arr)
// Only copies values.
// Original array doesn't change.







// Nested Loops

// Loop inside another loop.

for(int i=1;i<=3;i++)
{
    for(int j=1;j<=3;j++)
    {
        cout<<i<<j<<" ";
    }
    cout<<endl;
}



    return 0;
}