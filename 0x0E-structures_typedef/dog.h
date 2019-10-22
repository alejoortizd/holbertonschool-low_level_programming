#ifndef _DOG_
#define _DOG_
/**
 * struct dog - Entry Point
 * @name: parametre to check
 * @age: parametre to check
 * @owner: parametre to check
 * Description: function with long description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar (char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
