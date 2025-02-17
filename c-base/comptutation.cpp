#include <stdio.h>
#include <string.h>

int main(){
    
    char a[1000];
    char b[1000];
    char c[1000];
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);
    
    for(int i = 0 ; i < 1000; i++){
        if(a[i] < b[i]){
            strcpy(a,b);
            break;
        }else if(a[i] > b[i]){
        	break;
		}
    }
    for(int i = 0 ; i < 1000; i++){
        if(a[i] < c[i]){
            strcpy(a,c);
            break;
        }else if(a[i] > b[i]){
        	break;
		}
    }
    printf("%s",a);
    
    return 0;
}
