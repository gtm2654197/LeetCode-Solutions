/*  LeetCode Algorithm Problem 344: Reverse String
 *  https://leetcode.com/problems/reverse-string/#/description
 */
#include <iostream>

using namespace std;
string reverseString(string);

int main()
{
    string result = reverseString("hello");
    cout << result << endl;
    return 0;
}

string reverseString(string s)
{
    int i = 0, j = s.length()-1;
    char beg, end;
    while(i < j)
    {
        beg = s[i];
        end = s[j];
        s[i] = end;
        s[j] = beg;
        i++;
        j--;
    }
    return s;
}
