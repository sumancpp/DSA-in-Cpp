//Return pair in sorted array with target sum.
#include <iostream>
#include <vector>
using namespace std;
vector<int> findPairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
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