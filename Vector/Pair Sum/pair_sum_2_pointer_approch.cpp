// Return pair in sorted array with target sum using O(n).
#include <iostream>
#include <vector>
using namespace std;
vector<int> findPairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int size = nums.size();

    int i = 0, j = size - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum < target)
        {
            i++;
        }
        else if (pairSum > target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;

    vector<int> ans = findPairSum(nums, target);
    cout << ans[0] << "," << ans[1];

    return 0;
}