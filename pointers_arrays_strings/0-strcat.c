#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: En verdad no se que hace </3.
 *
 * @src: Este igual que el anterior, no tengo idea de que estan haciendo.
 *
 * Return: Imprime algo que no se que es.
 */

char *_strcat(char *dest, char *src)

{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);

}
