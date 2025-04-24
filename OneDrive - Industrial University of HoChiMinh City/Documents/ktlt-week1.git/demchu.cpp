#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count(char a[]){
	int count=0;
	int stop = 0;
	for(int i=0;i<strlen(a);i++){
		if((a[i])!=' ' && stop==0){
			
	
		 ++count;
		 stop = 1;
}
	else if(a[i] == ' '){
		stop = 0;
		
	}
	
	}
	
	return count;
	
}

int main(){
	char a[100];
	printf("vui long nhap chuoi:");
	gets(a);

	
	printf("so tu co trong cau la:%d",count(a));
	
}
