#include <stdio.h>

int demsole(int n,int a[]){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]%2 != 0 ) count++;
		
	}
	return count;
}
int demsochan(int n,int a[]){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]%2 == 0 ) count++;
		
	}
	return count;
}

int main(){
	int n;
	printf("Vui long nhap n:");
	
	scanf("%d",&n);
	
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("tong so le co trong mang:%d\n",demsole(n,a));
	printf("tong so chan co trong mang:%d",demsochan(n,a));
	
	
	
}
