#include <stdio.h>

double area(double a,double b,double c)
{
    double s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        double u,v,w,U,V,W;
        scanf("%lf%lf%lf%lf%lf%lf",&u,&v,&w,&W,&V,&U);
        double u1=v*v+w*w-U*U;
        double v1=u*u+w*w-V*V;
        double w1=u*u+v*v-W*W;
        double vol=(sqrt(4*u*u*v*v*w*w-u*u*u1*u1-v*v*v1*v1-w*w*w1*w1+u1*v1*w1))/12;
        double ar=0;
        ar=area(U,V,W)+area(v,u,W)+area(w,v,U)+area(u,w,V);
        double volt=3*vol/ar;
        printf("%.4lf\n",volt);
    }
    return 0;
}
