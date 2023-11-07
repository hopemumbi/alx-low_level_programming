#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *@str: string to be capitalized
 *Return: str
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = {' ', ',', ';', '.', '!', '?',
			'"', '(', ')', '{', '}', '\n', '\t'};
	int capitalize = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			/**Check if the current character is a word separator**/
			if (str[i] == sep[j])
			{
				/**Set capitalize to 1 to capitalize the next word**/
				capitalize = 1;
			}
		}
		/**Check if character is lowercase**/
		if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			capitalize = 0;
		}
		else if (capitalize && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			capitalize = 0;
		}
	}
	return (str);
}
