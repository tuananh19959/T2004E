#include <stdio.h>
#include <math.h>

int main(){
	int a,n;
	int ary[4][3];
	
	for(int i = 0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("ary[%d][%d]=",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	int sum1 = 0, sum2 = 0;
	for(int i=0;i<n;i++){
		sum1 =sum1 +ary[i][i];
		sum2 =sum2 -ary[i][i];
	}
	printf("tong cong la: %d\n",sum1);
	printf("tong tru la: %d\n",sum2);
}
