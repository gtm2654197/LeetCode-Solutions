/* LeetCode Algorithm Problem 412: Fizz Buzz
 * https://leetcode.com/problems/fizz-buzz/#/description
 */

#include <iostream>
#include <vector>

using namespace std;
vector<string> fizzBuzz(int);

int main()
{
    vector<string> result = fizzBuzz(15);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}

vector<string> fizzBuzz(int n)
{
    int i = 1, t = 1, f = 1;
    vector<string> result;
    while(n >= i)
    {
        if(t == 3 && f == 5)
        {
            result.push_back("FizzBuzz");
            t = 1;
            f = 1;
        }
        else
        {
            if(t == 3)
            {
                result.push_back("Fizz");
                t = 1;
                f++;
            }
            else if(f == 5)
            {
                result.push_back("Buzz");
                f = 1;
                t++;
            }
            else
            {
                result.push_back(std::to_string(i));
                t++;
                f++;
            }
        }
        i++;
    }
    return result;
}
