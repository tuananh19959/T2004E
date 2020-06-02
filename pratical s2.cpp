#include <stdio.h>
#include <string.h>

int main(){
	int c=0;
	int count = 0;
	char s = [100];
	
	printf("nhap chuoi:\n");
	scanf("%s",s);
	
	while (s[c]!='null'){
	if(s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' || s[c] == 'u' || s[c] == 'U')
		count++;
	c++;
	}
	printf("number of vowel:%d",count);
}
