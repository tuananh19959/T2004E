#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p;
	printf("n=\n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap vao so thu %d:\n",i);
		scanf("%d",(p+i));
	}
	printf("\n");
	p = (int *)realloc(p,n*2*sizeof(int));
	printf("Nhap them:\n");
	for(int i=n;i<2*n;i++){
		printf("Nhap vao so thu %d:\n",i);
		scanf("%d",(p+i));
	}
	printf("\n");
	p = (int *)realloc(p,n*2*sizeof(int));
	printf("Nhap them:\n");
	for(int j=n;j<2*n;j++){
		printf("Nhap vao so thu %d:\n",j);
		scanf("%d",(p+j));
	}
	int tmp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if( *(p+j) = *(p+i)){
				tmp = *(p+j);
				*(p+j) = *(p+i);
				*(p+i) = tmp;	
			}
		}
	}
	printf("so duong lien tiep nhieu nhat:\n",tmp);
}
