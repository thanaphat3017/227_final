#include <stdio.h>
int main()
{

    int size[3],check[3]= {0,0,0},i,j,k,sum[4]={0,0,0,0},num[3][20][20],a=0;
    for(i=0; i<3; i++)
    {
        scanf("%d",&size[i]);
    }
    printf("\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<size[i]; j++)
        {
            for(k=0; k<size[i]; k++)
            {
                scanf("%d",&num[i][j][k]);
            }
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {   sum[0]=0;
        sum[1]=0;
        sum[2]=0;
        sum[3]=0;
        a=0;

        for(j=0; j<size[i]; j++) //·áÂ§¢ÇÒ
        {
            sum[a]+=num[i][j][j];

        }
        a++;

        for(j=0,k=size[i]-1; j<size[i]; k--,j++)//·áÂ§«éÒÂ
        {
            sum[a]+=num[i][j][k];

        }



        if(sum[0]!=sum[a])
        {
            check[i]=1;

        }
         a++;

        for(j=0; j<size[i]; j++) //¹Í¹
        {
            sum[a]=0;
            for(k=0; k<size[i]; k++)
            {
                sum[a]+=num[i][j][k];

            }


            if(sum[0]!=sum[a])
            {
                check[i]=1;

            }

        }
        a++;
        for(j=0; j<size[i]; j++) //µÑé§
        {   sum[a]=0;

            for(k=0; k<size[i]; k++)
            {
                sum[a]+=num[i][k][j];

            }
            if(sum[0]!=sum[a])
            {
                check[i]=1;

            }

        }
        a++;

    }
    for(i=0; i<3; i++)
    {
        if(check[i]==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
