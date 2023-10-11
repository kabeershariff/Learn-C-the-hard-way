#include <stdio.h>

/* This is a multiline comment */
/* argc and argv are how command lines args are passed to main() in both C/C++*/

int main(int argc, char *argv[])
{
	int distance = 100;
	int age = 20;

	// this is a single line comment
	printf("Hello world! I am learning C\n");
	printf("You are %d miles away. \n", distance);
	printf("You are %d years old and %d miles away. \n", age, distance);
	
	return 0;
}
