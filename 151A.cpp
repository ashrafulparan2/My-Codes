#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x,y,z,m,mn;
    x=(k*l)/nl;
    y=c*d;
    z=p/np;
    m=min(x,y);
    mn=min(m,z);
    cout<<mn/n<<endl;
}
