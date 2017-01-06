void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     main(int argc, char *argv[])
{
  int   i;

  i = 0;
  if (argc != 2)
    {
      write(1, "\n", 1);
      return (0);
    }

  while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
    i++;
  while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
    i++;
  while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
    i++;

  while (argv[1][i] != '\0')
    {
      while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
	{
	  my_putchar(argv[1][i]);
	  i++;
	}
      while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
	i++;
      my_putchar(' ');
    }

  i = 0;
  while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
    i++;
  while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
    {
      my_putchar(argv[1][i]);
      i++;
    }
  my_putchar('\n');

  return (0);
}




