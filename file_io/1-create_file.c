#include "main.h"
/**
 *
 */

int create_file(const char *filename, char *text_content)

{
	int o, w;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (o == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}

	w = write(o, text_content, len);

	if (w == -1)
	{
		return (-1);
	}

	close(o);

	return (-1);
}








