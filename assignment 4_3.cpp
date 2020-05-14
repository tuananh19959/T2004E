#include <stdio.h>

int main(){
	int a;
	int sotachra;
	int s=0;
	printf("nhap a:");
	scanf("%d",&a);
	for(;a!=0;){
		sotachra = a%10;
		s+= sotachra;
		a/=10;
	}
	printf("%d",s);
}
