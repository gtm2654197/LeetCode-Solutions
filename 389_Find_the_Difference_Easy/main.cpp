/*  LeetCode Algorithm Problem 389: Find the Difference
 *  https://leetcode.com/problems/find-the-difference/#/description
 */
#include <iostream>

using namespace std;

char findTheDifference(string, string);

int main()
{
    string s = "hello";
    string t = "hekllo";

    cout << findTheDifference(s,t) << endl << endl;
    return 0;
}

char findTheDifference(string s, string t)
{
   int length = s.length();
   char result = NULL;
   int i;
   for(i = 0; i < length; i++)
   {
       result ^= (s[i]^t[i]);
   }
   result ^= t[i];
   return result;
}
