#include <stdio.h>
#include <string.h>

int main(void){
	char s[] = "helloT2004E";
	char temp;
	
	int n = strlen(s);
	printf("chuoi truoc khi sap xep: %s\n",s);
	
	for(int i=1;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[i]>s[j]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	printf("chuoi sau khi sap xep:%s\n",s);
	return 0;
}
