#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef int64_t ll;
#define pb push_back
#define endl "\n"

int decimalToBinary(int N)
{

    // To store the binary number
    ll B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ll c = pow(10, cnt);
        B_Number +=  c;
        N /= 2;

        if(rem==1)
            break;
        // Count used to store exponent value
        cnt++;

    }

    return B_Number;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x=decimalToBinary(4);
    cout<<x<<endl;
    return 0;
}
