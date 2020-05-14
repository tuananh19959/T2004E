#include <stdio.h>

int main(){
	int a,b = 0,c;
	printf("nhap c =");
	scanf("%d",&c);
	while(c>0 && c!=0)
	{
		a=c%10;
		b=b+a;
		c=c/10;
	}
	if(b%3==0)
	printf("so %d nhap vao chia het cho 3",a);
	else
	printf("so nhap vao khong chia het cho 3",b);
	return 0;
}
