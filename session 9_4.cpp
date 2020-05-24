#include <stdio.h>

void DuyetMang(int ary[], int n){
	for(int i=0;i<n;i++){
		printf("nhap so thu %d:\n",i);
		scanf("%d",ary[i]);	
	}
}

void NhapMang(int *ary,int n){
	for(int i=0;i<n;i++){
		printf("5%d",ary[i]);
	}
}

void SapXepMang(int ary[], int n){
	for(int i = 0;i<n-1;i++){
		for(int j = 0;j<n-1;j++){
			if(ary[j+1]<ary[j]){
				int tg=ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=tg;
			}
		}
	}
}

void XuatMang(int *ary, int n){
	for(int i=0;i<n;i++){
		printf("5%d",ary[i]);	
	}
}

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	NhapMang(ary,n);
	SapXepMang(ary,n);
	XuatMang(ary,n);
	
	return 0;
}
