#include <stdio.h>
int main(){
	int a, b, c, flag;
	scanf("%d%d%d",&a,&b,&c);
	
	if(a > b){
		flag = a;
		a = b;
		b = flag;
	}
	if(a > c){
		flag = c;
		c = a;
		a = flag;
	}
	if(b > c){
		flag = c;
		c = b;
		b = flag;
	}
//	printf("%.2lf %.2lf %.2lf",a,b,c);
  	printf("%d",c);
	return 0;
}
