#include <stdio.h>

int main(){
	int arr[10];
	for(int i = 0 ; i < 9; i++){
		scanf("%d",&arr[i]);
	}
	int num;
	scanf("%d",&num);
	
	for(int i = 8; i >=0 ; i--){
		if(arr[i] > num){
			arr[i+1] = arr[i];
		}else{
			arr[i+1] = num;
			break;
		}
	}
	
	for(int i = 0 ; i < 10; i++){
		printf("%d\n",arr[i]);
	}
	
	return 0; 
}
