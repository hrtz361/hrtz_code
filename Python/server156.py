import socket
import threading
server=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
server.bind(("127.0.0.1",9999)) 
server.listen(5)
print("[*] listening on %s:%d "%("127.0.0.1",9999)) 
def handle_client(client_socket):
    receive=client_socket.recv(4096)
    print("Received %s " %receive) 
    client_socket.send("ACK!".encode(encoding='utf-8'))
    client_socket.close() 

while True: 
    client,addr=server.accept()
    print("[*] Accept connection from %s%d"%(addr[0],addr[1])) 
    client_handler=threading.Thread(target=handle_client,args=(client,)) 
    client_handler.start()
