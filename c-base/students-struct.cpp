#include <stdio.h>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
};

int main(){
	int n;
	scanf("%d",&n);
	struct student students[n];
	
	for(int i = 0 ; i < n; i++){
		scanf("%d%s %c%d",&students[i].num,students[i].name,&students[i].sex,&students[i].age);
	}
	for(int i = 0 ; i < n ;i++){
		printf("%d %s %c %d\n",students[i].num,students[i].name,students[i].sex,students[i].age);
	}
	return 0;
}
