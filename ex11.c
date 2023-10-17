#include <stdio.h>

int main(int argc, char *argv[])
{
	/* Declaring an integer array with a single value, this will
	 * assign the value to all indexes
	 * However declaring an character array is different, the single
	 * value is assigned to the first index.
	 * Because essentially a character array is a String.*/

	int numbers[4] = {0};
	char name[4] = {'a'};

	//first, printing them raw
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);

	printf("name: %s\n", name);

	// setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	// set up the name
	name[0] = 'R';
	name[1] = 'A';
	name[2] = 'W';
	name[3] = '\0';

	//then print them out initilized
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c %c %c %c \n",
			name[0], name[1], name[2], name[3]);

	//print the name like a string
	printf("name: %s\n", name);
	
	//another way to use names
	char *another = "DED";

	printf("another : %s\n", another);

	printf("another each : %c %c %c %c\n", 
			another[0], another[1], another[2], another[3]);

	return 0;
}

