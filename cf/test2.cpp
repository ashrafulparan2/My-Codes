
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;

int main()
{

    #ifndef online_judge 
    //freopen("
     //freopen("output.txt", "w", stdout); #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t ,n;
    cin>>t;
    while(t--)
    {
        int c{0};
        cin>>n;
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else if(n%2&&n%3)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            while(n!=1)
            {
                if(n%6==0)
                {
                    n/=6;
                    c++;
                }

                else if(n%3==0)
                {
                    n*=2;
                    c++;
                }
                else if(n%2==0)
                {

                    c=-1;
                    break;
                }
                else if(n%2&&n%3)
                {

                    c=-1;
                    break;
                }
            }
            cout<<c<<endl;
        }

    }

    return 0;
}

