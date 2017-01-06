#include "my_atoi_base.h"

int     my_power(int val, int pow)
{
  int   res;
  int   i;

  if (!pow)
    return (1);
  res = val;
  for (i = 2; i <= pow; ++i)
    res *= val;
  return (res);
}

int     my_atoi_base(char *str, char *base)
{
  int   res;
  int   cpt_str;
  int   cpt;
  int   rang;
  int   size_base;

  res = 0;
  for (rang = 0; str[rang + 1] != 0; ++rang)
    ;
  for (size_base = 0; base[size_base] != 0; ++size_base)
    ;
  for (cpt_str = 0; cpt_str <= rang; ++cpt_str)
    {
      for (cpt = 0; str[cpt_str] != base[cpt]; cpt++)
        ;
      res += my_power (size_base, (rang - cpt_str)) * cpt;
    }
  return (res);
}


int main()
{
  printf("%d\n", my_atoi_base("101010", "01"));
}
