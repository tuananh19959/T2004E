#include <stdio.h>

int main(){
	
	int n,i;
	float s = 0;
	do
	{
		printf("nhap n>0:");
		scanf("%d",&n);
	}
	while (n <=0);
	
	for(i = 1;i <= n;i++)
	{
		s+=1/(float)i;
	}
	printf("ket qua= %.5f",s);
}
