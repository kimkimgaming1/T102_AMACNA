#include <stdio.h>

int main(){

system("COLOR 0A");
int n;

printf("Input any integer:");
scanf("%d", &n);
while(n > 1){
    if(n % 2 == 0){
    n = n / 2;
    printf("current given value is %d\n", n);
}else{
n = n* 3 + 1;
printf("current given value is %d\n", n);
}
}
return 0;
}
