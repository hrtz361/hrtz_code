#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

int main(int argc,char *argv[]){
int id = fork(); 
int so;
if(id!=0){
}
else{
	so=getpid(); 
}

printf("*");
while(1){} 

return 0 ;
}
