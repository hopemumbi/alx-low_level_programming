/**
 *string_toupper -changes all lowercase letters of a string to uppercase.
 *@str: lowercase string
 *Return: uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			/**converts lower case to uppercase by subtracting 32***/
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
