#include <stdio.h>
int main()
{

    int a=5;

    //cout<<a++<<a++<<++a<<a<<a--<<a++<<a++<<--a<<endl;
    a=5;
    //cout<<a++<<a<<a++<<a++<<endl;
    printf("%d %d %d %d",a++,a,a++,a++);

    return 0;
}
