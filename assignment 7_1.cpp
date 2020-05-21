#include <stdio.h>
#include <math.h>

int main(){
	int n,a, ary[3][4];
	do{
		printf("\nNhap n:");
		scanf("%d",&n);
	}while(n<=0 || n>4);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("\nSo phan tu cua a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%5d",ary[i][j]);
		}printf("\n");
	}
	
	int sum = 0, avg;
	for(int i=0;i<n;i++){
		sum=sum+a[i][i];
	}avg=sum/n;
	return avg;
}
