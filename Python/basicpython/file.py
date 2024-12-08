import os
f=open("test.txt","w")
print(f.name)
print(f.mode)

f.write("newPYTHON")
position=f.tell()
print(position)
position=f.seek(0)
f.close
