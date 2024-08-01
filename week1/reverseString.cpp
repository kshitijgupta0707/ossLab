#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int main()
{
    string a;
    cin >> a;
    int start = 0, end = a.length() - 1;
    while (start < end)
    {
        swap(a[start++], a[end--]);
    }
    cout << a;
}