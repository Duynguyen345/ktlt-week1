#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a,const void* b){
	int* x = (int*)a;
	int* y = (int*)b;
	if(*x<*y) return -1;
	
	else return 1;
}

int main(){
	int n;
	do{
		printf("vui long nhap so dong vien:");
		scanf("%d",&n);
		if(n<0) printf("khong hop le!");
		
		
	}while(n<=0);
	
	
	int *B = (int*)malloc(n * sizeof(int));
	if(B == NULL){
        printf("Cap phat khong thanh cong !\n");
    }
    else{
        printf("Cap phat thanh cong !\n");
	for(int i=0;i<n;i++){
		do{
			printf("nhap ket qua cua vdv thu %d:",i+1);
			scanf("%d",&B[i]);
			if(B[i]<0 || B[i]>100) printf("ket qua nay khong hop le vui long nhap lai!");
				
		}
		while(B[i] < 0 || B[i] > 100);
		
	}
}	
	printf("ket qua cua huy chuong vang bac dong lan luot la:");
	qsort(B,n,sizeof(int),cmp);
	for(int i=n-1;i>n-4;i--){
		
		printf("%d ",B[i]);
	}
	free(B);

}
