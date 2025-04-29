#include <iostream>
#include <vector>
using namespace std;
int majorityElement (vector<int>nums){
    int freq = 0;
    int ans = 0;
    for(int val : nums){
        if(freq == 0){
            ans = nums[val];
        }
        if(ans == nums[val]) {
           freq++;
        }else {
            freq--;
        }
    }
}
int main () {
    vector<int>nums = {1, 3, 3, 3, 5};
    cout<<"Majority element "<<majorityElement(nums);


    return 0;
}

