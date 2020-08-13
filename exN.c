#include <stdio.h>
#include<string.h>
#define max 1000001
int main()
{
    long long n,i=0,j=0,x1,x2;
    char a[max],b[max];
    gets(a);
    gets(b);
    x1 = strlen(a);
    x2 = strlen(b);

    while(a[i]=='0') i++;
    while(b[j]=='0') j++;

    if(x1-i > x2-j)
        printf(">\n");
    else if(x1-i < x2-j)
        printf("<\n");
    else{
        if(strcmp(a+i, b+j)==0)
            printf("=\n");
        else if(strcmp(a+i, b+j)>0)
            printf(">\n");
        else
            printf("<\n");
    }

    return 0;
}
