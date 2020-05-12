#include <stdio.h>

int main(){
	
	int num, num2, num3;
	printf("/nNhap so nguyen co 4 chu so tro xuong:");
	scanf("%d", &num);
	
	while(num > 0){
		num3 = num % 10;
		num2 = num2 * 10 + num3;
		num = num / 10;
	}
	printf("/nSo nghich dao la: %d", num2);
}
