#ifndef DOG_H
#define DOG_H
/**
 *struct dog - first structure
 *@name: pointer
 *@age: variable
 *@owner: pointer
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
