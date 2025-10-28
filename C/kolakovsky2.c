#include<stdio.h>
#include<stdlib.h>
//pseudo code for kolakovsky string print
//
//
int main(){
int what;
int now;


char interger_string[100];

interger_string[0]='1';
interger_string[1]='2';
interger_string[2]='2';
interger_string[3]='1';
interger_string[4]='1';
for(int loop=1;loop<=20;){

	if(what==1){
		if(atoi(&interger_string[loop])==2){
			printf("22");
			printf("%d ",now);
			interger_string[now]='2';
			++now;
			interger_string[now]='2';
			++now; 


			what=atoi(&interger_string[now]);


		}

		else{
			printf("2");
			printf("%d ",now);
			interger_string[now]=2;
			++now;
			what=atoi(&interger_string[now]);
		}

	}

	else{
		if(atoi(&interger_string[loop])==2){

			printf("11");
			printf("%d ",now);
			interger_string[now]='1';
			
			++now;
			interger_string[now]='1';
			++now;
			what=atoi(&interger_string[now]);
		}
		else{
			printf("1");
			printf("%d ",now);
			interger_string[now]=1;
			++now;
			what=atoi(&interger_string[now]);
		}
	}

++loop;
}
printf("string[2] :%c",interger_string[2]); 
		
for (int loop2=1;loop2<=20;++loop2){
	printf("  %c",interger_string[loop2]); 
}

}
// nexus5 editing here
// A13 also here
// hey it's W10
//
