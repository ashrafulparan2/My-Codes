#include <stdio.h>
int main()
{
    int phy,che,math,bio,com,perc;
    scanf("%d%d%d%d%d",&phy,&che,&math,&bio,&com);
    perc=(phy+che+math+bio+com)/5;
    if(perc>=90)
    {
        printf("Grade A\n");
    }
    else if(perc>=80)
    {
        printf("Grade B\n");
    }
    else if(perc>=70)
    {
        printf("Grade C\n");
    }
    else if(perc>=60)
    {
        printf("Grade D\n");
    }
    else if(perc>=40)
    {
        printf("Grade E\n");
    }
    else if(perc>=0)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Invalid Value\n");
    }
}
