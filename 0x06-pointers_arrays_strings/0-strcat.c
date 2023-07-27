// main.c
#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
	char *result = dest; // Store the initial address of the destination string

	// Move the destination pointer to the end of the destination string
	while (*dest != '\0')
		dest++;

	// Copy the source string to the end of the destination string
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; // Add a terminating null byte at the end of the concatenated string
	return result; // Return the pointer to the concatenated string
}

