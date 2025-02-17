#include <stdio.h>

int main(){
	char str1[100];
	char str2[100];
//	gets(str1);
//	gets(str2);
	fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
	for(int i = 0 ; i < 100; i++){
		if((str1[i]-str2[i])!=0){
			printf("%d",str1[i]-str2[i]);
			break;
		}
	}
	return 0;
}
