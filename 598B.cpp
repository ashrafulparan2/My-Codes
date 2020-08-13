#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int m,l,r,k;
    cin>>s>>m;
    while(m--)
    {
        cin>>l>>r>>k;
        r--;
        l--;
        k=k%(r-l+1);
        s=(s.substr(0, l) + s.substr(r - k + 1, k) + s.substr(l, r - l -k + 1) + s.substr(r + 1));

    }

    cout<<s<<endl;


    return 0;
}
