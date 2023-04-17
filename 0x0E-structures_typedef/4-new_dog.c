#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;

/* allocate memory for new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

/* allocate memory for new name */
new_name = malloc(sizeof(char) * (_strlen(name) + 1));
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}

/* allocate memory for new owner */
new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}

/* copy name and owner to new memory locations */
_strcpy(new_name, name);
_strcpy(new_owner, owner);

/* assign values to new dog */
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;

return (new_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination of string
 * @src: source of string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];

dest[i] = '\0';

return (dest);
}
