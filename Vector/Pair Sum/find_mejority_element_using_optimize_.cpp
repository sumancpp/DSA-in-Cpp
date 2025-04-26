// More optimize way 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMajority(vector<int>nums){
     int size = nums.size();
     int freq = 1;
     int ans = nums[0];
     sort(nums.begin(), nums.end());
     for(int i = 1; i < size; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else {
            freq = 1;
            ans = nums[i];
        }
        if( freq > size/2){
            return ans;
        }
     }
     return -1;
 }
int main (){
  vector<int>nums = {1, 3, 3, 3, 5};
  
  cout<<"The majority element is "<<findMajority(nums);

    return 0;
}