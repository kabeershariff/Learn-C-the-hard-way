#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height,
		int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	//make two people structures
	struct Person *joe = Person_create("Joe Alex", 24, 64, 180);

	struct Person *frank = Person_create("Frank Blank", 32, 70, 178);

	//print them out and memory address
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	//make everyone age by 10 years and print
	joe->age += 10;
	joe->height -= 2;
	joe->weight += 20;
	Person_print(joe);

	frank->age += 10;
	frank->weight += 20;
	Person_print(frank);

	//destroy both so we clean up.
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}










