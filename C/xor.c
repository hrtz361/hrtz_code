#include<stdio.h>
int main(){
int a=29;
int b=3;
a^=b;
b^=a;
a^=b;
printf("%d",a);
printf(" %d",b);
return 27;
// 57 is max to return on linux 
}
