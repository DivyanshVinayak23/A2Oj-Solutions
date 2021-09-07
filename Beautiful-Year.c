#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int year(int num);
 
 
int main(void) {
    int a;
    scanf("%d",&a);
    year(a);
	return 0;
}
 
int year(int num) {
    int i,n1,n2,n3,n4,temp;
    for(i = num + 1;i<10000;i++){
        temp = i;
        n1 = temp%10;
        temp = temp/10;
        n2 = temp%10;
        temp = temp/10;
        n3 = temp%10;
        temp = temp/10;
        n4 = temp;
        if((n1 != n2 && n1 != n3 && n1 != n4) && (n2 != n3 && n2 != n4) && (n3 != n4)){
            printf("%d\n",i);
            break;
        }
 
    }
    return 0;
}
