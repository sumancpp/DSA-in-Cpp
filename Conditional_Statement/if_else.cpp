#include<iostream>
using namespace std;
int main(){

// if Statement Syntax

// if(condition)
// {
//     statements;
// }

    // int age;

    // cout<<"Enter the age: ";
    // cin >> age;

    // if(age >= 18)
    // {
    //     cout<<"Eligible";
    // }

// if without braces Allowed when only one statement exists.
//    if(a>5)
//     cout<<"Hello";




// if-else Syntax

// if(condition)
// {
//     ...
// }
// else
// {
//     ...
// }

// int age;

// cout<<"Enter the age: ";
// cin>>age;

// if(age>=18)
// {
//     cout<<"Adult";
// }
// else
// {
//     cout<<"Minor";
// }



// else if Ladder-Used when there are multiple conditions.


// int marks;
// cout<<"Enter your marks: ";
// cin>>marks;

// if(marks>=90)
// {
//     cout<<"A";
// }
// else if(marks>=80)
// {
//     cout<<"B";
// }
// else if(marks>=70)
// {
//     cout<<"C";
// }
// else
// {
//     cout<<"Fail";
// }

// Order Matters
// Wrong
// if(marks>=40)
// before
// if(marks>=90)


//*********  Nested if*********/
// int age;
// bool id;

// cin>>age>>id;

// if(age>=18)
// {
//     if(id==1)
//     {
//         cout<<"Allowed";
//     }
// }



// Ternary Operator--Short form of if-else.

int age;
cin>>age;
cout<<(age>=18 ? "Adult":"Minor");


    return 0;
}