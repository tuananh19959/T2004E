#include <stdio.h>
#include <math.h>

int main(){
	int ary[10] = {1,2,3,4,5,-4,-4,11,22};
	for(int i=0;i<10;i++){
		printf("%5d",ary[i]);
	}
	int sum,i,j,n;
	
	for(j=1;j<n;j++){
		i =j - 1;
		sum = ary[j];
		while((i>=0) && (sum > ary[i])){
			ary[i+1] = ary[i];
			i--;
		}
		ary[i+1] = sum;
	}
	printf("tong so duong lon nhat trong day: %d\n",sum);
}
