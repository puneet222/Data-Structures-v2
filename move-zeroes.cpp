#include <iostream>
#include <vector>
#include <map>
#include <limits.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int count = 0, j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
        else
        {
            nums[j] = nums[i];
            j++;
        }
    }
    j = nums.size() - 1;
    while (count--)
    {
        nums[j] = 0;
        j--;
    }
}