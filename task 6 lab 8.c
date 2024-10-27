#include<stdio.h>

int main()
{
	int r,c,i,j,k,max_row,max_col;
	int max=0;
	k=1;
	printf("enter rows: ");
	scanf("%d",&r);
	printf("enter columns: ");
	scanf("%d",&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("enter element no.%d: ",k);
	    scanf("%d",&arr[i][j]);	
	    if(arr[i][j]>max)
	    {
	    	max=arr[i][j];
	    	max_row=i;
	    	max_col=j;
		}
	    k=k+1;
		}
	}
	
	printf("maximum number in the matrix is: %d in row: %d and column: %d",max,max_row,max_col);
	
}