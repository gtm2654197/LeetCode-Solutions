/*  LeetCode Algorithm Problem 461: Hamming Distance
 *  https://leetcode.com/problems/hamming-distance/#/description
 */

#include <iostream>

using namespace std;
int hammingDistance(int,int);

int main()
{
    int x = 10;
    int y = 21;
    cout << "Hamming Distance between " << x << " and " << y << " is " << hammingDistance(x,y);


    cout << endl << endl;
    return 0;
}

int hammingDistance(int x,int y)
{
    int diff = x^y;
    int sum = 0;
    while(diff)
    {
        sum++;
        diff &= (diff-1);
    }
    return sum;
}
