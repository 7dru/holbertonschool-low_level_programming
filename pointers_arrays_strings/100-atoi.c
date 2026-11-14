#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: Pointer to the string
 *
 * Return: The converted integer, or 0 if no numbers found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			/* Do nothing, sign remains the same */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			/* Handle overflow safely without long */
			if (result > (2147483647 - (s[i] - '0')) / 10)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}
