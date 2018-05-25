#include <stdio.h>
#include <string.h>

void new_cmd(void) { return; }
void open_cmd(void) { return; }
void close_cmd(void) { return; }
void close_all_cmd(void) { return; }
void save_cmd(void) { return; }
void save_as_cmd(void) { return; }
void save_all_cmd(void) { return; }
void print_cmd(void) { return; }
void exit_cmd(void) { return; }

struct {
	char *cmd_name;
	void (*cmd_pointer)(void);
} file_cmd[] =
 {{"new",		new_cmd},
  {"open",		open_cmd},
  {"close",		close_cmd},
  {"close all", close_all_cmd},
  {"save",		save_cmd},
  {"save as",	save_as_cmd},
  {"save all",	save_all_cmd},
  {"print",		print_cmd},
  {"exit",		exit_cmd}
 };

int main(void)
{
	char arr[20], ch, *p = arr;
	int i;
	
	printf("Enter command: ");
	while ((ch = getchar()) != '\n')
	{
		*p++ = ch;
	}
	*p = '\0';
	
	for (i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++)
	{
		if (strcmp(file_cmd[i].cmd_name, arr) == 0)
		{
			printf("Running %s..\n", file_cmd[i].cmd_name);
			// (*file_cmd[i].cmd_pointer)();
			return 0;
		}
	}
	
	printf("Couldn't find %s.\n", arr);
	return -1;
}
