#include <stdio.h>
int main()
{
    //formatted input
    float f,k,x,y;
    scanf("%f:%f",&x,&y);
    printf("x=%f\ny=%f\n",x,y);
    scanf("%3f%5f",&f,&k);
    printf("f=%f\n%k=%f\n",f,k);

    //formatted output
    float a=9536.8934;
    printf("%8.4f\n",a);
    printf("%8.2f\n",a);
    printf("%-8.2f\n",a);
    printf("%f\n",a);
    printf("%10.2e\n",a);
    printf("%11.4e\n",-a);
    printf("%-10.2e\n",a);
    printf("%e\n",a);
}
