#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long pos(long long a , long long b){
	char A[20],B[20];
	ltoa(a,A,10);
	ltoa(b,B,10);
	printf("����ת��Ϊ�ַ���: %s\n", A); // ���: 
	printf("����ת��Ϊ�ַ���: %s\n", B); // ���: 
	int i = 0;
	int j = 0;
	long long sum = 0;
	while(A[i] != '\0'){
		j = 0; 
		while(B[j] != '\0'){
			sum += (A[i] - '0') * (B[j++] - '0');
		}
		i++;
	}
	printf("%d",sum);
}



int main(){
	long long a , b;
	scanf("%d",&a);
	scanf("%d",&b);
	pos(a,b);
	return 0;
}
