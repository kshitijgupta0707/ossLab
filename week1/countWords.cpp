#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr

int main()
{
    string s;
    getline(cin, s);
    map<string, int> m;
    string temp = "";
    for(char c:s)
    {
        if (c != ' ')
        {
            temp += c; 
        }
        else
        {
            if (!temp.empty())
            {
                m[temp]++; 
                temp = ""; 
            }
        }
    }
    if (!temp.empty())
    {
        m[temp]++;
    }

       for (auto t : m)
    {
        cout << t.first << " " << t.second << endl;
    }
}