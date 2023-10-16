#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < 9)
	{
		printf("%d\n", i);
		i++;
	}
	while (i > -1)
	{
		printf("%d\n", i);
		i--;
	}
	
	return 0;
}

