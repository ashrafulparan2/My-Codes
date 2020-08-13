/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX=2e5+5;
#define f(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //cout<<675/26;
    ll n,x,y,z;
    cin>>n;
    if(n<=26)
    {
        if(n==1)
            cout<<"a"<<endl;
        else if(n==2)
        {
            cout<<"b"<<endl;
        }
        else if(n==3)
        {
            cout<<"c"<<endl;
        }
        else if(n==4)
        {
            cout<<"d"<<endl;
        }
        else if(n==5)
        {
            cout<<"e"<<endl;
        }
        else if(n==6)
        {
            cout<<"f"<<endl;
        }
        else if(n==7)
        {
            cout<<"g"<<endl;
        }
        else if(n==8)
        {
            cout<<"h"<<endl;
        }
        else if(n==9)
        {
            cout<<"i"<<endl;
        }
        else if(n==10)
        {
            cout<<"j"<<endl;
        }
        else if(n==11)
        {
            cout<<"k"<<endl;
        }
        else if(n==12)
        {
            cout<<"l"<<endl;
        }
        else if(n==13)
        {
            cout<<"m"<<endl;
        }
        else if(n==14)
        {
            cout<<"n"<<endl;
        }
        else if(n==15)
        {
            cout<<"o"<<endl;
        }
        else if(n==16)
        {
            cout<<"p"<<endl;
        }
        else if(n==17)
        {
            cout<<"q"<<endl;
        }
        else if(n==18)
        {
            cout<<"r"<<endl;
        }
        else if(n==19)
        {
            cout<<"s"<<endl;
        }
        else if(n==20)
        {
            cout<<"t"<<endl;
        }
        else if(n==21)
        {
            cout<<"u"<<endl;
        }
        else if(n==22)
        {
            cout<<"v"<<endl;
        }
        else if(n==23)
        {
            cout<<"w"<<endl;
        }
        else if(n==24)
        {
            cout<<"x"<<endl;
        }
        else if(n==25)
        {
            cout<<"y"<<endl;
        }
        else if(n==0)
        {
            cout<<"z"<<endl;
        }

    }
    else if(n<=702)
    {
        n-=26;
        x=n%26;
        //y=n/26;
        //z=n-y*26;
        z=ceil((double)n/26);

        if(z==1)
            cout<<"a" ;
        else if(z==2)
        {
            cout<<"b" ;
        }
        else if(z==3)
        {
            cout<<"c" ;
        }
        else if(z==4)
        {
            cout<<"d" ;
        }
        else if(z==5)
        {
            cout<<"e" ;
        }
        else if(z==6)
        {
            cout<<"f" ;
        }
        else if(z==7)
        {
            cout<<"g" ;
        }
        else if(z==8)
        {
            cout<<"h" ;
        }
        else if(z==9)
        {
            cout<<"i" ;
        }
        else if(z==10)
        {
            cout<<"j" ;
        }
        else if(z==11)
        {
            cout<<"k" ;
        }
        else if(z==12)
        {
            cout<<"l" ;
        }
        else if(z==13)
        {
            cout<<"m" ;
        }
        else if(z==14)
        {
            cout<<"n" ;
        }
        else if(z==15)
        {
            cout<<"o" ;
        }
        else if(z==16)
        {
            cout<<"p" ;
        }
        else if(z==17)
        {
            cout<<"q" ;
        }
        else if(z==18)
        {
            cout<<"r" ;
        }
        else if(z==19)
        {
            cout<<"s" ;
        }
        else if(z==20)
        {
            cout<<"t" ;
        }
        else if(z==21)
        {
            cout<<"u" ;
        }
        else if(z==22)
        {
            cout<<"v" ;
        }
        else if(z==23)
        {
            cout<<"w" ;
        }
        else if(z==24)
        {
            cout<<"x" ;
        }
        else if(z==25)
        {
            cout<<"y" ;
        }
        else if(z==26)
        {
            cout<<"z" ;
        }

        if(x==1)
            cout<<"a"<<endl;
        else if(x==2)
        {
            cout<<"b"<<endl;
        }
        else if(x==3)
        {
            cout<<"c"<<endl;
        }
        else if(x==4)
        {
            cout<<"d"<<endl;
        }
        else if(x==5)
        {
            cout<<"e"<<endl;
        }
        else if(x==6)
        {
            cout<<"f"<<endl;
        }
        else if(x==7)
        {
            cout<<"g"<<endl;
        }
        else if(x==8)
        {
            cout<<"h"<<endl;
        }
        else if(x==9)
        {
            cout<<"i"<<endl;
        }
        else if(x==10)
        {
            cout<<"j"<<endl;
        }
        else if(x==11)
        {
            cout<<"k"<<endl;
        }
        else if(x==12)
        {
            cout<<"l"<<endl;
        }
        else if(x==13)
        {
            cout<<"m"<<endl;
        }
        else if(x==14)
        {
            cout<<"n"<<endl;
        }
        else if(x==15)
        {
            cout<<"o"<<endl;
        }
        else if(x==16)
        {
            cout<<"p"<<endl;
        }
        else if(x==17)
        {
            cout<<"q"<<endl;
        }
        else if(x==18)
        {
            cout<<"r"<<endl;
        }
        else if(x==19)
        {
            cout<<"s"<<endl;
        }
        else if(x==20)
        {
            cout<<"t"<<endl;
        }
        else if(x==21)
        {
            cout<<"u"<<endl;
        }
        else if(x==22)
        {
            cout<<"v"<<endl;
        }
        else if(x==23)
        {
            cout<<"w"<<endl;
        }
        else if(x==24)
        {
            cout<<"x"<<endl;
        }
        else if(x==25)
        {
            cout<<"y"<<endl;
        }
        else if(x==0)
        {
            cout<<"z"<<endl;
        }
    }

    return 0;
}

