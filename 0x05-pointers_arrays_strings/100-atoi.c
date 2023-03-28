/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
        int sign = 1, result = 0, i = 0;

        /* Handle leading whitespace */
        while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
                i++;

        /* Handle optional sign */
        if (s[i] == '-')
                sign = -1;

        if (s[i] == '+' || s[i] == '-')
                i++;

        /* Process remaining digits */
        while (s[i] >= '0' && s[i] <= '9')
        {
                /* Check for overflow */
                if (result > INT_MAX / 10 ||
                    (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
                {
                        return sign == 1 ? INT_MAX : INT_MIN;
                }

                /* Append digit to result */
                result = result * 10 + (s[i] - '0');

                i++;
        }

        /* Apply sign and return result */
	return sign * result;
}
