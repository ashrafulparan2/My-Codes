#include <stdio.h>

int n,k,in[1005];
int possible(int mid)

{
       int cnt=0,i,cur=0;
       for(i=0;i<n;i++)
       {
              cur+=in[i];
              if(cur>mid)
              {
                     cnt++;
                     cur=in[i];
              }

       }
       cnt++;
       return cnt<=k;
}

int main()
{
    int cs,t;
    scanf("%d",&t);
    for(cs=1;cs<=t;cs++)
    {
           int high=0,low=-1,i;
           scanf("%d %d",&n,&k);
           n++,k++;
           for(i=0;i<n;i++)
           {
                  scanf("%d",&in[i]);
                  high+=in[i];
                  if(in[i]>low) low=in[i];
           }
           int res=low;
           while(low<high)
           {
                  int mid=(low+high)/2;
                  if(possible(mid))
                  {
                         res=mid;
                         high=mid;
                  }
                  else low=mid+1;
           }
           printf("Case %d: %d\n",cs,res);
           int cnt=k,cur=0;

           for(i=0;i<n;i++)
           {
                   cur+=in[i];
              if(cur>res || n-i+1==cnt)
              {
                     cnt--;
                     cur-=in[i];
                     printf("%d\n",cur);
                     cur=in[i];
              }
           }
           printf("%d\n",cur);
    }
}
