#include <stdio.h>
#include <math.h>


#define MAX 1000001


int main()
{
    int a, b, c, ans = 0;
    scanf("%d%d%d", &a, &b, &c);
    int D[MAX] = {1, 1};
    for (int i = 1; i < a + 1; i++)
    {
        for (int j = 1; j < b + 1; j++)
        {
            for (int k = 1; k < c + 1; k++)
            {
                int l = i * j * k;
                if (!D[l])
                {
                    long double sqi = sqrtl(l);
                    int sum = 0;
                    for (int m = 2; m < (int) sqi + 1; m++)
                    {
                        if (!(l % m))
                        {
                            if (sqi == m)
                            {
                                sum++;
                                continue;
                            }
                            sum += 2;
                        }
                    }
                    D[l] = sum + 2;
                }
                ans += D[l];
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}
