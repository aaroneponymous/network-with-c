#include <sys/socket.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

	struct ifaddrs *addresses;
	
	/**
	 * getifaddrs(&addresses) | ret success 0; failure -1
	 * Allocates memory and fills in a linked list of addresses
	 */


	if (getifaddrs(&addresses) == -1) {
		printf("getifaddrs call failed\n");
		return -1;
	}

	struct ifaddrs *address = addresses;
	while (address) {
		int family = address->ifa_addr->sa_family;
		if (family == AF_INET || family == AF_INET6) {

			// ifa_name : address' adapter name
			printf("Adapter Name: %s\n", address->ifa_name);
			printf("Family Type: %s\n", family == AF_INET ? "IPv4" : "IPv6");

			// Buffer to store the textual address
			char ap[100];

			const int family_size = family == AF_INET ? 
				sizeof(struct sockaddr_in) : sizeof(struct sockaddr_in6);

			getnameinfo(address->ifa_addr, family_size, ap, sizeof(ap), 0, 0, NI_NUMERICHOST);
			printf("Textual Address: %s\n", ap);
		}

		address = address->ifa_next;
	}

	freeifaddrs(addresses);
	return 0;
}
