#include <stdio.h>

int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int x[n],ans[n],max,max2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
  int check[10000];
  check[0]=0;
   max=x[0];
   for(i=0;i<n;i++)
   {
       check[x[i]]++;
       if(x[i]>max)
        max=x[i];

   }
  max2=check[0];
   for(i=0;i<=max;i++)
   {
       if(check[i]>max2)
        max2=check[i];

   }



   for(i=0;i<=max;i++)
   {
       if(check[i]==max2)
        printf("%d ",i);
   }

}
