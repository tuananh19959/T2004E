#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c;
	printf("nhap 3 so a, b, c\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				printf("day la 3 canh tam giac");
				scanf("p = a+b+c");
				scanf("p2 = p/2");
				scanf("s = sqrt(p2*(p2-a)*(p2-b)*(p2-c))");{
				}
				printf("chuvi: %d/n,,p");
				printf("dientich: %d\n,s");
			} else 
			printf("khong phai tam giac");
		} else 
		printf("khong phai tam giac");
	} else 
	printf("khong phai tam giac");
}
