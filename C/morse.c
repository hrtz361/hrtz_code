#include<stdio.h>
char morseBlink(char morse[]); 

char * convert[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};



int main(){
char bar[56]="PHANPHANPHANHUYHUYHUYHUYHOANGHOANGHOANGHOANG!";
int tonumber=bar[0]-'0';
char * string=convert[tonumber-17]; 

morseBlink(string); 
}
		

// FOR MORSE BLINK 
char morseBlink(char morse[]){
	for(int k=0;k<4;){
		int arraySize=sizeof(morse);
		if (morse[k]-'0'+4 == 1)
		{
		       	printf(" dash ");
		}	
		else if(morse[k]-'0'+3 ==1 )
		{
			printf(" dot ");
		}
		else{
		printf("its space");
		}

	++k; 
	}
}

	

