#include <stdio.h>

int main()
{
    int n = 5;
    int guess, count=0, limit=3, outof=0;

    while(guess != n && outof == 00)
    {
        if(count < limit)
        {
            printf("Enter a number: ");
            scanf("%d", &guess);
            count++;
        }
        else

        {
            outof = 1;
        }
    }


    if(outof==1)
    {
        printf("You Lose\n");
    }


    else
    {
        printf("You Win!\n");
    }
    return 0;
}
