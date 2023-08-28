#include "main.h"
/**
 * print_chessboard - function print chessboard.
 * Description:function prints chessboard
 * @a:2D array
 * Return:none
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i =  0; i <= 8; i++)
	{
		for (j = 0; j < 8; i++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
