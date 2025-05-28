#include <iostream>
using namespace std;
int main () {
//array pointer is a constant, we cant change it.
    // int arr[] = {1, 2, 3, 4, 5};
    // cout<< arr <<endl;
    // cout<< *arr <<endl;
    // cout<< *(arr+1) <<endl;
    // cout<< *(arr+2) <<endl;
    // cout<< *(arr+3) <<endl;
    // cout<< *(arr+4) <<endl;


/****************pointer arithmetic***************/

//   int a = 5;
//   int *ptr = &a;

//   cout<< ptr <<endl;
//   ptr++;
//   cout<< ptr <<endl;

//   int b = 5;
//   int *ptr = &b;

//   cout<< ptr <<endl;
//   ptr = ptr + 5;
//   cout<< ptr <<endl;

//   int *ptr;
//   int *ptr2 = ptr + 2;

//   cout<<ptr2 - ptr;

int *ptr;
int *ptr2;
cout<< ptr <<endl;
cout<< ptr2 <<endl;

cout<<(ptr >= ptr2)<<endl;
cout<<(ptr <= ptr2)<<endl;
cout<<(ptr == ptr2)<<endl;




    return 0;
}
