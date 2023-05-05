#include "shell.h"
#include <unistd.h>

extern **environ;

char *_getenv(const char *name)
{
	size_t name_len = strlen(name);

	if (name == NULL || *name == '\0' || strchr(name, '=') != NULL)
	{
		return NULL;
	}


	for (char **env = environ; *env != NULL; env++)
	{
		if (strncmp(name, *env, name_len) == 0 && (*env)[name_len] == '=')
		{
			return &(*env)[name_len + 1];
		}
	}

	return NULL;
}