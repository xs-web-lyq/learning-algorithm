#include <stdio.h>
#include <math.h>


int main(){
	double a , b , c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double r1,r2;
	b = -b;
	double d;
	d = b*b - 4*a*c;
	if(d < 0){
		printf("No real roots!");
		return 0;
	}
	r1 = (b + sqrt(b*b - 4*a*c))/2*a;
	r2 = (b - sqrt(b*b - 4*a*c))/2*a;
	printf("r1=%7.2lf\n",r1);
	printf("r2=%7.2lf",r2);
	return 0;
}
