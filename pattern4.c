#include<stdio.h>
int main()
{
	int n,i,j,k,space;
	printf("enter no.of rows");
	scanf("%d",&n);
        for( i=1;i<n;i++)
        {
        for( space = 1; space<=n-i; ++space)
        {
        printf(" ");
        }
        for( j=1; j<=i; j++)
        {
        printf("%d",j);
        }
        for(k=i-1;k>=1;k--)
        {     
        printf("%d",k);
        }
        printf("\n");
        }        
}
