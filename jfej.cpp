/*Code*/
/*Div2 Contest*/

#include<iostream>
using namespace std;
//#define ll long long
int main()
{
    long long int  testc;
    cin>>testc;
    while(testc--)
    {
        long long int n,a[10000],evv[10000],i,j,even=0,odd=0,k=0,od[10000];
        cin>>n;
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
            if (a[i]%2==0)
            {evv[even]=i+1;
            even++;}
            else
            {od[odd]=i+1;
            odd++;}

        }/*

        if *odd
        */
        if (odd%2==0)
        {
            if (odd>0)
            {
                k=1;
                for(i=0;i<odd-2;i=i+2)
                {cout<<od[i]<<" "<<od[i+1]<<"\n";
                }
            }
        }





        else
        {
            for(i=0;i<odd-2;i=i+2)
            {cout<<od[i]<<" "<<od[i+1]<<"\n";
            }
        }
        if (even%2==0)
        {
            if (k==1)
            {
                for(i=0;i<even;i=i+2)
                {cout<<evv[i]<<" "<<evv[i+1]<<endl;
                }
            }else
            {
                for(i=0;i<even-2;i=i+2)
                {cout<<evv[i]<<" "<<evv[i+1]<<endl;}
            }
        }else
        {
            for(i=0;i<even-2;i=i+2)
            cout<<evv[i]<<" "<<evv[i+1]<<"\n";
        }
    }
}
