#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84]; /* Buffer to store the password*/
	int i = 0, sum = 0, rem1, rem2;

	srand(time(0)); /* Seed the random number generator */
	/* Generate random characters until the sum reaches or exceeds 2772 */
	while (sum < 2772)
	{
		/* Generate a random character between '!' and '~' */
		password[i] = 33 + rand() % 94;
		sum += password[i]; /* Add its ASCII value to the sum */
		i++; /* Move to the next index in the password array */
	}
	password[i++] = '\0'; /* Null-terminate the password string */
	/* If sum > 2772 */
	if (sum != 2772)
	{
		rem1 = (sum - 2772) / 2;
		rem2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			rem1++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + rem1))
			{
				password[i] -= rem1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + rem2))
			{
				password[i] -= rem2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}

