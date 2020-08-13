#include <stdio.h>

int main(){
    int a,b,c,d,k;
    int inicio, fim;

             scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
             if(a == 0) inicio = 24*60 + b;
             else inicio = a*60 + b;

             if(c == 0) fim = 24*60 + d;
             else fim = c*60 + d;

             if(fim > inicio) printf("%d\n", fim-inicio-k);
             else printf("%d\n", 24*60 - (inicio-fim-k));

    return 0;
}
