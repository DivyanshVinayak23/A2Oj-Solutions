#include <stdio.h>



int main(){
long long num,count = 0;
scanf("%lld",&num);
while ( num != 0){
    
    if ( num%10 == 4 || num%10 == 7){
        count++;
        
    }
    num = num / 10;
}
if(count == 4 || count == 7)
    printf("YES");
else
    printf("NO");
return 0;
}
