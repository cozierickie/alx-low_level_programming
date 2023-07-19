#ifndef DOG_H
#define DOG_H

/**
 *  * struct dog - a dog's basic info
 *   * @name: First member
 *    * @age: Second member
 *     * @owner: Third member
 *      *
 *       * Description: Structure to hold basic info about a dog.
 */

struct dog
{
		char *name;
			float age;
				char *owner;
};

/**
 *  * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 *  * init_dog - initializes a struct dog
 *   * @d: pointer to struct dog
 *    * @name: name of the dog
 *     * @age: age of the dog
 *      * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 *  * print_dog - prints a struct dog
 *   * @d: pointer to struct dog to print
 *
 */
void print_dog(struct dog *d);

/**
 *  * new_dog - creates a new dog_t instance
 *   * @name: name of the dog
 *    * @age: age of the dog
 *     * @owner: owner of the dog
 *      * Return: pointer to the new dog_t instance, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 *  * free_dog - frees memory allocated for a dog_t instance
 *   * @d: pointer to the dog_t instance to free
 */
void free_dog(dog_t *d);

/**
 *  * _strcpy - copies the string pointed to by src to dest
 *   * @dest: pointer to destination buffer
 *    * @src: pointer to source string
 *     * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 *  * _strlen - calculates the length of a string
 *   * @s: pointer to the string
 *    * Return: length of the string
 */
int _strlen(char *s);

#endif
