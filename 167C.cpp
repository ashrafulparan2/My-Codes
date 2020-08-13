#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,i,j,a[100],c[1000][1000];
    cin>>n>>m>>x;
    for(i=0;i<n;i++)
    {
        cin>>c[i];
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((a[i][j]+a[i][j+1])>=x)
            {

            }
        }
    }
}
