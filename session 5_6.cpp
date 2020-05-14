#include <stdio.h>
#include <math.h>

int main(){
	int n,n2 = 0;
	printf("nhap so nguyen duong n");
	scanf("%d",n);
	if(n<2){
		printf("%d khong phai la so nguyen to",n);
	}else{
		for(n2=2;n2<=sqrt(n);n2++){
			if(n%n2==0){
				printf("%d la so nguyen to",n);
			}else{
				printf("%d khong phai la so nguyen to");
		}
		}
	}
}
