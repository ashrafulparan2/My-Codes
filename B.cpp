#include <stdio.h>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int func()
{
    long long n,m,i,j,sum,cnt,ans;
    scanf("%lld",&n);
        long long a[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        sum=sum/2;
        sort(a,a+n);

        cnt=0;
        ans=0;
        for(i=n-1;i>=0;i--){
            ans+=a[i];
            cnt++;
            if(ans>sum)
                break;
        }
        printf("%lld\n",cnt);
    return 0;
}

int main()
{
    func();

    return 0;
}
