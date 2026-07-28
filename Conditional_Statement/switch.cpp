#include<iostream>
using namespace std;
int main(){

// switch Statement-Used when checking one variable against multiple constant values.
// Syntax
// switch(variable)
// {
// case value:
//     statement;
//     break;

// default:
//     statement;
// }


int day;

cin>>day;

switch(day)
{
case 1:
    cout<<"Monday";
    break;

case 2:
    cout<<"Tuesday";
    break;

case 3:
    cout<<"Wednesday";
    break;    

default:
    cout<<"Invalid";
}


    return 0;
}