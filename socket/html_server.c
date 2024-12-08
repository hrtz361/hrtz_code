#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main(){
// open html file 
FILE * html_file;
html_file = fopen("index.html","r");
char open_html [1024];
fgets(open_html,1024,html_file); 

char html_header [2048] = "HTTP/1.1 200 = OK \r\n\n";
strcat(html_header,open_html);
printf("%s",html_header);

int server_socket ; 
server_socket = socket(AF_INET , SOCK_STREAM, 0);

struct sockaddr_in server_address;
server_address.sin_family = AF_INET;
server_address.sin_port = htons(8002);
server_address.sin_addr.s_addr ;

bind(server_socket,(struct sockaddr *) &server_address,sizeof(server_address));
// why give file to this in : listen 
listen(server_socket , 5);
while(1){
	int client_socket;
	//why give null to this in : accept 
	client_socket = accept(server_socket,NULL,NULL);
	send(client_socket,html_header,sizeof(html_header),0);
	close(server_socket);



}
return 0;

}
