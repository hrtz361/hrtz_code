#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main(){
	int C_socket = socket(AF_INET,SOCK_STREAM,0);
	
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002);
	server_address.sin_addr.s_addr = INADDR_ANY;
	
	int connection_status = connect(C_socket,(struct sockaddr *) &server_address,sizeof(server_address)); 
	// checking connection ...
	if (connection_status == -1){
	printf("Some error when connection");
	}	
	// for response
	char response [1024];
	recv(C_socket,&response,sizeof(response),0);
	printf("Messages from server is:%s\n",response);
	close(C_socket);
	return 0;
}
