#include<iostream>
#include<vector>
using namespace std;
        int singleNonDuplicate(vector<int>& nums) {
            int size = nums.size();
            if(size == 1) return nums[0];
    
            int start = 0, end = size-1;
            while(start <= end){
                int mid = start + (end - start) / 2;
                if(mid == 0 && nums[0] != nums[1] ) return nums[mid];
                if(mid == nums[size-1] && nums[size-1] != nums[size-2] ) return nums[mid];
                if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];
    
                if(mid % 2 == 0) { // even
                 if(nums[mid-1] == nums[mid]){
                    end = mid + 1; // left
                 }else{
                    start = mid + 1; // right
                 }
                }else{ // odd
                 if(nums[mid-1] == nums[mid]){
                    start = mid + 1; // right
                 }else{
                   end = mid - 1;  //left
                 }
                }
            }
            return -1;
        }

int main (){

vector<int>nums = {1,2,2,3,3,4,4,8,8};
int ans = singleNonDuplicate(nums);
cout<<"The answer is "<<ans;


    return 0;
}
    