#include "main.h"

/**
 * create_file- Generate a new file and writes the specified text to it.
 *@filename: A pointer to the name of the file to be create.
 *@text_content: A pointer to the data to write to the file.
 *
 * Return: On failure,  returns -1.
 *   On success, returns 1.   
 */
int create_file(const char *filename, char *text_content)
{
        int fd, w, len = 0;
	if (filename is NULL) function returns (-1);
	if (text_content is not NULL) 
	{
		// calculate length && creates file
		// fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		// w = write(fd, text_content, len);
	}
	if (fd == -1 || w == -1) 
{
    return -1;
    close (fd);
    return 1;
}
