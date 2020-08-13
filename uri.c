#include <stdio.h>
#include <math.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float N;
    int a,b,c,d,e,f,g,h,i,j,k,l,n,o,p,q,r,s,t,u,v;
    scanf("%f",&N);
    int x=(int)N;
    a=x/100;
    b=(x%100);
    c=b/50;
    d=b%50;
    e=d/20;
    f=d%20;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=j/2;
    l=j%2;
    int m=(N-x)*100;
    n=m/50;
    o=m%50;
    p=o/25;
    q=o%25;
    r=q/10;
    s=q%10;
    t=s/5;
    u=s%5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",c);
    printf("%d nota(s) de R$ 20.00\n",e);
    printf("%d nota(s) de R$ 10.00\n",g);
    printf("%d nota(s) de R$ 5.00\n",i);
    printf("%d nota(s) de R$ 2.00\n",k);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",l);
    printf("%d moeda(s) de R$ 0.50\n",n);
    printf("%d moeda(s) de R$ 0.25\n",p);
    printf("%d moeda(s) de R$ 0.10\n",r);
    printf("%d moeda(s) de R$ 0.05",t);
    printf("\n%d moeda(s) de R$ 0.05\n",u);
    //printf("\n\n%d moeda(s) de R$ 0.05\n",u);
    return 0;
}
