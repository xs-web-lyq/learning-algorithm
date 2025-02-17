#include <stdio.h>

char decodeString(char c){
	if(c >= 'A' && c <= 'Z'){
		return 'Z' - c + 'A';
	}else if(c >= 'a' && c <= 'z'){
		return 'z' - c + 'a';
	}else{
		return c;
	}
}


int main(){
	char str[1000];
	scanf("%s",&str);
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = decodeString(str[i]);
	}
	
	printf("%s",str);
	return 0;
}


