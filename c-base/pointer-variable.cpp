//#include <stdio.h>
//
//int main(){
//    int *a ,*b;
//    scanf("%d%d",a,b);
//    int temp;
//    if(*a < *b){
//        temp = *a;
//        *a = *b;
//        *b = temp;
//    }
//    printf("%d %d",*a,*b);
//    
//    return 0;
//}

#include <stdio.h>

int main(){
    char *str = "I love China";
    int n ;
    scanf("%d",&n);
    printf("%s",(str + n));
    return 0;
}
