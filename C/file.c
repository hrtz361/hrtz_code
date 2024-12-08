#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
int id = fork(); 
if (id==0){
printf("child");
}
else{
printf("%d",id);
char string[4096];
FILE* FP = fopen("/root.txt","r");

fgets(string,4096,FP); 

printf("%s",string);

fclose(FP); 
}
}
