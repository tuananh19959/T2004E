#include <stdio.h>

int main(){
	int n, fibo, fibo1 = 1, fibo2 = 1;
	printf("nhap n:");
	scanf("%d",&n);
	
	while(fibo1+fibo2<n){
		fibo=fibo1+fibo2;
		fibo2=fibo1;
		fibo1=fibo;
	}printf("%d",fibo);
}
