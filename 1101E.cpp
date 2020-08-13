#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define pb push_back
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x,y,h,w,maxx{0},maxy{0};
    char c;
    cin>>n;
    while(n--)
    {
        cin>>c>>x>>y;
        if(y>x)
        {
            swap(x,y);
        }
        if(c=='+')
        {
            maxx=max(maxx,x);
            maxy=max(maxy,y);
        }
        else
        {
            if(maxx<=x&&maxy<=y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}
