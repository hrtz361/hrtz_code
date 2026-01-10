//gentoo here :D 
//done with git ? divergent ? 
//

#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
// what is handler is it get input by stdin ? 
void func(int err){
	
	printf("get signal from insdec id:%d ",err);
	printf("\nthe number?:%d\n",SIGINT); 
	printf("the number?:%d\n",SIGQUIT); 
	printf("the number?:%d\n",SIGKILL); 
	printf("the number?:%d\n",SIGSEGV); 
	printf("the number?:%d\n",SIGCHLD);
	printf("the number?:%d\n",SIGPIPE);
	printf("the number?:%d\n",SIGTERM);
	printf("the number?:%d\n",SIGSTOP);
	exit(1); 
}

//
int main(){
	signal(SIGQUIT,func); 
	while(1){
		printf("\n  * "); 
	} 
}
//SIGENERATION 
//SIGTYPES 
//SIGPROCESSING IN OS 
