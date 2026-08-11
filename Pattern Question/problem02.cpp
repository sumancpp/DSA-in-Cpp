// print A B C D
//       A B C D 
//       A B C D
//       A B C D 
//       for n = 4

#include <iostream>
using namespace std;
int main(){
    int n = 8;
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }



    return 0;
}