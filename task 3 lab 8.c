
#include <stdio.h>

int main() 
{
    int n,i,j;
    printf("Enter odd number: ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Invalid number re enter: ");
        scanf("%d", &n);
    }
    printf("Pattern of odd numbers:\n");
    for (i=n; i>=1; i-=2) 
    {
        for (j=i; j>=1; j-=2) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
