#include "dog.h"
#include <stdlib.h>
/**
 * dog_t *new_dog - a function that creates a new dog
 * @name : New dog's name
 * @age : New dog's age
 * @owner : New dog's owner
 * Return: New dog's struct
 */

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_brown_one;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	new_brown_one = malloc(sizeof(dog_t));

	if ( new_brown_one == NULL)
	{
		return (NULL);
	}

	new_brown_one->name = malloc(sizeof(char) * (_strlen(name) + 1));
	new_brown_one->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (!(new_brown_one) || !(new_brown_one))
	{
		free(new_brown_one->name);
		free(new_brown_one->owner);
		free(new_brown_one);
		return (NULL);
	}
	new_brown_one->name = _strcpy(new_brown_one->name, name);
	new_brown_one->age = age;
	new_brown_one->owner = _strcpy(new_brown_one->owner, owner);

	return (new_brown_one);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest : pointer to dest
 * @src : pointer to src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: string pointer
 * Return: the string's length
 */
int _strlen(char *s)
{
	int stringLenth = 0;

	while (*s++)
	{
		stringLenth++;
	}
	return (stringLenth);
}
