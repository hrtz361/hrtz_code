#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
// what is handler is it get input by stdin ? 
void func(int err){
	printf("exit signal id:%d",err);
	printf("the number?:%d",SIGINT); 
	exit(1); 
}
int main(){
	signal(SIGINT,func); 
	while(1){
		printf("\n  * "); 
	} 
} 
