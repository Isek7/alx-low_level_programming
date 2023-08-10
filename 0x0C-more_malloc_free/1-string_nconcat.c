#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int ls1, ls2, loutput, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	loutput = ls1 + n;

	output = malloc(loutput + 1);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < loutput; i++)
		if (i < ls1)
			output[i] = s1[i];
		else
			output[i] = s2[i - ls1];

	output[i] = '\0';

	return (output);
}
