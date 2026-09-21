#include<stdio.h>
int main(){
   int i,j,k,x;
   printf("enter number");
   scanf("%d",&x);
   for(i=1;i<=x;i++)
   {
       for(j=1;j<=x-i;j++){
         printf(" ");
      }
      for(k=1;k<=i;k++){
      printf("%d",k);
      } 
      for(k=i-1;k>=1;k--){
         printf("%d",k);
      }
       printf("\n");
   }
   return 0;
}
