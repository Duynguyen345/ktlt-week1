#include <stdio.h>
#include <stdlib.h>


int cmp(const void* a,const void* b){
	int *x = (int*)a;
	int *y = (int*)b;
	
	if(*x < *y) return -1;
	return 1;
}

int main(){
	int a[100];
	int n;
	printf("vui long nhap n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	
	scanf("%d",&a[i]);
	
}
	

	qsort(a,n,sizeof(int),cmp);
	
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}
