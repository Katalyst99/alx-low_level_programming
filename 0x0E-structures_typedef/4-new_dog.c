#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);

/**
 * _strcpy - copies the string pointed to by src, including the terminating,
 * null byte (\0) to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from (source)
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len]; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';


	return (dest);
}

int _strlen(char *s);

/**
 * _strlen - Returns the length of a string
 * @s: The string
 * Return: The length of string
 */
int _strlen(char *s)
{
	int len = 0;


	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * new_dog - creates a new dog.
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size, size2;
	dog_t *dawg;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	size = _strlen(name);
	size2 = _strlen(owner);

	dawg = malloc(sizeof(dog_t));
	if (dawg == NULL)
	{
		return (NULL);
	}

	dawg->name = malloc(sizeof(char) * (size + 1));
	if (dawg->name == NULL)
	{
		free(dawg);
		return (NULL);
	}

	dawg->owner = malloc(sizeof(char) * (size2 + 1));
	if (dawg->owner == NULL)
	{
		free(dawg);
		free(dawg->name);
		return (NULL);
	}
	dawg->name = _strcpy(dawg->name, name);
	dawg->owner = _strcpy(dawg->owner, owner);
	dawg->age = age;
	return (dawg);

}
