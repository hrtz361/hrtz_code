import socket
client=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
client.sendto(b"udp message",("127.0.0.1",8888)) 
data , addr = client.recvfrom(4096)
print(data)
