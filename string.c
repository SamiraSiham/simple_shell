#include "main.h"

char *_strdup(const char *s)
{
	char *ptr;
	int i, len = 0;

	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = s - len;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (int i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}
