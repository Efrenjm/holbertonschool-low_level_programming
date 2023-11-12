#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - partially concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes from second string
 * Return: s1 + first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat = malloc(s1_len + n + 1);

	if (concat != NULL)
	{
		strcpy(concat, s1);
		strncat(concat, s2, n);
	}

	return (concat);
}
