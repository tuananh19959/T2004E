#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c, delta, x1, x2;
	printf("nhap 3 so a, b, c\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a = 0){
		if (b = 0){
			if (c = 0){
				printf("phuong trinh vo so nghiem");
			} else {
				printf("phuong trinh vo nghiem");
			}
		} else {
			printf("phuong trinh co nghiem duy nhat");
			scanf("-c/b");
		}
	} else {
		delta = b*b - 4*a*c;
		if(delta < 0) {
			printf("phuong trinh vo nghiem");
		} else if (delta == 0){
			x1 = x2 = (-b / (2*a));
			printf("phuong trinh co nghiem kep");
			scanf("x1 = x2 = -b/(2*a)");
		} else {
			scanf("x1 = (-b+sqrt(delta))/(2*a)");
			scanf("x2 = (-b-sqrt(delta))/(2*a)");
		}
	}
	printf("phuong trinh bac 2: %d\n,x1");
	printf("phuong trinh bac 2: %d\n,x2");
}
