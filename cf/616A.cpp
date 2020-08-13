/*
      Ashraful Islam Paran
      11-August-2020
      22:40:46
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, x, n) for (int i = x; i < n; i++)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
typedef unsigned long long ull;
typedef vector<long long> vi;
#define ull unsigned long long
const int MX = 1000011;
const int INF = 1e18;
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(x) x.begin(), x.end()
#define ff first
#define ss second

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, i = 0, j = 0, a, b, ln1, ln2;
    char arr[MX], brr[MX];
    scanf("%s %s", &arr, &brr);
    ln1 = strlen(arr);
    ln2 = strlen(brr);

    while (arr[i] == '0')
        i++;
    while (brr[j] == '0')
        j++;

    if (ln1 - i > ln2 - j)
        printf(">\n");
    else if (ln1 - i < ln2 - j)
        printf("<\n");
    else
    {
        if (strcmp(arr + i, brr + j) == 0)
            printf("=\n");
        else if (strcmp(arr + i, brr + j) > 0)
            printf(">\n");
        else
            printf("<\n");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}