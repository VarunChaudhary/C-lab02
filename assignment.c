#include<stdio.h>
void main()
{
	int m,n,t;
	printf("Enter the two no.");
	scanf("%d%d",&m,&n);
	t=m;
	m=n;
	n=t;
	printf("After interchanging the no are=%d\t%d",m,n);		
}
