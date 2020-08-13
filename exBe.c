#include <stdio.h>
int main()
{
   int n , m , match=0, cnt=0,sum=0;
   scanf("%d%d",&n,&m);
   int s[n];
   for(int i=0; i<n; i++){
    scanf("%d",s[i]);
    if(s[i]==m)
        match++;
   }
   sort(s,s+n,greater<int>());
   if(match!=0)
    cout<<1;
    else{
        for(int i=0; i<n; i++){
            sum+=s[i];
            cnt++;
            if(sum>=m){
                cout<<cnt<<"\n";
                break;
            }
        }
    }
    return 0;
}
