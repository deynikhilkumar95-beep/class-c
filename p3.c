#include<stdio.h>
int main(){
   int i,j,n;
   for(i=0;i<=5;i++)
   {
      for(n=1;n<=5-i;n++){
      printf(" ");
      } 
      for(j=1;j<=2*i-1;j++){
         printf("*");
      }
       printf("\n");
   }
   return 0;
}
