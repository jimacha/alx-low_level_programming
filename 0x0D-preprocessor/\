#include <unistd.h>
#include <string.h>

/**
 * main - prints the name of the file
 * Return: Always 0 (Success)
 */

int main(void)
{
	char fileName[] = __FILE__;
	int len = strlen(fileName);

			write(STDOUT_FILENO, fileName + 1, len - 2);
			char newLine[] = "\n";

			write(STDOUT_FILENO, newLine, 1);
			return (0);
}
