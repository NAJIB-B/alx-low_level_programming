#include <endian.h>

/**
 * get_endianness - checkes the endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	if (__BYTE_ORDER == __BIG_ENDIAN)
		return (0);
	else
		return (1);
}
