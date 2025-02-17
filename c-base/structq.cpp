#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int count;
};
int main(){

	
	int n;
	struct Person leader[3] = {
		{
			"Li",
			0
		},
		{
			"Zhang",
			0 
		},
		{
			"Fun",
			0
		}
	};
	scanf("%d",&n);
	char name1[20];
	while(n--){
		scanf("%s",name1);
		for(int i = 0 ; i < 3; i++){
			if(strcmp(name1,leader[i].name) == 0){
				leader[i].count++;
			}
		}
	}
	for(int i = 0 ; i < 3; i++){
		printf("%s:%d\n",leader[i].name,leader[i].count); 
	}
	
	
	
	return 0;
}
