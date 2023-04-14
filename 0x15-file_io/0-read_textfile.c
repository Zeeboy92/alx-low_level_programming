#include "main.h"
#include <stdio.h>

/**
 * print_file - Prints the contents of a file to the POSIX standard output
 * @filename: The name of the file to print
 *
 * Return: The number of characters printed, or -1 if an error occurs
 */
ssize_t print_file(const char *filename)
{
    FILE *fp;
    char c;
    ssize_t count = 0;

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }

    while ((c = fgetc(fp)) != EOF)
    {
        if (putchar(c) == EOF)
        {
            perror("Error writing to standard output");
            fclose(fp);
            return (-1);
        }
        count++;
    }

    if (ferror(fp))
    {
        perror("Error reading file");
        fclose(fp);
        return (-1);
    }

    fclose(fp);
    return (count);
}
