#include <stdio.h>

int main(){
	char arr1[10000];
	scanf("%s",&arr1);
	
	int count = 0;
	for(int i = 0 ; i < 10000; i++){
		if(arr1[i] == '\0'){
			break;
		}
		count++;
	}
	char arr[count];
	for(int i = 0; i < count; i++){
		arr[count - i - 1] = arr1[i];
	}
	arr[count] = '\0';
	
//	for(int i = 0 ; i < count ; i++){
//		printf("%s",arr[i]);
//	}
//	
	printf("%s",arr);
	return 0;
}
