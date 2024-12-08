import socket
client=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
client.connect(("google.com",4444))
client.send("GET / HTTP/1.1\r\nHost: google.com\r\n")
response=client.recv(4096)
print(response)

