#include <stdio.h>
typedef struct str_header
{
    // UART HCI header
    unsigned int seq:3;
    unsigned int ack:3;
    unsigned int dip:1;
    unsigned int rp:1;
    unsigned int type:4;
    unsigned int len:12;
    unsigned int hcs:8;
} str_header_t;

typedef union hciheader
{
	str_header_t info;
	unsigned int value;
} hciheader_t;

int main()
{
	hciheader_t myheader;
	myheader.info.seq = 7;
	myheader.info.ack = 0;
	myheader.info.dip = 0;
	myheader.info.rp = 1;
	myheader.info.type = 2;
	myheader.info.len = 8;
	myheader.info.hcs = 4;
	
	printf("Value a: %x\n",myheader.value);
	return 0;
}