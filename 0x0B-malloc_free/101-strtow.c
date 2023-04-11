#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
int find_word_length(char *str);
char **create_array(int size);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
int i, j, k, len, words;
char **arr;

if (str == NULL || *str == '\0')
return (NULL);

words = count_words(str);
if (words == 0)
return (NULL);

arr = create_array(words + 1);
if (arr == NULL)
return (NULL);

i = 0;
while (i < words)
{
while (*str == ' ')
str++;

len = find_word_length(str);

arr[i] = malloc((len + 1) * sizeof(char));
if (arr[i] == NULL)
{
while (i >= 0)
free(arr[i--]);
free(arr);
return (NULL);
}

for (j = 0, k = 0; j < len; j++, k++)
{
arr[i][k] = *(str++);
if (*(str) == ' ' || *(str) == '\0')
break;
}

arr[i][k] = '\0';
i++;
}

arr[i] = NULL;
return (arr);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words of
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int i, count;

for (i = 0, count = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}

return (count);
}

/**
 * find_word_length - Finds the length of a word in a string
 * @str: The string to find the word in
 *
 * Return: The length of the word
 */
int find_word_length(char *str)
{
int len;

for (len = 0; str[len] != ' ' && str[len] != '\0'; len++)
;

return (len);
}

/**
 * create_array - Creates an array of char pointers
 * @size: The size of the array to create
 *
 * Return: A pointer to the array
 */
char **create_array(int size)
{
char **arr;

arr = malloc(size * sizeof(char *));
if (arr == NULL)
return (NULL);

return (arr);
}
