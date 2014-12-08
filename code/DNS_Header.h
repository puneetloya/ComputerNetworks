/*
 * DNS_Header.h
 *
 *  Created on: 26-Nov-2014
 *      Author: jus-mine
 */

/*
 * Credits :http://www.binarytides.com/dns-query-code-in-c-with-linux-sockets/
 *
 * */

#ifndef DNS_HEADER_H_
#define DNS_HEADER_H_


/*DNS header*/

typedef struct
{
	unsigned short id;       // identification number
	unsigned char rd :1;     // recursion desired
	unsigned char tc :1;     // truncated message
	unsigned char aa :1;     // authoritive answer
	unsigned char opcode :4; // purpose of message
	unsigned char qr :1;     // query/response flag
	unsigned char rcode :4;  // response code
	unsigned char cd :1;     // checking disabled
	unsigned char ad :1;     // authenticated data
	unsigned char z :1;      // its z! reserved
	unsigned char ra :1;     // recursion available
	unsigned short q_count;  // number of question entries
	unsigned short ans_count; // number of answer entries
	unsigned short auth_count; // number of authority entries
	unsigned short add_count; // number of resource entries
} DNS_HEADER;


typedef struct
{
	unsigned short qtype;
	unsigned short qclass;
} QUESTION;




#endif /* DNS_HEADER_H_ */
