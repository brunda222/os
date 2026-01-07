#include<stdio.h>
int main()
{
	int n,i,j,space;
	printf("enter no.of rows");
	scanf("%d",&n);
        for( i=0;i<=n;++i)
        {
        for( space = 1; space<=n-i; ++space)
        {
        printf(" ");
        }
        for(int j=1; j<=i; ++j)
        {       
        printf("* ");
        }
        printf("\n");
        }        
}

