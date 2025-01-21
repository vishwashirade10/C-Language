#include<stdio.h>
int main(){
int n=5;
int total=1;
for(  int i=n; i>=1; i--){
 total= total*i;
}
printf("%d ",total);
    return 0;
}
