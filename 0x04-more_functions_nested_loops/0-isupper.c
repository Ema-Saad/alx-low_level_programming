#include <main.h>
/**
 * _isupper -  will check if letter is uppercase or not 
 * 
 * @C: alphapet input 
 *
 * Return: 1 in case upper case, 0 otherwis
 */

int _isupper(int c)
{
	if (c >'A' && c<'Z')
		return (1);
	else
		return (0);
}
