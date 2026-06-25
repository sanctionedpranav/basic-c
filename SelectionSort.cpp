#include <iostream>
using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    }
}

int main()
{
    vector<int> nums = {10, 50, 30, 20, 40, 70};

    selectionSort(nums);

    for (int ele : nums)
    {
        cout << ele << " ";
    }
}