#include <stdio.h>

int main(){
	int a, b,i,uc;
	printf("nhap 2 so (a, b)");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a||i<=b;i++){
	if(a%i == 0 && b%i == 0)
		uc = i;
	}
	printf("ucln=%d\n",uc);
}
