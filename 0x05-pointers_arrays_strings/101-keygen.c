#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/***/
long checksum(char *str) {
    long sum = 0;
    while (*str != '\0') {
        sum += (long)*str;
        str++;
    }
    return sum;
}
/***/
int main()
{
	int n;
	char string[30];
	
	srand(time(NULL));
	n = rand();
	return (n);
}
