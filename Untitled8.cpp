#include<bits/stdc++.h>
int main()
{
    int i=0,j=0;
    int A[5][5]= {0};
    for(i=1; i<=3; i++)
        for(j=1; j<=3; j++)
            scanf("%d",&A[i][j]);
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
            printf("%d",(A[i][j]+A[i][j-1]+A[i][j+1]+A[i-1][j]+A[i+1][j]+1)%2);
        printf("\n");
    }
}

