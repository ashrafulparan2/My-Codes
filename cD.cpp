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

    int n, i, a[MX], sum1{0}, sum2{0}, mid1, mid2;

    cin >> n;
    f(i,0,n)
    {
        cin >> a[i],
            sum1+=a[i];
    }

    mid1 = ceil((double)sum1/n);
    mid2 = sum1/n;
    sum1 = 0;
    f(i,0,n)
    {
        sum1 += abs(a[i]-mid1)*abs(a[i]-mid1);
        sum2 += abs(a[i]-mid2)*abs(a[i]-mid2);
    }
    cout << min(sum1, sum2) << endl;

    return 0;
}

