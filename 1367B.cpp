/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define f(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"
#define MX 200000
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b[MX],c=0,d=0,m,n,e,f,k=0;
        cin>>a;
        if(a%2==0)
        {
            m=a/2;
            n=a/2;
        }
        else
        {
            m=a/2+1;
            n=a/2;
        }
        for(int i=0; i<a; i++)
        {
            cin>>b[i];
            if(b[i]%2==0)
                c++;
            else
                d++;
        }
        if(c!=m || d!=n)
            cout<<-1<<endl;
        else
        {
            for(int i=0; i<a; i++)
            {
                if(i%2 == 0)
                    e=1;
                else
                    f=1;
                if(b[i]%2==0)
                {
                    if(e!=1)
                        k++;
                }
                else
                {
                    if(f!=1)
                        k++;
                }
                e=0;
                f=0;
            }
            cout<<k/2<<endl;
        }
    }
}
