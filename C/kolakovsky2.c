#include<stdio.h>
#include<stdlib.h>
//pseudo code for kolakovsky string print
//
//
int main(){
int what=1;
char interger_string[100];
int now=1;

for(int loop=1;loop<=20;){

	if(what==1){
		if(atoi(&interger_string[loop])==2){
			printf("22");
			interger_string[now]=2;
			interger_string[now+1]=2;

            now+=2;


			what=atoi(&interger_string[now]);


		}

		else{
			printf("2");
			interger_string[now]=2;
			++now;
			what=atoi(&interger_string[now]);
		}

	}

	else{
		if(atoi(&interger_string[loop])==2){

			printf("11");
			interger_string[now]=1;
			interger_string[now]=1;
			++now;
			++now;
			what=atoi(&interger_string[now]);
		}
		else{
			printf("1");
			interger_string[now]=1;
			++now;
			what=atoi(&interger_string[now]);
		}
	}

++loop;
}
}
// nexus5 editing here
// A13 also here
// hey it's W10
//
