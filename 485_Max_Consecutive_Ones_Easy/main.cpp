/*  LeetCode Algorithm Problem 485: Max Consecutive Ones
 *  https://leetcode.com/problems/max-consecutive-ones/#/description
 */

#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>&);

int main()
{
    vector<int> Test;
    Test.push_back(1);
    Test.push_back(1);
    Test.push_back(0);
    Test.push_back(1);
    Test.push_back(0);
    Test.push_back(1);
    Test.push_back(1);
    Test.push_back(0);
    Test.push_back(1);
    Test.push_back(1);
    Test.push_back(0);
    Test.push_back(1);
    Test.push_back(1);
    Test.push_back(1);
    Test.push_back(1);

    cout << findMaxConsecutiveOnes(Test);

    cout << endl << endl;
    return 0;
}

int findMaxConsecutiveOnes(vector<int>& nums)
{
    int maxCons = 0, count = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 1) count++;
        else
        {
            if(count > maxCons) maxCons = count;
            count = 0;
        }
    }
    return (maxCons > count) ? maxCons : count;
}
