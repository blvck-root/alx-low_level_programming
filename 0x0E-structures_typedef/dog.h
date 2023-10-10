#ifndef HEADERFILE_H
#define HEADERFILE_H

/**
 * struct dog - definition of dog struct
 * @name: dog's name
 * @age: number of years the dog has lived
 * @owner: dog owner's name
 *
 * Description: This is a  struct definition for a dog object with 3 members.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
