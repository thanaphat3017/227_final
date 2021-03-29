#include <stdio.h>

int main()
{
    int num,digit,x,y,check=0,mod;
    scanf("%d %d",&num,&digit);
    x=num;
    while(check!=1)
    {

        y=x;
        while(y>0&&check!=1)
        {   mod = y%10;

            if(mod == digit)
            {
                check=1;
            }
                y/=10;
        }

        x++;
    }
    printf("%d",x-1);
}
