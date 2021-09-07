#include <string.h>
#include <stdlib.h>
 
int array(int num);
 
 
int main(void) {
    int a = 1;
    
    array(a);
	return 0;
}
 
int array(int num) {
    char s[200];
    int i = 0;
    scanf("%s",&s);
    while( s[i] != '\0'){
        
        if(s[i] == '.'){
            if((s[i-1] != '-') || (s[i-1] == '-' && s[i-2] == '-'))
                printf("0");
        }
            
        if(s[i] == '-'){
            if(s[i + 1] == '.'){
                printf("1");
                i++;
            }
            else if (s[i + 1] == '-'){
                printf("2");
                i++;
            }
        }
 
        i++;
    }
    return 0;
}
