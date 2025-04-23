#include <stdio.h>


int main(){
	int sum=0;
	int a[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{1,2,3,4},
		{5,6,7,8}	
	};
	for(int i=0;i<4;i++){
		sum+= a[i][i];
	}
	for(int i= 0;i<4;i++){
		sum += a[i][4-i-1];
	}
	printf("tong cua hai duong cheo chinh va phu la:%d",sum);
	
	
		
}
