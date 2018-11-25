#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void genPassword(int len, char buf[])
{
	for (int i=0; i<len; i++)
		buf[i]=rand() % ('z'-'a'+1)+'a';
	buf[len] = 0;
}

int main()
{
	time_t now; /* это тут не нужно */
	srand(time(0));
	char buf[256];
	int len=0;
	printf("Enter password lenght: ");
	scanf("%d", &len);
	for (int i = 0; i < 10; i++)
	{
	genPassword(len, buf);
	puts(buf);
	}


	return 0;
}
