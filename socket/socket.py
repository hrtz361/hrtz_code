import socket

server_socket=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

server_socket.bind(("127.0.0.1",4444))
server_socket.listen(5)

while True:
    client_socket ,address = server_socket.accept()
    
    print(f"connection established from {address}") 
    client_socket.send(bytes("message from server","utf-8"))
    client_socket.close()
server_socket.close()
