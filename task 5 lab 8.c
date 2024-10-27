
#include <stdio.h>

int main()
{
    int matrix[3][3];
 
int i,j;
for (i = 0; i < 3; i++) 
{
      
    for (j = 0; j < 3; j++) { 
    printf("enter elements of 3x3 matrix: ");
    scanf("%d",&matrix[i][j]);
}
}

    printf("Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int row, column;
    for (i = 0; i < 3; i++) 
    {
    
        row = matrix[i][0];
        for (j = 1; j < 3; j++)
        {
            if (matrix[i][j] < row)
            {
                row = matrix[i][j];
            }
        }
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] == row) 
            {
                column = 1;
                
                for (int k = 0; k < 3; k++) {
                    if (matrix[k][j] > matrix[i][j]) {
                        column = 0;
                        break;
                    }
                }
                if (column==1) 
                {
                    printf("Saddle point is %d at (%d, %d)\n", row, i + 1, j + 1);
                }
            }
        }
    }
    return 0;
}