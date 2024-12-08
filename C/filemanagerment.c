#include<stdio.h>
#include<stdlib.h>
char global=10;
char global2='A';  
int main(){
printf("%d ",global2);
printf("%p\n",&global); 
printf("%d\n",global);
FILE * Fp = fopen("filetext.txt","w"); 
fprintf(Fp,"thequickbrownfoxjumpsoverthelazydog\n1\n2\n3\n4\n5\n6"); 

fclose(Fp);     
char line1 [255]; 
char rootline [255];
// root permissionn to open /filetext.txt 

FILE * rootFp = fopen("/filetext.txt","w"); printf("%p\n",rootFp); 
fprintf(rootFp,"root");
fclose(rootFp);
fopen("/filetext.txt","r"); 
fgets(rootline,255,rootFp); 
fclose(rootFp); 


fopen("filetext.txt","r"); 
fgets(line1,255,Fp);     
fgets(line1,255,Fp);
fgets(line1,255,Fp);
fgets(line1,255,Fp);
fgets(line1,255,Fp);
fgets(line1,255,Fp);
fgets(line1,255,Fp);
printf("%s",line1); 
fclose(Fp);
return 0; 
} 
