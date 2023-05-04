#include <stdio.h>
#include "main.h"

int main(void)
{
	const char *binary_str = "1100010";
	unsigned int decimal_val = binary_to_uint(binary_str);
	
	printf("Binary string %s is equal to %u in decimal\n", binary_str, decimal_val);
	return 0;
}
