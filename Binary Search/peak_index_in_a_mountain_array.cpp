#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 1, end = arr.size() - 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {0, 1, 3, 5, 2, -4};
    int peak = peakIndexInMountainArray(arr);
    cout << "The peak index number is " << peak;

    return 0;
}