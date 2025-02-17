#include <stdio.h>

typedef struct student{
	int sign;
	char name[20];
	int math;
	int english;
	int chinese;
}student;
void inputScore(student *students){
	for(int i = 0 ; i < 10; i++){
		scanf("%d%s%d%d%d",&students[i].sign,students[i].name,&students[i].math,&students[i].english,&students[i].chinese);
	}
	
}


void printEqualScore(student *students){
	double mathEqual,englishEqual,chineseEqual;
	int sumMath = 0 ,sumEnglish = 0 , sumChinese = 0;
	int flag,max=0;
	for(int i = 0 ; i < 10; i++){
		sumMath += students[i].math ;
		sumEnglish += students[i].english ;
		sumChinese += students[i].chinese;
		int temp = students[i].math + students[i].english + students[i].chinese;
		if(max < temp){
			flag = i;
			max = temp;
		}
	}
	mathEqual = sumMath / 10.0;
	englishEqual = sumEnglish /10.0;
	chineseEqual = sumChinese /10.0;
	printf("%.2f %.2f %.2f\n",mathEqual,englishEqual,chineseEqual);
	printf("%d %s %d %d %d",students[flag].sign,students[flag].name,students[flag].math,students[flag].english,students[flag].chinese);
}

int main(){
	student students[10];
	// 输入是个人的成绩 
	inputScore(students);
	// 输出每个科目平均成绩和平均分最高学生信息 
	printEqualScore(students);

	
	
	
	return 0;
}
