#include <stdlib.h>
#include "my_max.h"

int	*create_list(int nb_elem, char **nb)
{
  int	i;
  int	*list;

  list = malloc(nb_elem); /* not checked!!!! baaaaaaad!!! */
  for (i = 0; i < nb_elem; i++)
    list[i] = atoi(nb[i]);
  return (list);
}

int	main(int ac, char **av)
{
  int	*list;
  int	max;

  list = create_list(ac - 1, av + 1);
  max = my_max(list, ac - 1);
  printf("%d\n", max);
  return (0);
}
