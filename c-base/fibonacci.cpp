#include <stdio.h> 
int fibonacci(int n){
	if(n < 3){
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int n = 20;
//	scanf("%d",&n);
	int arr[n];
	arr[0] = arr[1] = 1;
	for(int i = 2; i < n; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	for(int i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}
//	printf("%d",fibonacci(n));
	return 0;
}


