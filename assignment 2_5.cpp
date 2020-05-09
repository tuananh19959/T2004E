#include <stdio.h>

int main(){
	
	int a, b, x, y;
	printf("nhap 2 so a,b\n");
	scanf("%d%d", &a, &b);
	
	if(a>=b){
		x = a/b;
	} else {
		y = a*b;
	}
	printf("%d/n: x ,%d: y");
}
