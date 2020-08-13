/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/


#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define loop(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,m,a[100][100],cnt{0};
    cin>>t;
    while(t--)
    {

        cnt=0;
        cin>>n>>m;
        int r[100]{0},c[100]{0};
        loop(i,0,n)
        {
            loop(j,0,m)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    r[i]=1;
                    c[j]=1;
                }
            }
        }
        loop(i,0,n)
        loop(j,0,m)
        {
            if(r[i]==0&&c[j]==0)
            {
                r[i]=1;
                c[j]=1;
                cnt++;
            }
        }
        //cout<<cnt<<endl;
        if(cnt%2)
        {
            cout<<"Ashish"<<endl;
        }
        else
        {
            cout<<"Vivek"<<endl;
        }
    }


    return 0;
}
