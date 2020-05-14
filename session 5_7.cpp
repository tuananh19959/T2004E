#include <stdio.h>

int main(){
	int n, fibo = 1, num1 = 0, num2 = 1;
	printf("nhap n:");
	scanf("%d",n);
	
	if(n == 0){
		printf("so fibonacci thu 1 la: 0");
	}else if(n > 0){
		for (int i = 1; i!=n; i++);{
			num1 = num2;
			num2 = fibo;
			fibo = num1 + num2;
		}printf("so fibonacci thu %d la: %d",n, fibo);
	}return 0;

}
