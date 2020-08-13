#include <stdio.h>

int Sum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (Sum(A, N - 1) + A[N - 1]);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int A[100],N;
        scanf("%d",&N);
        for(int i=0;i<N;i++)
        {

            scanf("%d",&A[i]);

        }
        printf("Case %d: %d\n",i+1, Sum(A, N));

    }


    return 0;
}
