#include <stdio.h>

int main(){

	float a;
	int b, c;
	printf("nhap so tien gui ngan hang: ");
	scanf("%f", &a);
	
	printf("nhap nam muon rut tien: ");
	scanf("%d", &b);
	
	for(c = 0; c < b; c++){
		a = a + a * 8/100;
	}
	
	printf("tien cua ban sau %d nam la: %.5f\n",b,a);
	return 0;
}
