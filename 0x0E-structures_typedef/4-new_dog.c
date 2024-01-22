#include <stdlib.h>
#include "dog.h"


	/**
	 * _strlen - length of string
	 * @s: 2nd member
	 *Description: print length of _strlen
	 * Return: 0
	 */
	int _strlen(char *s)
	{
		int gb;

		gb = 0;

		while (s[gb] != '\0')
		{
			gb++;
		}

		return (gb);
	}

	/**
	 * *_strcpy - copied src
	 * @dest: 2nd member
	 * @src: copied string
	 *
	 * Return: 0
	 */
	char *_strcpy(char *dest, char *src)
	{
		int len, gb;

		len = 0;

		while (src[len] != '\0')
		{
			len++;
		}

		for (gb = 0; gb < len; gb++)
		{
			dest[gb] = src[gb];
		}
		dest[gb] = '\0';

		return (dest);
	}

	/**
	 * new_dog - creates a struct
	 * @name: name of new struct
	 * @age: age of struct
	 * @owner: owner of struct
	 *
	 * Return: pointer to the new dog (Success), NULL otherwise
	 */
	dog_t *new_dog(char *name, float age, char *owner)
	{
		dog_t *dog;
		int len1, len2;

		len1 = _strlen(name);
		len2 = _strlen(owner);

		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * (len1 + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * (len2 + 1));
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}
		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;

		return (dog);
	}
