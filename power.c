#include<stdio.h>
int power(int m,int n) //Logic 1
{
	if(n==0)
		return 1;
	return power(m,n-1)*m;
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",power(m,n));
	return 0;
}
