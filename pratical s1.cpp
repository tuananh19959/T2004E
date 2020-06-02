#include <stdio.h>
#include <string.h>

void concat(char s1[],char s2[]){
	strcat(s1," ");
	strcat(s1,s2);
}
	
int main(){
	char s1[20];
	printf("nhap chuoi :\n");
	scanf("%s",s1);
	char s2[20];
	printf("nhap chuoi :\n");
	scanf("%s",s2);
	
	printf("the concatenated string:%s\n",s1);
}
