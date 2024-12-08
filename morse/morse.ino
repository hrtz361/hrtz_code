void setup(){
pinMode(13,OUTPUT);
}
char morseBlink(char morse[]); 

char * convert[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};



void loop(){


char bar[14]="PHANHUYHOANG!";
int tonumber=bar[0]-'0';
morseBlink(convert[tonumber-17]); 

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
            delay(300);
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

	

