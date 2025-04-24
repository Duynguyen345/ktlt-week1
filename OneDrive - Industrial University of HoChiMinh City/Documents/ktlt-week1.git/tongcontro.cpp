#include <stdio.h>

void tinhtong(int a[],int n, int* tong){
	
	for(int i=0;i<n;i++){
		*tong +=a[i];
	}
	printf("%d",*tong);
}


int main(){
	int n;
	printf("nhap vao so luong phan tu:");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int tong ;
	tinhtong(a,n,&tong);
	
}
