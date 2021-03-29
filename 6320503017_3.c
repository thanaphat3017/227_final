#include <stdio.h>
int main()
{

    int size[3],check[3]= {0,0,0},a,b,c,i,j,k,sum1=0,sum2=0,num[3][20][20];
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
    {   sum1=0;
        sum2=0;
        for(j=0; j<size[i]; j++) //·áÂ§¢ÇÒ
        {
            sum1+=num[i][j][j];

        }

        for(j=0,k=size[i]-1; j<size[i]; k--,j++)//·áÂ§«éÒÂ
        {
            sum2+=num[i][j][k];

        }


        if(sum1!=sum2)
        {
            check[i]=1;

        }

        for(j=0; j<size[i]; j++) //¹Í¹
        {
            sum2=0;
            for(k=0; k<size[i]; k++)
            {
                sum2+=num[i][j][k];

            }


            if(sum1!=sum2)
            {
                check[i]=1;

            }

        }
        for(j=0; j<size[i]; j++) //µÑé§
        {
            sum2=0;
            for(k=0; k<size[i]; k++)
            {
                sum2+=num[i][k][j];

            }
            if(sum1!=sum2)
            {
                check[i]=1;

            }

        }
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
