#include <stdio.h>
#include <string.h>


int main() {
    int n;
    scanf("%d", &n);
    char ans[1000];
    if(n == 1) {
        printf("1\n");
        return 0;
    } else if(n == 0) {
        printf("10\n");
        return 0;
    }
    for(int i = 9;i >= 2;--i) {
        while(n % i == 0) {
            n /= i;
            ans[100]=i;
        }
    }
    if(n == 1) {
        for (int i = strlen(ans); i >= 0; --i) {
            printf("%d", ans[i]);
        }
        printf("\n");
    } else {
        printf("-1\n");
    }
    return 0;
}
