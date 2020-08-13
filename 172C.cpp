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

    ll n,m ,k,l,o,s{0},c{0};
    cin>>n>>m>>k;
    vi v,t;
    f(i,0,n)
    {
        cin>>l;
        v.pb(l);
    }
    f(i,0,n)
    {
        cin>>o;
        t.pb(l);
    }
    //sort(v.begin(),v.end());

    /*f(i,0,n+m)
    {
        s+=v[i];

        if(s>k)
        {
            break;
        }
        c++;
    }*/

    /*f(i,0,n)
    {
        f(j,0,m)
        {
            if(v[i]<t[j])
            {
                s+=v[i];
                i++;
                if(s>k)
                {
                    break;
                }
                c++;
            }
            else
                s+=t[j];
                {
                if(s>k)
                {
                    break;
                }
                c++;
            }
        }
    }*/


    f(i,0,n+m)
    {
        s+=min()
    }


    //cout<<s<<endl;
    cout<<c<<endl;
    v.clear();
    t.clear();

    return 0;
}

