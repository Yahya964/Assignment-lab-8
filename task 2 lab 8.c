#include <stdio.h>
int main() {
    int x,y,i,j;
    int flag=0;
    printf("enter lower limit: ");
    scanf("%d",&x);
    printf("enter upper limit: ");
    scanf("%d",&y);
    if(x==1)
    {
        x=x+1;
    }
    if (x==2)
    {
        printf("%d,", x);
        x=x+1;
    }
    for(i=x;i<=y;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            printf(" %d,",i);
        }
        flag=0;
        i++;
    }


return 0;
}