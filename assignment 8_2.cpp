#include <stdio.h>

int main(){
	int n, ary[10];
	int s = 0;
	printf("nhap vao so phan tu:\n");
	scanf("%d",&n);
	
	for(int i = 0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			s=s+ary[i];
		}
	}printf("tong cac so duong trong day la: %d\n",s);
}
