#include<iostream>
#include<cstdio>
#include<cmath>
#include<cmath>
#include<algorithm>
using namespace std;
#define pf printf
#define sf scanf
#define MAX 1000005
typedef long long ll;
int divi[MAX];

int divisor()
{
    int i, j;
    for(i=1; i<=MAX; i++)
    {
        for(j=i; j<=MAX; j+=i)
        {
            divi[j]++;
        }
    }
}
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    divisor();
    ll a, b, c, sum, d;
    int i, j, k;
    while(cin >> a >> b >> c)
    {
        sum = 0;
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=b; j++)
            {
                for(k=1; k<=c; k++)
                {
                    d = i*j*k;
                    sum += divi[d];
                }
            }
        }
        cout << (sum%1073741824) << endl;
    }
    return 0;
}
