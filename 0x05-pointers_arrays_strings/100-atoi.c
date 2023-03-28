/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
int i = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign = sign * -1;
}
if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
}
i++;
}

if (num > INT_MAX && sign == 1)
return INT_MAX;
else if (num > INT_MAX && sign == -1)
return INT_MIN;
else
return (num * sign);
}
