#include <stdio.h>

int main() {
    int r,c;
    printf("Enter row & column size of matrix ");
    scanf("%d%d",&r,&c);
    int matrix1[r][c], matrix2[r][c], sum[r][c], i, j;
    printf("Enter matrix-1 elements :\n");
    for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("Enter matrix-2 elements :\n");
    for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++){
			scanf("%d", &matrix2[i][j]);
		}
	}
	if(c1==r2)
	{
		
	}
	else
	   print("Column size of 1st matrix not equal to row size of second matrix");
	   
	return 0;
}
