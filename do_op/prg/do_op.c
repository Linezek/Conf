#include <stdio.h>

typedef struct	s_op
{
  char		*op;
  void		(*f)(int, int);
}		t_op;

void	do_add(int num1, int num2)
{
  printf("%d\n", num1 + num2);
}

void	do_sub(int num1, int num2)
{
  printf("%d\n", num1 - num2);
}

void	do_mult(int num1, int num2)
{
  printf("%d\n", num1 * num2);
}

void	do_div(int num1, int num2)
{
  printf("%d\n", num1 / num2);
}

static t_op	list_op[]=
  {
    {"+", do_add},
    {"-", do_sub},
    {"*", do_mult},
    {"/", do_div},
    {0, 0}
  };

void	do_op(char *num1, char *op, char *num2)
{
  int	i;

  for (i = 0; list_op[i].op; i++)
    {
      if (!strcmp(op, list_op[i].op))
	{
	  list_op[i].f(atoi(num1), atoi(num2));
	}
    }
}

int	main(int ac, char **av)
{
  if (ac == 4)
    do_op(av[1], av[2], av[3]);
  else
    printf("\n");
}
