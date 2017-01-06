#!/usr/bin/perl -w

use strict;

my $tests_dir = "/home/exam/sujets/all-new/conv_nbr/tests";
my $compile = "/home/exam/sujets/all-new/conv_nbr/prg/compile";
my $nb_tests = 3;

my $success = 1;

`$compile`;

for (my $i = 1; $i <= $nb_tests; $i++)
{
    print "#### TEST $i ####\n\n";

    my $cmd = `cat $tests_dir/test_$i/cmd`;
    chomp($cmd);
    print "=> Command: $cmd\n\n";

    my $j = 1;
    my $is_ok = 0;
    foreach my $cor (`ls $tests_dir/test_$i/out.*`)
    {
	my $match = "Not OK";
	chomp($cor);
	print "===== WAY $j =====\n";
	print "<---- user ---->\n";
	my $ret_user = `execute $tests_dir/test_$i/cmd`;
	print $ret_user."\n";
	print "<-------------->\n\n";
	
	print "<---- correction ---->\n";
	my $ret_cor = `cat -e $cor`;
	print $ret_cor."\n";
	print "<--------------------->\n";
	$match = "OK" if ($ret_user eq $ret_cor); 
	print "===>> $match\n";
	print "===== END OF WAY $j =====\n\n\n";
	$j++;
	$is_ok = 1 if ($match eq "OK");
    }
    $success = 0 if (!$is_ok);
    if ($is_ok)
    {
	print "[Test $i is ok]\n";
    }
    else
    {
	print "[Test $i failed]\n";
    }
    print "### END OF TEST $i ###\n\n\n";
}

if ($success)
{
    `echo 1 > .success`;
    print "SUCCESS!!!\n";
}
else
{
    `echo 0 > .success`;
    print "FAIL...\n";
}
