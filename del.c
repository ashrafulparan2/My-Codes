#include <stdio.h>
#include <math.h>

int main()
{
    long long n=0;
    scanf("%lld", &n);
    int count=0;
    for(long a = 1; a < n; a++)
    {
        for(long b = a; b < n; b++)
        {

            int temp = sqrt(a * a + b * b);
            if(temp * temp == a * a + b * b)
            {
                printf("%d\n%d\n",a,b);
            }
            else if(a * a + b * b > n * n)
            {
                break;
            }
        }
    }

    return 0;
}

