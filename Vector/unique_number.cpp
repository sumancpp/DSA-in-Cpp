//find unique number from an array using 1 for loop
#include<iostream>
#include<vector>
using namespace std;
int findNum(vector<int>& nums){
    int ans=0;
    for(int val : nums){
        ans = ans ^ val;
    }
    return ans;
}
int main(){

    vector<int>nums={1,2,3,2,1};
    cout << "The unique number is: "<< findNum(nums)<< endl;

    return 0;
}