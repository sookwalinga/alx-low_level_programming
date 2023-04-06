/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

/* Base case: an empty string or a string of length 1 is a palindrome */
if (len <= 1)
return (1);

/* Check if the first and last characters match */
if (*s != *(s + len - 1))
return (0);

/* Recursively check the substring without the first and last characters */
*(s + len - 1) = '\0'; /* temporarily terminate the string */
return (is_palindrome(s + 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
