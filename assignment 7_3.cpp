#include <stdio.h>

int main(){
	int ary[10][10], size, i,j, temp;
	
	printf("\nNhap kich co cua ma tran:");
	scanf("%d",&size);
	
	printf("\nNhap ma tran:\n");
	for(int i = 0;i<size;i++){
		for(int j = 0; j < size; j++){
			printf("%d",&ary[i][j]);
		}
	}
	printf("\nNhap ma tran vua roi:\n");
	for(int i = 0;i<size;i++){
		printf("\n");
		for(int j = 0;j < size; j++){
			printf("%d\t",&ary[i][j]);
		}
	}
	
	for(i=1;i<size;i++){
		for(j=0;j<i;j++){
			temp = ary[i][j];
			ary[i][j] = ary[j][i];
			ary[j][i] = temp;
		}
	}
	printf("\nMa tran chuyen vi cua ma tran da cho la:\n");
	for(i = 0; i<size;i++){
		printf("\n");
		for(j = 0;j<size;j++){
			printf("%d\t",ary[i][j]);
		}
	}
}
