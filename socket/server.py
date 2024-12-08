import socket
import threading
server=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
server.bind(("127.0.0.1",4444)) 
server.listen(5)
print("[*] listening on %s:%d"%("127.0.0.1",4444))
def client_handler(socket_handle):
    receive=socket_handle.recv(4096)
    print("[*] received %s"%receive)
    socket_handle.send(b"ACK!")
    socket_handle.close()

while True:
    client,addr = server.accept()
    print("[*] accept connection from %s:%d"%(addr[0],addr[1]))
    client=threading.Thread(target=client_handler,args=(client,))
    client.start()
