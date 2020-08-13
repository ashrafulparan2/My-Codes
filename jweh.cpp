#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   long long int n,a[100005],k,p,q,g=0,s=0,i,b[100005];
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       s+=a[i];
       b[a[i]]++;
   }
   cin>>k;
   while(k--)
   {
       g=0;
       cin>>p>>q;
  /*     for(i=0;i<n;i++)
       {
           if (a[i]==p){g++;
           a[i]=q;}
       }*/
       g=b[p];
       b[p]=0;
       b[q]+=g;
       s=s+(g*(q-p));
       //cout<<g<<" "<<q<<" "<<p<<endl;
       cout<<s<<endl;
   }
}
