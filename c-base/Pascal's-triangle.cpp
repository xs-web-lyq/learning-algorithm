#include <stdio.h>

int main(){
	int arr[10][10] = {0};
	for(int i = 0 ; i < 10; i++){
		arr[i][0] = 1;
	}
	int n ;
	scanf("%d",&n);
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < i; j++){
			arr[i][j+1] = arr[i-1][j+1] + arr[i-1][j];
		}
	}
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < i + 1; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
