#include "shell.h"

/**
 * _strncpy - copies a string
 * @dest: the destinaton
 * @src: the source
 * @n: the amout of characters
 * Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * _strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the amount of byte
 * Return: the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[j] = '\0';
	return (s);
}

/**
 * _strchr - locates a character in a string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: (s) a pointer to memory
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

