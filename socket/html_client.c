#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
int main(int argc,char * argv[]){
	char * param;
	param = argv[1];
	printf("%s",param);
	
	int server_socket ;
	server_socket = socket(AF_INET,SOCK_STREAM,0);

	struct sockaddr_in host_address;
	host_address.sin_family = AF_INET;
	host_address.sin_port = htons(80);
	inet_aton(param, &host_address.sin_addr); 
	printf("\n[*} from inet_aton: %d [*]  ",host_address.sin_addr.s_addr);
	connect(server_socket,(struct sockaddr *) &host_address,sizeof(host_address));
	
	char request [] = "GET / HTTP/1.1\r\n\r\n"; 
	char response [8192];

	send(server_socket,request,sizeof(request),0);
	recv(server_socket,response,sizeof(response),0);
	printf("Response: %s",response);
	close(server_socket);
	return 0;
	}
