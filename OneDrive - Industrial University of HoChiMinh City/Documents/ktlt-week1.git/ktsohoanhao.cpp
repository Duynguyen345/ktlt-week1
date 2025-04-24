#include <stdio.h>
#include <math.h>

int lasohoanhao(int n){
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0) s += i;
	}
	if(n==s) return 1;
	else return 0;

}

int main(){
	int n;
	printf("vui long nhap n:");
	scanf("%d",&n);
	if(lasohoanhao(n)) printf("day la so hoan hao!");
	else printf("day khong phai la so hoan hoa!");
}
