#include <stdio.h>
int main()
{
    float N1,N2,N3,N4,N5,av,av2;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    av=(N1*2+N2*3+N3*4+N4)/9;
    printf("Media: %.1f\n",av);
    if(av>=7.0)
        printf("Aluno aprovado.\n");
    else if(av<=5.0 && av>7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);
        av2=(av+av2)/2;
        if(av2>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",av2);
        }else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",av2);
        }


    }
    else
    {
        printf("Aluno reprovado.\n");
    }


}

