/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: new allocated memory with concatenated strings, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, len1 = 0, len2 = 0;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (*(s1 + len1))
len1++;
while (*(s2 + len2))
len2++;

s = malloc(sizeof(char) * (len1 + len2 + 1));
if (s == NULL)
return (NULL);

for (i = 0; i < len1; i++)
*(s + i) = *(s1 + i);
for (j = 0; j < len2; j++)
*(s + (i + j)) = *(s2 + j);

*(s + (i + j)) = '\0';

return (s);
}
