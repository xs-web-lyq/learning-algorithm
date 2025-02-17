#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

long long charToNumber(char* str){
	char temp[20];
	int j = 0;
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] != ','){
			temp[j++] = str[i];
		} 
	}
	temp[j]  = '\0';
	return atol(temp);
}


int main(){
	char A[20],B[20];
	scanf("%s%s",A,B);
	int a = charToNumber(A);
	int b = charToNumber(B);
	printf("%d",a+b);
	return 0;
}
