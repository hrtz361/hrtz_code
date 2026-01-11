#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
// what is handler is it get input by stdin ? 
void func(int err){
	printf("get signal from insdec id:%d\n",err);
	printf("the number?:%d\n",SIGKILL); 
	printf("the number?:%d\n",SIGINT); 
	printf("the number?:%d\n",SIGSEGV); 
	printf("the number?:%d\n",SIGCHLD);
	printf("the number?:%d\n",SIGPIPE);

	exit(1); 
}

//
int main(){
	int pid;
	printf("enter pid:");
	scanf("%d",&pid);

	//signal generate 
	signal(SIGINT,func);
	kill(pid,SIGKILL);
	if(1){
	raise(SIGINT); 
	
		
	}
	
}

//SIGENERATION 
//SIGTYPES 
//SIGPROCESSING IN OS 
