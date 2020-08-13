#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double sum=0.0;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=p[i];
    }
    sum=sum/n;
    cout<<fixed<<setprecision(12)<<sum<<endl;
    return 0;
}
