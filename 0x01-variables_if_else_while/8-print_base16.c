#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num = 57; /*Initialize num to 0*/

	for(char i='0';i<='f';i++){
		if(i<58||i>96){
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
