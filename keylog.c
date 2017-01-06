#include <fcntl.h>

int	main(int ac, char **av)
{
  char	*line;
  int	fd;

  fd = open(av[1], O_RDWR);
  while (1)
    {
      line = get_next_line(1);
      write(fd, line, strlen(line));
      write(fd, '\n', 1);
    }
}
