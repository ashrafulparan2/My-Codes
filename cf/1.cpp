#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX = 2e5 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    #ifndef online_judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;
    if(a==0&&b==0&&c==0)
    {
        cout<<"-1"<<endl;
    }
    else if(a==0&&b==0)
    {
        cout<<"0"<<endl;
    }
    else if (a == 0&&b)
    {
        cout << "1" << endl;
        cout << fixed << setprecision(10) << -c / b << endl;
    }
    else
    {
        double n=b*b-4*a*c;
        if(n==0)
        {
            cout<<"1"<<endl;
            //cout<<-b/2*a<<endl;
            cout<< fixed << setprecision(10)<<-b/(2*a)<<endl;
        }
        else if(n>0)
        {
            cout<<"2"<<endl;
            double x=(-b+sqrt(n))/(2*a);
            double y=(-b-sqrt(n))/(2*a);
            cout<< fixed << setprecision(10)<<min(x,y)<<endl;
            cout<< fixed << setprecision(10)<<max(x,y)<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}