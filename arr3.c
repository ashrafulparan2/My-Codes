#include <stdio.h>
int main()
{
    double m[5]={90.05,45.52,78.55,85,65};
    int i;
    for(i=0;i<5;i++)
    {
        printf("Roll:%d Mark=%.2lf\n",i+1,m[i]);
    }
}
