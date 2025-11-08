#include<stdio.h>
#include<memory.h>	
#include<stdlib.h>	
#include<strings.h>
int main(){
int charracter [10]; 
int *p=calloc(10,sizeof(int)); 
int *q=malloc(40); 
char cha[20];
char Bytes[20];
char Chars2[20];  
char *TENF=calloc(2048,4);   

// file handling test 
FILE *fp = fopen("malloc.c","r");
FILE *fp2= fopen("malloc.exe","r"); 
fscanf(fp,"%s",TENF);
fprintf(fp,"%s",TENF); 
printf("%s",TENF);
char name[10]="malloc0.c" ;
int loop1=0;	
while(loop1<10){ 
	FILE *fp3 =fopen(name,"w"); 
	fprintf(fp3,"%s",TENF); 
	fclose(fp3); 
	++name[6]; 
	++loop1;
}
fscanf(fp,"%s",TENF); 

fscanf(fp,"%s",Chars2); 
printf("%s",Chars2);

fgets(cha,10*sizeof(char),fp); 
fread(Bytes,1,20,fp2); 

printf("%c ",Bytes[0]); 
printf("%c ",Bytes[1]);
 
int loop=0;	
while(loop<10){
	printf("%c",cha[loop]);
	++loop;
}
fclose(fp);
fclose(fp2); 


// malloc testing
q[1]=20;
p[0]=10;
p[7]=11;
p[8]=15; 
p[9]=20;
printf(" %d ",q[5]);
printf("%d ",p[6]);
printf("%d",p[9]);
free(p); free(q); 


	return 0;
}
