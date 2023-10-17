#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: 0 if no integer is encountered and 1 if an integer is encountered
 */
int _atoi(char *s)
{
	int i, has_sign, no_sign, enc_num;
	char sign;

	has_sign = no_sign = enc_num = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] < '0' && s[i] > '9')
		{
			if (enc_num == 1)
			{
				return (1);
			}
			else if (no_sign == 1)
			{
				continue;
			}
			else if (s[i] == '+' || s[i] == '-')
			{
				has_sign = 1;
				sign = s[i];
			}

			if (s[i + 1] != '+' && s[i + 1] != '-' && (s[i + 1] < '0' && s[i + 1] > '9'))
			{
				no_sign = 1;
				has_sign = 0;
			}
		}
		else
		{
			enc_num = 1;
			if (has_sign == 1)
			{
				putchar(sign);
				has_sign = 0;
			}
		}
	}

	if (enc_num == 1)
		return (1);
	else
		return (0);

}
