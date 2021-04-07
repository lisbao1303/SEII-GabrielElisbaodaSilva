import socket
import sys
import select

if len(sys.argv) != 3:
	print ("missing arguments -> correct usage: script, IP address, port number")
	exit()

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

IP_address = str(sys.argv[1])
Port = int(sys.argv[2])
server.connect((IP_address, Port))

while True:
	sockets_list = [sys.stdin, server]
	read_sockets,write_socket, error_socket = select.select(sockets_list,[],[])

	for socks in read_sockets:
		if socks == server:
			message = socks.recv(2048)
			print (message)
		else:
			message = sys.stdin.readline()
			server.send(message)
			sys.stdout.write("<You>")
			sys.stdout.write(message)
			sys.stdout.flush()
server.close()