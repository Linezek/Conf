#!/usr/bin/perl -w 

use strict;

my  $n;
for (my $i = 1; $i <= 100; $i++)
{
    print "$i:";
    $n = $i;
    print " $n";
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
	print " $n";
    }
    print "\n";
}
