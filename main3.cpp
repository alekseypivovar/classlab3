#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void genPassword(int len, char buf[])
{
	for (int i = 0; i<len; i++)
		buf[i] = rand() % ('z' - 'a' + 1) + 'a';
	buf[len] = 0;
}

int main()
{

	srand(time(0));
	char buf[256];
	int len = 0;
	printf("Enter password lenght: ");
	scanf("%d", &len);
	
		genPassword(len, buf);
		puts(buf);
	
		// счетчик числа упоминаний каждой буквы в пароле:

	int count[26] = { 0 };
	for (int i = 0; i < len; i++)
		count[buf[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		printf("%c meets - %d\n", i+'a', count[i]);

	return 0;
}