#include <stdio.h>

int main(){
    int sum = 0,count = 1;
    for(;sum < 1000; count++){
//    	printf("%d",count);
        sum += count;
    }
    printf("%d",count-1);
    return 0;
}
