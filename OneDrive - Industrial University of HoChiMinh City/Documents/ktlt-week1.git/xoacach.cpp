

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count(char a[]){
	int len = strlen(a);
	int i = 0; int j=0;
	char result[100];
	while(a[i] == ' '){
		
		i++;
	}
	while(a[i] !='\0'){
		
	
	while(a[i] == ' ' && a[i+1]==' '){
		i++;
		continue;
		
		
	}
	result[j] =a[i];
	i++;
	j++;
	
}
	if(result[j-1] == ' ' ) result[j-1] = '\0'; 

	printf("%s",result);
}
int main(){
	char a[100];
	printf("vui long nhap chuoi:");
	gets(a);

	
	count(a);
	
}
