int	my_max(int itab[], int len)
{
  int	i;
  int	max;

  max = 0x80000000;
  for (i = 0; i < len; i++)
    if (itab[i] > max)
      max = itab[i];
  return (max);
}
