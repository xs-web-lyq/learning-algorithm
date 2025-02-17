#include <stdio.h>
#include <string.h>

int main(){
    
    char arr[1000];
    scanf("%s",&arr);
    int len = strlen(arr);
//    printf("%d",len);
    char str[len];
    int l = 0;
    for(int i = 0 ; i < len; i++){
        if(arr[i] == 'a'){
//            strcat(str,"a");
			str[l] = arr[i];
            l++;
        }else if(arr[i] == 'e'){
//            strcat(str,"e");
str[l] = arr[i];
            l++;
        }else if(arr[i] == 'i'){
//            strcat(str,"i");
str[l] = arr[i];
            l++;
        }else if(arr[i] == 'o'){
//            strcat(str,"o");
str[l] = arr[i];
            l++;
        }else if(arr[i] == 'u'){
//            strcat(str,"u");
str[l] = arr[i];
            l++;
        }
    }
    str[l] = '\0';
//    printf("%d\n",l);
//    for(int i = 0 ; i < l; i++){
//    	printf("%c",str[i]);
//	}
    printf("%s",str);
    return 0;
}
