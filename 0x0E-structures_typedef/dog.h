#ifndef DOG_H
#define DOG_H

/**
 * dog_t - A typedef for a struct dog
 *
 */
typedef struct dog dog_t;

/**
 * struct dog - A variable that desrcibes a dog
 * @name: First member.
 * @age: Second member
 * @owner: Third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
