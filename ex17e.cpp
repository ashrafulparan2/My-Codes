#include <cstdio>
#include <string>
#include<iostream>
using namespace std;

int main()
{
    long long i,q;
    string s;
    scanf("%lld", &q);

    if(q==0)
    {
        printf("10\n");

    }
    else if(q==1)
    {
        printf("1\n");

    }
    else
    {


        s="";
        for(i=9; i>1; i--)
        {
            if(q>=i && q%i==0)
            {
                q/=i;
                s+=i+'0';
                i=10;
            }
        }

        if(q==1)
        {
            for(i=s.length()-1; i>=0; i--)
                cout<<s[i];;
            printf("\n");
        }
        else
            printf("-1\n");
    }
}
