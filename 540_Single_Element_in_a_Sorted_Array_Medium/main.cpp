/*  LeetCode Algorithm Problem 540: Single Element in a Sorted Array
 *  https://leetcode.com/problems/single-element-in-a-sorted-array/#/description
 */

#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int>&);
int findSingle(vector<int>&,int,int);

int main()
{
    vector<int> Test;


    Test.push_back(1);
    Test.push_back(2);
    Test.push_back(2);
    Test.push_back(3);
    Test.push_back(3);
    Test.push_back(4);
    Test.push_back(4);
    Test.push_back(5);
    Test.push_back(5);
    Test.push_back(6);
    Test.push_back(6);
    Test.push_back(7);
    Test.push_back(7);



    cout << singleNonDuplicate(Test);

    cout << endl << endl;
    return 0;
}

int singleNonDuplicate(vector<int>& nums)
{
     return findSingle(nums,0,nums.size()-1);
}

int findSingle(vector<int>& nums, int start, int end)
{
    //Base Condition 1
    if(end == start+1)
    {
        if(end == nums.size()-1) return nums[end];
        else if(start == 0) return nums[start];
        else
        {
            if(nums[start] != nums[start-1]) return nums[start];
            else return nums[end];
        }
    }
    //Base Condition 2
    if(end == start) return nums[end];
    // i = (end + start)/2
    int i = (end + start)>>1;
    // recursive loop:
    if(i%2 == 1)
    {
        if(nums[i] == nums[i-1]) return findSingle(nums, i, end);
        else return findSingle(nums, start, i-1);
    }
    else
    {
        if(nums[i] == nums[i-1]) return findSingle(nums, start, i-1);
        else return findSingle(nums, i, end);
    }
}
