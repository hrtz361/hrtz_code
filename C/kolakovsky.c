#include<stdio.h>
#include<stdlib.h>

int main(){
int now=0;
int counting=0;
// first 10 numbers 
char *ten_kolakovsky="1221121221";

char string[10];
// defined first 5 numbers 
string[0]='1';
string[1]='2';
string[2]='2';
string[3]='1';
string[4]='1';



for(int loop=1;loop<=10;++loop){
// if to define which number is registerd now 
// looping = string[n] > number 
//	
//
//for(int loop2;loop2<=int(string[counting]);++loop2){
//		if (string[loop]=='1'){
//		printf("1");
//		}
//	
//
// 
// CHECKING THE NUMBER BEFORE 
// if(now == '1'){
// int to_print=2;
// }
// else {
// int to_print=1;
// }
// 
// now=to_print; 
//
// for (int loop2=0;loop2<=atoi(&string[counting]);++loop2) {
//	printf("%d",to_print); 
//
// } // THIRD FOR
//
//} // SECOND FOR 
//
//
printf("%d",atoi(&string[counting]));
++counting ;
} // FIRST FOR 


printf("test: %c",string[5]);






}
