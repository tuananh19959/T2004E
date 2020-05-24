#include <stdio.h>
#include <string.h>

int main(){
	char str1[20];
	printf("nhap chuoi 1:\n");
	scanf("%s",str1);
	char str2[20];
	printf("nhap chuoi 2:\n");
	scanf("%s",str2);
	
	char hr = 1;
	if(strcat(str1,str2) && strcat(str2,str1)){
		printf("str1 chua str2");
	}else{
		printf("str1 khong chua str2");
	}
	return 0;
}
