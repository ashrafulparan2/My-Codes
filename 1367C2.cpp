#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,t=0;
        cin>>n>>k;
        int d=k;
        char e;
        for(int i=0; i<n; i++)
        {
            cin>>e;
            if(e=='0')
                d++;
            else
            {
                d-=k;
                t+=d/(k+1);
                d=0;
            }
        }
        //cout<<t<<" "<<d<<endl;
        cout<<t+d/(k+1)<<endl;
    }
    return 0;
}
