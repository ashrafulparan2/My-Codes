#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(multiset<t> &l)
{
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}


int32_t main()
{
    
    multiset <int> s{2,2,1,1,3,4,5};

    print(s);

    
    return 0;
}
