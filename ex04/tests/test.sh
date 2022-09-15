#!/bin/bash

NAME=../a.out

print_test_header()
{
	echo "---------------"
	echo Test \#$1
	echo $2
	echo "---------------"
}

print_test_header 1 "Simple replacement"
(
	set -x
	$NAME test1 twinkle hello
	cat -e test1.replace
	diff --color test1 test1.replace
)
echo ""

print_test_header 2 "Word to replace doesn't exist"
(
	set -x
	$NAME test2 asdf hello
	#cat -e test2.replace
	diff --color test2 test2.replace
)
echo ""

print_test_header 3 "Source file doesn't end with newline"
(
	set -x
	$NAME test3 little big
	cat -e test3.replace
)
echo ""

print_test_header 4 "Can't open input file"
(
	set -x
	$NAME test4 twinkle hello
	cat -e test4.replace
)
echo ""

print_test_header 5 "Can't open output file"
(
	set -x
	$NAME test5 twinkle hello
	cat -e test5.replace
)
echo ""

print_test_header 6 "Blank first arg"
(
	set -x
	$NAME test6 "" hello
	#cat -e test6.replace
	diff --color test6 test6.replace
)
echo ""

print_test_header 7 "Blank second arg"
(
	set -x
	$NAME test7 twinkle ""
	#cat -e test7.replace
	diff --color test7 test7.replace
)
echo ""

print_test_header 8 "Too many arguments"
(
	set -x
	$NAME test8 twinkle hello another
	#cat -e test8.replace
	diff --color test8 test8.replace
)
echo ""

print_test_header 9 "Not enough arguments"
(
	set -x
	$NAME test9 twinkle
	#cat -e test8.replace
	diff --color test9 test9.replace
)
echo ""
