#ifndef SHELL_H
#define SHELL_H

#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#define SH_END_OF_FILE -2
#define SH_EXIT -3

extern char **environ;
extern char *name;
extern int history;

/**
 * struct sh_singly_list - struct type defining a linked list.
 * @dir: A directory path.
 * @next: A pointer to another struct sh_singly_list.
*/
typedef struct sh_singly_list
{
	char *dir;
	struct sh_singly_list *next;
} sh_singly_list_t;

/**
 * struct sh_builtin - struct type defining builtin commands.
 * @name: The name of the builtin command.
 * @func: A function pointer to the builtin command's function.
*/
typedef struct sh_builtin
{
	char *name;
	int (*func)(char **argv, char **head);
} sh_builtin_t;

/**
 * struct sh_alias - struct defining aliases.
 * @name: The name of the alias.
 * @val: The value of the alias.
 * @next: A pointer to another struct sh_alias.
 */
typedef struct sh_alias
{
	char *name;
	char *val;
	struct sh_alias *next;
} sh_alias_t;

/* Global aliases linked list */
alias_t *aliases;

ssize_t _getLine(char **, size_t *, FILE *);
int execute(char **, char **);
list_t *get_path_dir(char *);
void *_realloc(void *, unsigned int, unsigned int);
char **_strtok(char *, const char *);
void free_list(list_t *);
char *_itoa(int);
char *get_loc(char *);

int call_args(char **, char **, int *);
char *get_args(char *, int *);
void free_args(char **, char **);
void handle_line(char **, ssize_t);
void replace_variable(char **, int *);
int run_args(char **, char **, int *);
int check_args(char **);
char **replace_aliases(char **);
int handle_args(int *);

char *_strcat(char *, const char *);
char *_strncat(char *, const char *, size_t);
char *_strchr(char *, char);
char *_strcpy(char *, const char *);
int _strspn(char *, char *);
int _strcmp(char *, char *);
int _strncmp(const char *, const char *, size_t);
int _strlen(const char *);

int (*get_builtin(char *command))(char **args, char **front);
int shellby_exit(char **args, char **front);
int shellby_env(char **args, char __attribute__((__unused__)) * *front);
int shellby_setenv(char **args, char __attribute__((__unused__)) * *front);
int shellby_unsetenv(char **args, char __attribute__((__unused__)) * *front);
int shellby_cd(char **args, char __attribute__((__unused__)) * *front);
int shellby_alias(char **args, char __attribute__((__unused__)) * *front);
int shellby_help(char **args, char __attribute__((__unused__)) * *front);

char **_copyenv(void);
void free_env(void);
char **_getenv(const char *var);

int create_error(char **args, int err);
char *error_env(char **args);
char *error_1(char **args);
char *error_2_exit(char **args);
char *error_2_cd(char **args);
char *error_2_syntax(char **args);
char *error_126(char **args);
char *error_127(char **args);

/* Linkedlist Helpers */
alias_t *add_alias_end(alias_t **head, char *name, char *value);
void free_alias_list(alias_t *head);
list_t *add_node_end(list_t **head, char *dir);
void free_list(list_t *head);

void help_all(void);
void help_alias(void);
void help_cd(void);
void help_exit(void);
void help_help(void);
void help_env(void);
void help_setenv(void);
void help_unsetenv(void);
void help_history(void);

int proc_file_commands(char *file_path, int *exe_ret);

#endif /* SHELL_H */