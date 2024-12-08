#include<stdio.h>
int main(){
int mang[5]; 
printf(" %p",mang);
printf(" %p",&mang[1]);
printf(" %p",&mang[2]); 
printf(" %p",(&mang[1]+1));
return 0;
}
