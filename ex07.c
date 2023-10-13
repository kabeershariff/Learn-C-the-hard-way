#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.1234;
	char initial = 'A';
	char first_name[] = "Kabeer";
	char last_name[] = "Shariff";

	printf("You are %d miles away from home.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("You have the initial %c.\n", initial);
	printf("My first name is %s.\n", first_name);
	printf("My last name is %s.\n", last_name);
	printf("So my full name is %s %s.\n", first_name, last_name);

	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the rate of %f.\n", bugs, bug_rate);

	unsigned long universe_defects = 1L * 1024L *1024L *1024L;
	printf("The universe has %ld defects!!\n", universe_defects);

	double expected_bugs = bugs * bug_rate;
	printf("The expected bugs are %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_defects;
	printf("This is only a %e portion of universe.\n", part_of_universe);

	//This has no sense, just a demo of something weird
	char nul_byte ='\0';
	int care_percentage = bugs * nul_byte;

	printf("Which means i should care %d%%.\n", care_percentage);
	return 0;
}
