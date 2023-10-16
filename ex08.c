#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc == 1)
	{
		printf("No Arguments were given.\n");
	}
	else if (argc > 1 && argc < 5)
	{
		printf("Here are your arguments:\n");
		
		for (i = 1; i < argc; i++)
		{
			printf("--> %s\n", argv[i]);
		}
	}
	else
	{
		printf("Too many arguments!\n");
	}

	return 0;
}

