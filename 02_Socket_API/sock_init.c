#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>


/****

 * The socket APIs provide many functions for use in network programming.
 * Here are the common socket functions:
 *
 * - socket()      : Creates and initializes a new socket.
 * - bind()        : Associates a socket with a particular local IP address and port number.
 * - listen()      : Used on the server to cause a TCP socket to listen for new connections.
 * - connect()     : Used on the client to set the remote address and port.
 *                   For TCP, also establishes a connection.
 * - accept()      : Used on the server to create a new socket for an incoming TCP connection.
 * - send(), recv(): Send and receive data with a socket.
 * - sendto(), recvfrom():
 *                 : Send and receive data from sockets without a bound remote address.
 * - close()       : (Berkeley sockets)
 * - closesocket() : (Winsock sockets)
 *                 : Used to close a socket. For TCP, this also terminates the connection.
 * - shutdown()    : Closes one side of a TCP connection.
 *                   Useful to ensure orderly connection teardown.
 * - select()      : Waits for an event on one or more sockets.
 * - getnameinfo(), getaddrinfo():
 *                 : Provide protocol-independent way of working with hostnames/addresses.
 * - setsockopt()  : Changes some socket options.
 * - fcntl()       : (Berkeley sockets)
 * - ioctlsocket() : (Winsock sockets)
 *                 : Get and set some socket options.
 *
 * Note:
 * You may see some Berkeley socket networking programs using read() and write().
 * These functions don't port to Winsock, so prefer send() and recv() for portability.
 * Other Berkeley-only functions (like poll() and dup()) are avoided for portability.
 *
 ****/

int main() {

    return 0;


}



