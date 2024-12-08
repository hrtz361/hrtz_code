#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>
#include"thuvien.h"
int global ; 

int main(){
static int bientinh;
int id=fork(); 
if(id==0){
	printf("child");
}
	else if(id!=0){
	printf("parent");
	}
else 
	{
printf("sthing wrong");
}
printf("%d",sum(1,2));
} 


