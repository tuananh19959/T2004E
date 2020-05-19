#include <stdio.h>

int main(){
	int n;
	int ary[n];
	printf("nhap n=");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("nhap gia tri %d:",i);
		scanf("%d",&ary[i]);
	}
	int min = ary[n];
	for(int i=0;i<n;i++){
		if(ary[i]<min){
			min = ary[i];
		}
	}printf("gia tri nho nhat = %d\n",min);
}
