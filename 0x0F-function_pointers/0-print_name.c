/**
 * print_name - prints name
 * @name: name to print
 * @f: function that prints the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}