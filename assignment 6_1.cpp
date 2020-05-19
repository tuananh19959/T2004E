#include <stdio.h>

int main(){

	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n],sole;
	for(int i=1;i<n;i++){
		printf("nhap so thu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	for(int i=n-1;i>0;i--){
		if(ary[i]%2!=0){
			ary[i] = sole;
		}
	}
	printf("so le cuoi cung la: %d\n",sole);
}
