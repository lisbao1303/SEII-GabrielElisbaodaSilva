import socket
import sys

if len(sys.argv) != 3:
    print("missing arguments -> correct usage: file_server Porta nome_do_arquivo_original")
    exit()

port = int(sys.argv[1])
sock = socket.socket()
host = socket.gethostname()
print(host)
sock.bind((host, port))
sock.listen(1)

while True:
    
    print('ServerListening...')
    connection, c_address = sock.accept()
    print('Got connection from', c_address)

    try:       
        filename = str(sys.argv[2])
        f = open(filename, "rb")
        l = f.read(44032)
        while (l):            
            connection.send(l)
            print('Sending ')
            l = f.read(44032)
            f.close()
            print('Done sending')
            break
    finally:
        connection.close()
    break
