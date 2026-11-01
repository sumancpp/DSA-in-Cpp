#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>nums={1, 2, 3, 4};
vector<int>ans;
int product = 1;

for(int i=0; i<nums.size(); i++){
     product *= nums[i]; 
}

for(int i=0; i<nums.size(); i++){
     int result = product / nums[i];
     ans.push_back(result);
}

for (int i : ans) {
     cout << i << " ";
    }

    return  0;
}