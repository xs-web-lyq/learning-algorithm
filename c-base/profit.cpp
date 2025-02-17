#include <stdio.h>

int main(){
	double profit,reward;
	scanf("%lf",&profit);
	
	if(profit < 100000){
		reward = profit/10;
	}else if(100000<profit<=200000){
		reward = 100000.0/10 + (profit - 100000)*0.075;
	}else if(200000<profit<=400000){
		reward = 100000.0*0.1 + 100000*0.075 + (profit - 200000)*0.05;
	}else if(400000<profit<=600000){
		reward = 100000.0*0.1 + 100000*0.075 + 200000*0.05 + (profit - 400000)*0.03;
	}else if(600000<profit<=1000000){
		reward = 100000.0*0.1 + 100000*0.075 + 200000*0.05 + 200000*0.03 + (profit - 600000)*0.015;
	}else{
		reward = 100000.0*0.1 + 100000*0.075 + 200000*0.05 + 200000*0.03 + 400000*0.015 + (profit - 1000000)*0.01;
	}
	printf("%.2lf",reward);
	return 0;
}

