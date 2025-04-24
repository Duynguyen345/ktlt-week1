#include <stdio.h>
#include <ctype.h>
#include <string.h>

void daonguoc(char a[]){
	
	int len= strlen(a);
	for(int i=0;i<len/2;i++){
		char tmp = a[i];
		a[i] = a[len - i -1];
		a[len -i -1] = tmp;
	}
}

int main(){
	char a[100];
	printf("vui long nhap chuoi:");
	gets(a);
	daonguoc(a);
	
		printf("%s",a);
	

}
