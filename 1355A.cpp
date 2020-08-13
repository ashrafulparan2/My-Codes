#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,cnt{0};
    cin>>a>>b>>c>>d;
    for(i=a;i<=b;i++)
    {
        for(j=b;j<=c;j++)
        {
            for(k=c;k<=d;k++)
            {
                if(i+j>k&&j+k>i&&k+i>j)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
