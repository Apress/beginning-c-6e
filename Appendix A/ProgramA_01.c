// Program A.1 Checking endianness
#include <stdio.h>

int main(void)
{
	int n = 0x40201;  // 0x40201 = 262657
	char* p = (char*)&n; 
	int e = 0x1;
	char *q = (char*)&e;

     //4 bytes, it's an integer:
	for (int i = 0; i < 4; i++) 
	{
		printf("memory address: %p: value: %d\n", p, *p++);
	}

	if(q[0] == 1)  // checking endianness
	{
		printf("\nIt's Little-Endian.\n");
	} 
	else 
	{
		printf("\nIt's Big-Endian.\n");
	}
	return 0;
}

