#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - info about my dog
* @name: Name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
