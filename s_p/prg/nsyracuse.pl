#!/usr/bin/perl -w 

use strict;

my $n;
my $nb;

for (my $i = 1; $i <= 100; $i++)
{
    $n = $i;
    $nb = 1;
    while ($n != 1)
    {
	if ($n % 2)
	{
	    $n = $n * 3 + 1;
	}
	else
	{
	    $n /= 2;
	}
	$nb++;
    }
    print "$i $nb\n";
}
