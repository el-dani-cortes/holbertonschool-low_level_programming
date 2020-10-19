#ifndef __FILE__H_
#define __FILE__H_

/**
 * struct dog - Variables for dog description
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 *
 * Description: Variables to define in detail a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*Function that initialize a variable of type struct dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/*Function  to print struct dog*/
void print_dog(struct dog *d);


#endif /* FILE_H */
