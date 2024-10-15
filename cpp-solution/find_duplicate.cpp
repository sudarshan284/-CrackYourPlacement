#include <iostream>
#include <vector>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> result;
    for (int i = 0; i <= nums.size() - 1; i++)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0)
        {
            result.push_back(abs(nums[i]));
        }
        else
        {
            nums[index] = -nums[index];
        }
    }
    return result;
}
int main()
{
    vector<int> nums{1, 1, 3, 4, 5, 3, 4};
    vector<int> result = findDuplicates(nums);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}