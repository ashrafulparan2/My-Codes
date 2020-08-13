#include <stdio.h>
int main()
{
    int age = 30;
    int *page = &age;

    printf("%p\n", page);
    printf("%d\n", *&age);
}
