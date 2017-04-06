/*  LeetCode Algorithm Problem 500: Keyboard Row
 *  https://leetcode.com/problems/keyboard-row/#/description
 */

#include <iostream>
#include <vector>

using namespace std;

vector<string> findWords(vector<string>&);
bool isSetOf(string&, string&);

int main()
{
    vector<string> Words;
    Words.push_back("Hello");
    Words.push_back("Alaska");
    Words.push_back("Dad");
    Words.push_back("Peace");
    vector<string> result = findWords(Words);
    int size = result.size();
    for(int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl << endl;
    return 0;
}

vector<string> findWords(vector<string>& words)
{
    string row1, row2, row3;
    row1 = "QWERTYUIOPqwertyuiop";
    row2 = "ASDFGHJKLasdfghjkl";
    row3 = "ZXCVBNMzxcvbnm";
    vector<string> returnMe;
    int size = words.size();
    for(int i = 0; i < size; i++)
    {
        if(row1.find_first_of(words[i][0],0) != std::string::npos)
        {
            if(isSetOf(words[i],row1)){returnMe.push_back(words[i]);}
        }
        else if(row2.find_first_of(words[i][0],0) != std::string::npos)
        {
            if(isSetOf(words[i],row2)){returnMe.push_back(words[i]);}
        }
        else if(row3.find_first_of(words[i][0],0) != std::string::npos)
        {
            if(isSetOf(words[i],row3)){returnMe.push_back(words[i]);}
        }
    }
    return returnMe;
}

bool isSetOf(string& key, string& set)
{
    int i = 1;
    while(set.find_first_of(key[i],0) != std::string::npos){i++;}
    if(key[i]==NULL){return true;}
    else return false;
}
