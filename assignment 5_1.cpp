#include <stdio.h>

int main(){
	int a, b;
	int sum = 0;
	printf("nhap so a,b");
	scanf("%d%d",&a,&b);
	for(int i = a; i <= b;i++){
		if(a < b){
			sum+=i;
		}
	}printf("sum = %d",sum);
}
