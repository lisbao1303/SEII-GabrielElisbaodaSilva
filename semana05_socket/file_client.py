import socket                   
import sys

if len(sys.argv) != 4:
	print ("missing arguments -> correct usage: file_client IP port file_name")
	exit()

sock = socket.socket()                 
host = str(sys.argv[1])           
port = int(sys.argv[2])                  
sock.connect((host, port))

f = open(str(sys.argv[3]),'wb')
l = sock.recv(1024)
try:    
    while (l):
        print ("Receiving File...")
        f.write(l)
        l = sock.recv(1024)        
finally:    
    f.close()
    print('Successfully')
    sock.close()