/**
 * swap_int - swap value of two integers
 * @a: first integer
 * @b: second integer
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
