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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/*Function that creates a new dog*/
dog_t *new_dog(char *name, float age, char *owner);

/*Function returns a pointer to a newly allocated space in memory*/
char *_strdup(char *str);

#endif /* FILE_H */
