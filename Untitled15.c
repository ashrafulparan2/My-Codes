#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a,b,c,m1,m2;
     scanf("%d%d%d",&a,&b,&c);
     m1=(a+b+abs(a-b))/2;
     m2=(m1+c+abs(m1-c))/2;
     printf("%d eh o maior\n",m2);

    return 0;
}
