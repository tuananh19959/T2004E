#include <stdio.h>

int main(){
	int n;
	int s = 1;
	
	printf("enter n=");
	scanf("%d",&n);
	
	for (int i = 1; i<=n; i++)
	{
		s=s*i;
	}
	printf("%d! = %d\n",n,s);
}
