#include <stdio.h>
#include <ctype.h>

//forward declarations
static int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++) {
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;

	for (i = 0; arg[i] != '\0'; i++) {
		char ch = arg[i];

		if (isalpha(ch) || isblank(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}

//static keyword limits the function to only the current .c file
//this will also enable warning if unused by compiler

int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}
