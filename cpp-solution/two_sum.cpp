#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function definition
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> nmap;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (nmap.count(complement) > 0)
        {
            return {nmap[complement], i};
        }
        nmap[nums[i]] = i;
    }
    return {};
}

int main()
{
    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Call the twoSum function
    vector<int> result = twoSum(nums, target);

    // Print the result
    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No solution found" << endl;
    }

    return 0;
}
