#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
 
 
int main(){
    int upper_count = 0,lower_count = 0;
     char str[1000];
    scanf("%s",&str);
    if(str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    printf("%s",str);        
 
    return 0;
}
 
