#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);

/**
 * _strlen - returns the length of a string
 * @str: The string
 * Return: The length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char *_strcpy(char *dest, char *src);

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte
 * @dest: The destination
 * @src: The source
 * Return: The pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of new dog
 * @age: The age of new dog
 * @owner: The owner of new dog
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dawg = malloc(sizeof(dog_t));
	if (dawg == NULL)
	{
		return (NULL);
	}

	dawg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dawg->name == NULL)
	{
		free(dawg);
		return (NULL);
	}

	dawg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dawg->owner == NULL)
	{
		free(dawg->name);
		free(dawg);
		return (NULL);
	}
	dawg->name = _strcpy(dawg->name, name);
	dawg->owner = _strcpy(dawg->owner, owner);
	dawg->age = age;
	return (dawg);
}
