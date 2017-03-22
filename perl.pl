Using string functions
#! /usr/bin/perl

$str=”My name is khan”;

$indexInt=index($str,’i’);
printf “index of i is : $indexInt \n”;

$lengthStr=length($str);
printf “Length of string is : $lengthStr\n”;

$reverseStr=reverse($str);
printf “Reverse of strng is : $reverseStr\n”;

$rindexInt=index($str,’i’);
printf “reverse index of i is : $rindexInt \n”;
$subStr=substr($str,’5′);
printf “substring is : $subStr \n”;

$lcStr=lc($str);
printf “lowercase string is : $lcStr \n”;
