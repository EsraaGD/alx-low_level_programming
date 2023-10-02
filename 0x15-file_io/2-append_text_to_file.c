#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int o, w, len = 0;

	/* ckeck file name*/
	if (!filename)
		return (-1);

	/*get len*/
	if (text_content)
		while (text_content[len])
			len++;

	o = open(filename, O_WRONLY | O_APPEND, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
