#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main(){
	char server_mess [1024] = "Server Here !"; 
	int server_socket ; 
	server_socket = socket(AF_INET,SOCK_STREAM,0);
	
	struct sockaddr_in address;
	address.sin_family = AF_INET;
	address.sin_port = htons(9002);
	address.sin_addr.s_addr = INADDR_ANY ; 

	bind(server_socket,(struct sockaddr *) &address,sizeof(address));

	listen(server_socket , 5);

	int client_socket;
	client_socket = accept(server_socket , NULL , NULL);

	send(client_socket,server_mess,sizeof(server_mess),0);
	close(server_socket);
}
