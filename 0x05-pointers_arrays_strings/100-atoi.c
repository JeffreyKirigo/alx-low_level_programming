#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: Character to change to integer
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int count, size, oi, positive_negative, m, i;

	count = 0, size = 0, oi = 0, positive_negative = 1, m = 1;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < 48 || *(s + count) > 57))
			break;
		if (*(s + count) == 45)
			positive_negative *= -1;
		if (*(s + count) >= 48 && (*(s + count) <= 57))
		{
			if (size > 0)
				m *= 10;
			size = size + 1;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m = m / 10;
	}
	return (oi * positive_negative);
}
