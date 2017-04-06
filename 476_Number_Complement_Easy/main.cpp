/*  LeetCode Algorithm Problem 476: Number Complement
 *  https://leetcode.com/problems/number-complement/#/description
 */
#include <iostream>

using namespace std;
int findComplement(int);

int main()
{
    cout << findComplement(8);

    cout<<endl<<endl;
    return 0;
}

int findComplement(int num)
{
    int leading = ~0;
    while(leading&num) leading <<= 1;
    return (~leading - num);
}
