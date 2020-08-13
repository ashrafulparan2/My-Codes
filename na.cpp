#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h1,m1,h2,m2,k,h,m;
    cin>>h1>>m1>>h2>>m2>>k;

    m=60+m2-m1;
    h=abs(h2-h1)*60;
    if(m>0)
    {
        h-=60;
    }
    cout<<h+m-k<<endl;
    return 0;
}
