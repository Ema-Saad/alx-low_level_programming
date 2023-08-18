#include <main.h>
/**
 * _isupper -  will check if letter is uppercase or not 
 * 
 * @C: alphapet input 
 *
 * Return: 1 in case upper case, 0 otherwis
 */
#include <ctype.h>
int _isupper(int c)
{
	if (c >65 && c<90)
		return (1);
	else
		return (0);
}
