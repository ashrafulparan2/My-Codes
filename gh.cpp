#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,a,s{0},x,c{0};
    cin>>n;
    while(n--)
    {
        cin>>a;
        s+=a;
    }
    c=0;
    for(int i=1;i<=5;i++)
    {
        x=(s+i)%(n+1);
        if(x!=1)
            c++;
    }
    cout<<c<<endl;

}
