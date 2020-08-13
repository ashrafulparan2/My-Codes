#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX = 2e5 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p{0};
    string s, s1;
    cin >> s;
    s1 = s;
    //reverse(s.begin(), s.end());
    f(i, 0, s.size())
    {
        if (s[i] != 'A' && s[i] != 'H' && s[i] != 'I' && s[i] != 'M' && s[i] != 'O' && s[i] != 'T' && s[i] != 'U' && s[i] != 'V' && s[i] != 'W' && s[i] != 'X' && s[i] != 'Y')
        {
            p = 1;
        }
    }
    if (p)
    {
        no;
    }
    else
    {
        reverse(s1.begin(), s1.end());
        if (s1 == s)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
