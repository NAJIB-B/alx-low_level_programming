/**
 * _islower - checks if an alphabet is lowercase
 *@c: character to be checked
 *
 * Return: 1 if it's lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
