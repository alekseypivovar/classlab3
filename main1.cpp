#include <stdio.h>

int sum(int x, int y)
{
	return x + y;
}
char* getStr(int x, int y, char buf[])
{
	sprintf(buf, "%d+%d=%d", x, y, sum(x, y));
	return buf;
}


int main()
{
	char buf[256];
	int a = 0, b = 0;
	printf("Enter (x,y): ");
	scanf("(%d,%d)", &a, &b);
	getStr(a, b, buf);
	puts(buf);
	// printf("%d+%d=%d\n", a, b, sum(a, b));

	return 0;
}