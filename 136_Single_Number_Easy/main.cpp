/* LeetCode Algorithm Problem 136: Single Number
 * https://leetcode.com/problems/single-number/#/description
 */

#include <iostream>
#include <vector>

using namespace std;
int singleNumber(vector<int>);

int main()
{
    int a[9] = {5,1,2,3,4,4,3,2,1};
    vector<int> Test(a,a+9);
    for(int i = 0; i < Test.size(); i++)
    {
        cout << Test[i] << " ";
    }
    cout << endl;
    cout << singleNumber(Test);

    cout << endl << endl;
    return 0;
}

int singleNumber(vector<int> a)
{
    int singleNum = 0;
    for(int i = 0; i < a.size(); i++)
    {
        singleNum = singleNum^a[i];
    }
    return singleNum;
}
