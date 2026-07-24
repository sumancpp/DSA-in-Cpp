#include<iostream>
using namespace std;

int main(){
 
//     Operators perform operations on variables.

//    | Operator | Meaning        |
// | -------- | -------------- |
// | +        | Addition       |
// | -        | Subtraction    |
// | *        | Multiplication |
// | /        | Division       |
// | %        | Modulus        |


int a = 10;
int b = 3;

cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b;


// Decimal Answer
float a1 = 5;
float b1 = 2;

cout << a1 / b1<<endl;


//Relational Operators

// | Operator | Meaning          |
// | -------- | ---------------- |
// | ==       | Equal            |
// | !=       | Not equal        |
// | >        | Greater          |
// | <        | Smaller          |
// | >=       | Greater or equal |
// | <=       | Smaller or equal |


cout << (5 > 3)<<endl;

cout << (5 == 8)<<endl;


// And 
cout << (5 > 3 && 10 > 6)<<endl;

//OR
cout << (5 > 8 || 10 > 6)<<endl;

//NOT - !
bool x = true;
cout << !x<<endl;

//Increment Operator
int m = 5;
m++; //m = m + 1;
cout <<m<<endl;

// Decrement Operator
int n = 5;
n--;
cout << n <<endl;



// Pre vs Post Increment

int o = 5;
cout << ++o <<endl;

int p = 5;
cout << p++ <<endl;



// Compound Assignment
// +=
// -=
// *=
// /=
// %=

int k = 10;

k += 5;

cout << k <<endl;



    return 0;
}