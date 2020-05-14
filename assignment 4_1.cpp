#include <stdio.h>

int main(){
	int a, b, c;
	do{
		printf("nhap 3 so a, b, c\n");
		printf("nhap so thu nhat: \n");
		printf("nhap so thu hai: \n");
		printf("nhap so thu ba: \n");
		scanf("%d%d%d", &a, &b, &c);
	}while(a<b+c, b<a+c, c<a+b);
	
	printf("%d, %d, %d dung la 3 canh cua tam giac",a,b,c);
}
