#include <stdio.h>

int cycle(int n,int count)
{
    //count=0;
    if(n==1)
    {
        return 0;
    }

    else if(n%2)
    {
        count++;

        return cycle(3*n+1,count)+1;
    }

    else
    {
        count++;
        return cycle(n/2,count)+1;
    }

}

int main()
{
    int i=8,count;//,j;
    //scanf("%d%d",&i,&j);
    /*for(i;i<=j;i++)
    {
        cycle(i);
    }*/
    cycle(i,count);
    printf("%d\n",count);
}
