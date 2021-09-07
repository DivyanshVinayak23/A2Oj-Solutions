#include <stdio.h>
#include <stdlib.h>
 
void matrix(int n);
 
int main() {
    int a = 1;
    matrix(a);
    return 0;
}
 
void matrix(int n) {
    int r,c,num,j,k;
    for(r=1;r<=5;r++) {
        for(c=1;c<=5;c++){
            scanf("%d",&num);
            if(num == 1){
                j = 3 - r;
                k = 3 - c;
                if ( j < 0 ) 
                    j = j*(-1);
                if ( k < 0 ) 
                    k = k*(-1);
            }
        }
    }
    printf("%d",j + k);
}
