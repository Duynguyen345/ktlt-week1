#include <stdio.h>
#include <math.h>


int lasonguyento(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i!= 0) return 1;
		
	}
	return 0;
}

int main(){
	int n;
	printf("vui long nhap n:");
	scanf("%d",&n);
	if(lasonguyento(n)) printf("day la so nguyen to!");
	else printf("day khong phai la so nguyen to!");
}
