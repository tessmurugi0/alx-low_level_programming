#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - appends text at the
 * end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: content of the fie.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
int append_text_to_file(const char *filename, char *text_content)
