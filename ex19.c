#include <stdio.h>
int main() {
    int N;
char a[100001], b[100001];

    scanf("%d", &N);
    scanf("%s", a), scanf("%s", b);
    long long cnt1 = 0, cnt0 = 0, n1 = 0, n0 = 0;
    for (int i = 0; i < N; i++) {
        if (b[i] == '0') {
            if (a[i] == '1') {
                cnt1++;
            } else {
                cnt0++;
            }
        } else {
            if (a[i] == '1') {
                n1++;
            } else {
                n0++;
            }
        }
    }
    printf("%lld\n", cnt0 * n1 + cnt1 * n0 + cnt0 * cnt1);

    return 0;
}
