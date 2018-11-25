// schetcik vremeni do novogo goda

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	time_t now;
	struct tm * nowtm;
	struct tm newyeartm;
	newyeartm.tm_hour = 0;
	newyeartm.tm_min = 0;
	newyeartm.tm_sec = 0;
	newyeartm.tm_mday = 1;
	newyeartm.tm_mon = 0;
	newyeartm.tm_year = 2019 - 1900;
	// 1 of january 2019
	time_t newyear;
	newyear = mktime(&newyeartm);

	/* chasy
	while (1)
	{
	time(&now);
	nowtm = localtime(&now);
	printf("%02d:%02d:%02d\r",
	nowtm->tm_hour,
	nowtm->tm_min,
	nowtm->tm_sec);
	Sleep(500);
	}
	*/
	
	while (1)
	{
		time(&now);
		nowtm = localtime(&now);
		int sec = (int)(newyear - now);
		printf("New year will come in %d days, %d hours, %d minutes, %d secons\r", 
			sec / 86400, 
			sec/3600%24,
			sec /60 % 60,
			sec%60);
		Sleep(500);
	}
	return 0;
}