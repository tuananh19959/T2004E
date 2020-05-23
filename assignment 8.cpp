#include <stdio.h>

int main(){
	int ary[10];
	int i, max, j ,n, sld;
	printf("n=\n");
	scanf("%d",&n);
	for(i = 1;i<n;i++){
		printf("a[i]=");
		scanf("%d",ary[i]);
	}
	i = 1, max = 0;
	do{
		i<=n;
		if(ary[i]>0){
			sld=0;
			j=i;
		}
	}while((j<=n) && (ary[j]>0));
			if(sld>max)
				max = sld;
	}
	printf("so luong duong lien tiep nhieu nhat la:",max);
}

int main(){
	int n,*p;
	printf("n=\n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap vao so thu %d:\n",i);
		scanf("%d",(p+i));
}
