#include<stdio.h>
int main(){
int checksort=0;
int sum=37; 
int exchange=0; 
char string [] = {"phanhuyhoangdaoxuandungnguyendinhphuc"}; 
cont: 
checksort=0; 
for(int i=0;i<sum-1;){
printf("%d ",checksort);
if (string[i]>string[i+1]){
    exchange=string[i]; 
    string[i]=string[i+1];
    string[i+1]=exchange; 
    exchange=0; 
    checksort++; 
}
else{
}
++i; 
}
if (checksort != 0){
    goto cont; 
}

printf(" %s ",string); 
}


