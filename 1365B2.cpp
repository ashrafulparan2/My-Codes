#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    int t;
    cin>>t;
    while(t--)
    {
      int n,a[10001],b[10001],d=0,p=0,c[10001];
      cin>>n;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          c[i]=a[i];
      }
      for(int i=0;i<n;i++)
      {
          cin>>b[i];
      }
      sort(c,c+n);
      for(int i=0;i<n;i++)
      {
          if(c[i]==a[i])
            p++;
      }
      for(int i=0;i<n-1;i++)
      {
          if((b[i] != b[i+1]) && (a[i]>a[i+1]))
          {
              swap(a[i],a[i+1]);
              swap(b[i],b[i+1]);
          }
      }
      for(int i=0;i<n;i++)
      {
          if(c[i]==a[i])
            d++;
      }
       if(p==n)
      {
          cout<<"Yes"<<endl;
      }
      else if(d==n)
      {
          cout<<"Yes"<<endl;
      }
      else
      {
          cout<<"No"<<endl;
      }
    }
}
