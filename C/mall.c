#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main(){
int * p;
p=(int*)malloc(5+ sizeof(int));
*p=5;
*(p+1)=10; 
for (int i =0; i < 10 ; ){
	printf(" %p:%d ",(p+i),*(p+i));
	i++; 
	}
	
return 0 ; 
}
