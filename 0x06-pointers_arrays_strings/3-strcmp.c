/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: negative integer if s1 is less than s2, 0 if s1 matches s2,
 * positive integer if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
{
i++;
}

if (s1[i] == s2[i])
{
return (0);
}
else
{
return (s1[i] - s2[i]);
}
}
