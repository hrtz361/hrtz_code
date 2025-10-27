#include<stdio.h>
#include<stdlib.h>
//pseudo code for kolakovsky string print 
//
//
int main(){
char interger_string[10]; 
int now=1; 

for(int loop=1;loop<=10;){

	if(now==1){
		if(atoi(&interger_string[loop]==2)){
			printf("22");
			interger_string[now]=2;
			interger_string[now+1]=2;
			++now;
			++now;

		}
		
		else{
			print("2"); 
			interger_string[now]=2
			++now;
		}

	}

	else{
		if(atoi(&interger_string[loop]==2)){
		
			printf("11"); 
			interger_string[now]=1;
			interger_string[now]=1;
			++now;
			++now;
		}
		else{
			printf("1"); 
			interger_string[now]=1; 
			++now; 
		}
	}

++loop; 
}
}
// nexus5 editing here 
// A13 also here 

