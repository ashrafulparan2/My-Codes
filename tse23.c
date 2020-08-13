#include <stdio.h>
int main()
{
    int s=0,i=0;

    do{
        s+=i;
        i++;
    }
    while(i<=10);
    printf("%d",s);
}
