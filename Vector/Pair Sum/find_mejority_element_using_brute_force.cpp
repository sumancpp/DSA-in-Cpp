//Finding mejority element using brute force 
#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector<int>nums={1,2,2,2,1};
      int n=nums.size();
      for(int val : nums){
        int flag=0;
        for(int el : nums){
            if(el == val){
                flag++;
            }
        }
        if(flag > n/2){
            cout<<val<<" ";
            return 0;
        }
      }



    return 0;
}