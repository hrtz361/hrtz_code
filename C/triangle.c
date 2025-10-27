#include<stdio.h>
int main(){
printf("Ctrl - C to end the process\n");
label:
printf("Size?:");
int Triangle_size;
scanf("%d",&Triangle_size);
int c=1;
int d=Triangle_size;
int e=d;


for(int loop=1;loop<=Triangle_size;++loop){
    for (int loop2=1;loop2<=c;++loop2){
        for (int loop3=1;loop3<=d;--d){
            printf(" ");
        }
        printf(" *");

    }

++c;
printf("\n");
d=--e;
}
goto label;

}
// W10 editing here
