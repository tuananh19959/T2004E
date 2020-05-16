#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n],sum=0,count=0;
	for(int i=0;i<n;i++){
		printf("nhap so thu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	
	int x;
	printf("nhap so can tim:");
	scanf("%d",x);
	int i=0;
	for(int i=0;i<n;i++){
		if(ary[i]==x){
			break;
		}
	}
	if(i>=n){
		printf("khong ton tai %d trong mang",x);
	}else{
		printf("%d nam trong mang",x);
	}
}
