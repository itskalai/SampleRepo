#!/usr/bin/perl -w
print "Enter a number(range: 1 to 9)";
$num=<STDIN>;
chomp($num);
if (($num > 9) || ($num < 1))
{	
	print "Number out of range \n";
}
totext($num);

sub totext
{
	%map = qw(1 one 2 two 3 three 4 four 5 five 6 six 7 seven 8 eight 9 nine");
	print $map{$_[0]};
}
