#!/usr/bin/perl -w

use strict;

my $tests_dir = "/home/exam/sujets/all-new/aff_z/tests";
my $nb_tests = 5;

my $success = 1;
for (my $i = 1; $i <= $nb_tests; $i++)
{
    print "#### TEST $i ####\n\n";

    my $cmd = `cat $tests_dir/test_$i/cmd`;
    chomp($cmd);
    print "=> Command: $cmd\n\n";

    my $j = 1;
    my $is_ok = 0;
    my $ret_user;
    foreach my $cor (`ls $tests_dir/test_$i/out.*`)
    {
	my $match = "Not OK";
	chomp($cor);
	print "===== WAY $j =====\n";
	print "<---- user ---->\n";
	`cc *.c -o aff_z`;
	if (-e "aff_z")
	{
	    $ret_user = `execute $tests_dir/test_$i/cmd $tests_dir/too_long`;
	    print $ret_user."\n";
	}
	else
	{
	    print 'aff_z not found!';
	}
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
