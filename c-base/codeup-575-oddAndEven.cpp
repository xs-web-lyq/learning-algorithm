#include <stdio.h>

int main(){
	 int T; // 测试用例数量
    scanf("%d", &T);

    while (T--) { // 对每个测试用例进行处理
	
	
	
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
