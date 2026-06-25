#include <iostream>
using namespace std;

void bubbleSort(vector<int> &nums)
{
    int n = nums.size()-1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - i ; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> nums = {10, 50, 30, 20, 40, 70};
    bubbleSort(nums);

    for (int ele : nums)
    {
        cout << ele << " ";
    }
}