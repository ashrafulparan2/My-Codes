#include <stdio.h>
#include <string.h>
int main()
{
    int max=11,min=0,s,h;
    char s1[11],s2[11];
    while(scanf("%d",&s)&&s!=0)
    {
        //max=11;
        //min=0;
        scanf("%s %s",s1,s2);
        h=1;
        if(strcmp(s1,"too")==0)
        {
            if(strcmp(s2,"high")==0)
            {
                if(s<max)
                {
                    max=s;
                }
            }
            else if(strcmp(s2,"low")==0)
            {
                if(s>min)
                {
                    min=s;
                }
            }
        }
        else if(strcmp(s1,"right")==0&&strcmp(s2,"on")==0)
        {

            //printf("\n%d\n",s);
            //printf("\n%d\n",min);
            //printf("\n%d\n",max);


            if(s<max&&s>min)
            {
                printf("Stan may be honest\n");
            }
            else
            {
                printf("Stan is dishonest\n");
            }

            max=11;
            min=0;
        }

    }
}
