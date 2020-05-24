#include <stdio.h>

bool KiemTraMang(int s, int *ary){
	s= sizeof(*ary)/sizeof(int);
	printf("nhap s=\n");
	scanf("%d",&s);
	
	for(int i=0;i<s;i++){
		if(ary[i]==s)
			s++;
	}
	if(s==0){
		return false;
	}else{
		return true;
	}
}

void NhapMang(int *ary,int s){
	for(int i=0;i<s;i++){
		printf("5%d",ary[i]);
	}
}

void XuatMang(int ary[], int n){
	for(int i=0;i<n;i++){
		printf("%5d",ary[i]);
	}
}

int main(){
	int s;
	printf("nhap s=\n");
	scanf("%d",&s);
	int ary[s];
	int x=10, y=20;
	int NhapMang(10,20);
	if(KiemTraMang(10,20)){
		printf("phan tu %d khong xuat hien trong day");
	}else{
		printf("phan tu %d xuat hien trong day");
	}
	return 0;
}
