#include<stdio.h>
int main() { 
int a = 10;
int b = 11; 
a > b ?  printf("%d",a): printf("%d",b) ; 
int muldemention[20][30]; 
int (*mulpoiter)[30]; 
mulpoiter = muldemention ; 
void * poiter = "chuoi";
printf("%s",poiter );
}

