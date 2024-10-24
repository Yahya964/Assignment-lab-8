#include <stdio.h>

int main()
{
    int i,size;
    printf("Enter square matrix size: ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("Enter elements:\n");
    for (i=0; i<size; i++) 
    {
        for (int j=0; j<size; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nPrimary diagonal: ");
    for (i=0; i <size; i++) 
    {
        printf("%d ", matrix[i][i]);
    }
    printf("\nSecondary diagonal: ");
    for (i=0; i<size; i++) 
    {
        printf("%d ", matrix[i][size - i - 1]);
    }

    return 0;
}