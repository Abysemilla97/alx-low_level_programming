#include <stdlib.h>
#include "main.h"

/**
 * count_words - helping the function to count.
 * @s: string to count.
 * Return: numb of words.
 */
int count_words(char *s)
{
	int flag = 0, m = 0, q;

	for (q = 0; s[q] != '\0'; q++)
	{
	if (s[q] == ' ')
		flag = 0;
	else if (flag == 0)
	{
		flag = 1;
		m++;
	}
	}

	return (m);
}

/**
 * strtow - spliting a string into words.
 * @str: the strings to split.
 * Return: points to an array of strings or
 * NULL if error
 */
char **strtow(char *str)
{
	char **mats, *temp;
	int i, r = 0, lens = 0, d = 0, s_words, begin, ends;

	while (*(str + lens))
		lens++;
	s_words = count_words(str);

	if (s_words == 0)
		return (NULL);

	mats = (char **) malloc(sizeof(char *) * (s_words + 1));
	if (mats == NULL)
		return (NULL);

	for (i = 0; i <= lens; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
		if (d)
		{
		ends = i;
		temp = (char *) malloc(sizeof(char) * (d + 1));
		if (temp == NULL)
			return (NULL);

		while (begin < ends)
		*temp++ = str[begin++];
		*temp = '\0';
		mats[r] = temp - d;
		r++;
		d = 0;
		}
	}
	else if (d++ == 0)
		begin = 1;
	}

	mats[r] = NULL;
	return (mats);
}
