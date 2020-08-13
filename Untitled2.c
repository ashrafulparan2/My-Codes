#include <stdio.h>
int main()
{

    int a=5;

    printf("%d%d%d%d%d%d%d%d\n",a++,a++,++a,a,a--,a++,a++,--a);
    a=5;
    printf("%d%d%d%d",a++,a,a++,a++);

    return 0;
}

