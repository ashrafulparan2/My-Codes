#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    vector <long long> vc;
    cin>>t;

    for(int j=0;j<t;j++)
    {

        long long num, q, start, ends, n;
        cin>>n>>q;
        vc.clear();
        for(long long i = 0; i < n; i++)
        {

            scanf("%lld",&num);
            vc.push_back(num);
        }
       printf("Case %d:\n", j+1);

        while (q--)
        {

            scanf("%lld%lld",&start,&ends);

            long long lb = lower_bound(vc.begin(), vc.end(), start) - vc.begin();
            long long ub = upper_bound(vc.begin(), vc.end(), ends) - vc.begin();

            cout<<ub-lb<<"\n";
        }
    }

    return 0;

}
