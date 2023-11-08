#include "main.h"
/**
*print_chessboard - prints the chessboard.
*@a:pointer to a 2d array of dimensions 8x8
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	/** iterate through the rows **/
	for (i = 0; i < 8; i++)
	{
		/** iterate through the columns **/
		for (j = 0; j < 8; j++)
		{
			/**
			 * print the character located at the current row 'i'
			 * and column 'j' of the chessboard.
			 */
			_putchar(a[i][j]);
			/**
			 * we have reached the end of the row.
			 *start a new line,
			 */
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
