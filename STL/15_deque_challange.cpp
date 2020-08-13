#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string &s)
{
    deque<char> a;
    deque<char> b;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (auto c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            a.push_back(c);
            b.push_front(c);
        }
    }
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int32_t main()
{

    string s;
    getline(cin, s);
    (is_palindrome(s)) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
