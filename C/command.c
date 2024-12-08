#include<stdio.h>
#include<unistd.h>
int main(void){
	char *name[2];
	name[0]="/bin/sh";
	name[1]=NULL;
	printf("%p",name);
	printf("%p",&name[0]); 
	execve(name[0],name,NULL);

}
