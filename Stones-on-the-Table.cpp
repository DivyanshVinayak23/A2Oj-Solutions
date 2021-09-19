#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
ll n,count = 0;
char x;
scanf("%lld",&n);
vector<char> ar;
for(int i = 0; i < n;i++){
        cin>>x;
        ar.push_back(x);
}
for(int i = 0; i < n;i++){
    if(ar[i] == ar[i + 1])
        count++;
}
printf("%lld",count);
return 0;
}
