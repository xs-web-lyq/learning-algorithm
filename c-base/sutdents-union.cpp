#include <stdio.h>

struct student {
    int num;
    char name[20];
//    char sex;
//    char job;
//    union {
//    	int class1;
//    	char position[10];
//    	
//	}category;
	int math;
	int chinace;
	int english;
};
void input(struct student *students,int n){
	for(int i = 0 ; i < n; i++){
		scanf("%d%s %d%d%d",&students[i].num,students[i].name,&students[i].math,&students[i].chinace,&students[i].english);
//		if(students[i].job=='s'){
//			scanf("%d",&students[i].category.class1);
//		}else if(students[i].job=='t'){
//			scanf("%s",students[i].category.position);
//		}
	}
}


void print(struct student *students ,int n){
	for(int i = 0 ; i < n ;i++){
//		if(students[i].job=='s'){
//			printf("%d %s %c %d\n",students[i].num,students[i].name,students[i].sex,students[i].job,students[i].category.class1);
//		}else{
//			printf("%d %s %c %c %s\n",students[i].num,students[i].name,students[i].sex,students[i].job,students[i].category.position);
//		}

printf("%d %s %d %d %d \n",students[i].num,students[i].name,students[i].math,students[i].chinace,students[i].english);
	
	}
}
int main(){
	int n = 5;
//	scanf("%d",&n);
	struct student students[n];
	
	input(students,n);
	print(students,n);

	return 0;
}
