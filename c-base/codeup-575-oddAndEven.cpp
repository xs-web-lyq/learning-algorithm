#include <stdio.h>

int main(){
	 int T; // ������������
    scanf("%d", &T);

    while (T--) { // ��ÿ�������������д���
	
	
	
		int n;
		scanf("%d",&n);
	//	int num[n];/
		int odd ,even;
		odd = even = 0;
		for(int i = 0; i < n; i++){
			int num;
			scanf("%d",&num);
			if(num % 2 == 0){
				odd++;
			}else{
				even++;
			}
		}
		if(odd >= even){
			printf("YES");
		}else{
		printf("NO");
	}}
	return 0;
}
