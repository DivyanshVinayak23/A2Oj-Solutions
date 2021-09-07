#include <stdio.h>
#include <stdlib.h>
 
void force(int n);
 
int main() {
    int a;
    scanf("%d",&a);
    force(a);
    return 0;
}
 
void force(int n) {
    int sum = 0,num,x = 0,y = 0,z = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&num);
            if( j == 0 )
                x = x + num;
            if( j == 1 )
                y = y + num;
            if( j == 2 )
                z = z + num;
        }
 
    }
    if (x == 0 && y == 0 && z == 0) 
        printf("YES");
    else 
        printf("NO");    
 
}
