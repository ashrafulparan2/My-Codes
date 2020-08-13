#include <stdio.h>
#include <string.h>


int main(){
    int N;
    scanf("%d",&N);

    if(N==0) printf("10\n");
    else if(N==1) printf("1\n");


        char ans[100];

        while(N!=1){


            for(int i = 9;i>1;--i){
                if(N%i==0){

                    for(int j=0;j<100;j++)
                        ans[j] += i;                    {
                    }

                    N /= i;
                    break;
                }
            }
        }


        if(N!=1) printf("-1\n");
        else printf("%s\n",strrev(ans));


    return 0;
}

