#include <stdio.h>



int search(int a[][5],int n,int m){
	
	int max = a[0][0] ;
	int h1=0, h2 = n-1 , c1 = 0,c2 = m-1;
	
	for(int i=c1;i<=c2;i++){
		if(max < a[h1][i]) max = a[h1][i];
	}
	
	for(int i=h1;i<=h2;i++){
		if(max < a[i][c2]) max = a[i][c2];
	}
	for(int i=c2;i>=c1;i--){
		if(max < a[h2][i]) max = a[h2][i];
	}
	for(int i=h2;i>=h1;i--){
		if(max < a[i][c1]) max = a[i][c1];
			}
	return max;
	
	
}

int main(){
	int n=4;
	
	int a[n][5] ={
		{1,2,3,4},
		{5,6,7,8},
		{1,2,3,4},
		{5,6,7,8}
		
	};
	printf("phan tu lon nhat la:%d",search(a,4,4));

	
	
}
