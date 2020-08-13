#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    long double m,k,x;
    cin>>m>>k;
    x=(k/m)*6.023*100;
    cout<<fixed<<setprecision(3)<<x/100<<"*"<<"10^23"<<endl;
    //printf("%lf\n",x);

    return 0;
}
