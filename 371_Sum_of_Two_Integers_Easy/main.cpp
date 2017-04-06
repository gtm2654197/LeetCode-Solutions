/*  LeetCode Algorithm Problem 371: Sum of Two Integers
 *  https://leetcode.com/problems/sum-of-two-integers/#/description
 */

#include <iostream>

using namespace std;
int getSum(int,int);

int main()
{
    cout << getSum(18,22) << endl << endl;
    return 0;
}

int getSum(int a, int b)
{
    int result = a;
    while(b != 0)
    {
        result = a^b;
        b = (a&b)<<1;
        a = result;
    }
    return result;
}
