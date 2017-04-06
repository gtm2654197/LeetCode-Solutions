/* LeetCode Algorithm Problem 258: Add Digits
 * https://leetcode.com/problems/add-digits/#/description
 */ 
#include <iostream>

using namespace std;
int addDigits(int);
int addDigitsDR(int);

int main()
{
    int num = 0;
    cout << "recursive: " << addDigits(num) << endl;
    cout << "Digital root: " << addDigitsDR(num) << endl << endl;
    return 0;
}

int addDigits(int num)
{
   if(num<10) return num;
   return addDigits((num%10)+(num/10));
}

int addDigitsDR(int num)   //Using digital root
{
//    if(num==0) return 0;
//    int r = num%9;
//    return (r==0) ? 9:r;   //Cleaning up
      return 1 + (num-1)%9;
}
