#include "shell.h"

/**
 * _myexit - exists the shell
 * @info: structure containinig the patential arguments
 * Return: exists with a guiven struct (0) if info, argv[0] != "exit"
 */
int _myexit(info_t *info)
{
	int exitcheck;

	if (info->argv[1]) /*if the exit arg */
	{
		exitcheck = _erratori(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "illegal number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}

/**
 * _mycd - changes the current dir of the process
 * @info: structure containing potential arg
 * Return: Always 0.
 */
int _mycd(info_t *info)
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (ls)
		_puts("TODO: >>getcwd failure emsg here<<\n")
