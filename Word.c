#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
void lowercase(char *);
 
void uppercase(char *s);
 
int main(){
    int upper_count = 0,lower_count = 0;
    char str[150];
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        if(str[i] >= 97 && str[i] <= 122)
            lower_count++;
        if(str[i] >= 65 && str[i] <= 90)
            upper_count++;
    }
    if(lower_count == upper_count || lower_count > upper_count){
        lowercase(str);
    }
    if(upper_count > lower_count){
        uppercase(str);
    }
    return 0;
}
 
void lowercase(char *s){
    for(int i=0;i<strlen(s);i++){
        if(s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] +32;
    }
    printf("%s",s);
}
 
void uppercase(char *s){
    for(int i=0;i<strlen(s);i++){
        if(s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
    }
    printf("%s",s);
}
