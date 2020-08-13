#include<bits/stdc++.h>
using namespace std;
#define         ll              long long
#define         f(i,a,b)        for(int i=a;i<b;i++)
#define         pb              push_back
 int a[100000];
int main()
{
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    int n;cin>>n;int ans=0,tpos=0,tneg=0;f(i,0,n){cin>>a[i];/*if((i>0)&&(i<n-1))*/{if(a[i]==0)ans++;if(a[i]>0)tpos++;if(a[i]<0) tneg++;}}

  /*  if(a[0]>=0)ans++;
    if(a[n-1]<=0)ans++;*/
    int curneg=0,curpos=0;
    int ans1=1e9;
    f(i,0,n)
    {
        if(a[i]<0)curneg++;
        if(a[i]>0)curpos++;
       if(i!=n-1) ans1=min(ans1,curpos+tneg-curneg+ans);
    }
   cout<<ans1;

}
