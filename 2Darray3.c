#include <stdio.h>

int main() {
    int r1,c1,r2,c2;
    printf("Enter row & column size of matrix ");
    scanf("%d%d",&r1,&c1);
    int matrix1[r1][c1], matrix2[r2][c2], sum[r1][c2], i, j;
    printf("Enter matrix1 element :");
    printf("Enter matrix2 element :");
     for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++){
			scanf("%d", &matrix1[i][j]);
		
	}
    printf("Enter matrix-2 elements :\n");
    for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++){
			scanf("%d", &matrix2[i][j]);
	}
	if(c1==r2)
	{
		int result[r1][c2],k;
		for(i=0; i<r1; i++){
			for(j=0; j<c2; j++){
				int sum=0;
				for(k=0; k<c1; k++){
					sum+=matrix1[i][k] * matrix2[k][j];
				}
		        result[i][j] = sum;
		        printf("%d", result[i][j]);
		    }
		    printf("\n");	
	    }
    }
    else
        printf("Column size of 1st matrix not equal to row size of 2nd matrix");
        } 
   }
   return 0;
}
    
	
	
	
	
	
	
	
	
	
	
