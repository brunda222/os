#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
   printf("enter the no.of rows");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
   for(int j=1;j<=i;j++)
   {
   printf("%d",j);
   }
   printf("\n");
}
}
