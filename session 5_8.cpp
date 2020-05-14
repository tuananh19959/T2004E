#include <stdio.h>

int main(){
	int sum = 0;
	int dem = 0;
	for(int i=0, count=0; count<100 ; i++){
		if(i%2!=0){
			sum+=i;
			count++;
		}
	}printf("sum = %d",sum);
}
