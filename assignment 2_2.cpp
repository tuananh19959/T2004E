#include <stdio.h>

int main(){
	
	int a, b, c;
	printf("nhap 3 so a, b, c\n");
	scanf("%d%d%d", &a, &b, &c);
	
	int min = a;
	
	if(min > b){
		min = b;
	}
	
	if(min > c){
		min = c;
	}
	
	printf("min is %d\n", min);
}
