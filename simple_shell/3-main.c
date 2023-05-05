#include "shell.h"

int main(void)
{
	char *path = _getenv("HOSTNAME");
	char *path2 = getenv("HOSTNAME");
	if (path == NULL)
	{
		printf("PATH environment variable not found.\n");
	}
	else
	{
		printf("PATH=%s\n", path);
	}

	if (path2 == NULL)
	{
		printf("PATH environment variable not found.\n");
	}
	else
	{
		printf("PATH=%s\n", path2);
	}

	return 0;
}