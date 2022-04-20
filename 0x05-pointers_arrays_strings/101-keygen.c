#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a password
 *
 * Return: Always 0
 */

int main(void)
{
	int key_num, symbol, sum_check;

	srand(time(NULL));
	sum_check = 2772;
	key_num = 0;

	while (key_num < (sum_check - 122))
	{
		symbol = (rand() % (122 - 97 + 1)) + 97; /*to print mostly lowercase*/
		printf("%c", symbol);
		key_num = key_num + symbol;
	}

	symbol = sum_check - key_num;
	printf("%c", symbol);

	return(0);
}
