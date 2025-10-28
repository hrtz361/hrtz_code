#include<stdio.h>
int main(){
int value=0; 
for (int loop=1;loop<=3;++loop){
if(value==0){
	printf("0");
}
else if(value==1){

	printf("1");
}
else{
	
	printf("2");
}
value=loop;
}
}

