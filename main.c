#include <stdio.h>
#include "get_next_line.h"

int main()
{
	int fd;
	char *line;
	int i;
	int	result;

	line = "";
	fd = open("test.txt", O_RDONLY);
	i = 1;
	while (i < 8)
	{
		result = get_next_line(fd, &line);
 		printf("%d  line %d: %s\n", result, i, line);
		i++;
 	}
//	free(line);
//	line = NULL;
	return (0);
}
