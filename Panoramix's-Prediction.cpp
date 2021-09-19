#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
int n,m,num;
scanf("%d\n%d",&n,&m);
for(int k = n + 1;k < 52;k++){
    int flag = 1;
for(int i = 2; i <= sqrt(k);i++){
    if(k%i == 0){
        flag = 0;
        
    }
}
 
if(flag == 1){
    num = k;
    break;
}
 
}
if(num == m)
    printf("YES");
else
    printf("NO");
return 0;
}
