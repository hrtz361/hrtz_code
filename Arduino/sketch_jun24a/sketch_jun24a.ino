void setup(){
pinMode(11,OUTPUT);
}
char morseBlink(char morse[]); 

char * convert[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};


int i=0;
void loop(){


char bar[14]="HHHH";
int tonumber=bar[i]-'0';
morseBlink(convert[tonumber-17]); 
digitalWrite(13,0);
delay(5000);
if (i<14){
++i;
}
}


// FOR MORSE BLINK 
char morseBlink(char morse[]){
  	for(int k=0;k<4;){
		if (morse[k]-'0'+4 == 1)
		{
		       	digitalWrite(13,1);
            delay(600);
            digitalWrite(13,0);
            delay(200);
		}	
		else if(morse[k]-'0'+3 ==1 )
		{
            digitalWrite(13,1);
            delay(200);
            digitalWrite(13,0);
            delay(200);
    }
		else{
            digitalWrite(13,0);
            delay(1200);
		}

	++k; 
	}
}

	

