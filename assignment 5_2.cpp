#include <stdio.h>

int main(){
	int n;
	printf("nhap vao so nguyen n");
	scanf("%d",&n);
	int dem = 0;
	while(n >= 10){
		n = n/10;
		dem++;
	}printf("so chu so cua n la: %d",dem+1);
}
