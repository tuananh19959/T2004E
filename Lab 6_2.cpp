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
	
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0 && i%2==0){
			sum+=ary[i];
			count++;
		}
	}printf("trung binh cac so le: %f",(float)sum/count);
}
