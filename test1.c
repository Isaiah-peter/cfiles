#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
	int h, m, s;
	int d = 1;
	printf("Set time\n");
	scanf("%d%d%d", &h, &m, &s);
	if(h > 12 || m > 60 || s > 59)
	{
		printf("Error !");
		exit(0);
	}

	while(1)
	{
		s++;
		if(s > 59)
		{
			m++;
			s = 0;
		}
		if(m > 59)
		{
			h++;
			m = 0;
		}

		if(h > 12)
		{
			h = 0;
		}
		printf("\n Clock: ");
		printf("\n %02d:%02d:%02d", h, m ,s);
		sleep(d);

		system("clear");
	}
	
}
