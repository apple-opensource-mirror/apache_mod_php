--TEST--
Test ctype_alpha() function : usage variations - different data types as $c arg
--FILE--
<?php
/* Prototype  : bool ctype_alpha(mixed $c)
 * Description: Checks for alphabetic character(s) 
 * Source code: ext/ctype/ctype.c
 */

/*
 * Pass different data types as $c argument to ctype_alpha() to test behaviour
 */

echo "*** Testing ctype_alpha() : usage variations ***\n";

$orig = setlocale(LC_CTYPE, "C");

//get an unset variable
$unset_var = 10;
unset ($unset_var);

// get a class
class classA
{
	public function __toString() {
		return "abcdef";
	}
}

// heredoc string
$heredoc = <<<EOT
XYZ
EOT;

// get a resource variable
$fp = fopen(__FILE__, "r");

// unexpected values to be passed to $c argument
$inputs = array(

       // int data
/*1*/  0,
       1,
       12345,
       -2345,

       // float data
/*5*/  10.5,
       -10.5,
       12.3456789000e10,
       12.3456789000E-10,
       .5,

       // null data
/*10*/ NULL,
       null,

       // boolean data
/*12*/ true,
       false,
       TRUE,
       FALSE,
       
       // empty data
/*16*/ "",
       '',
       array(),

       // string data
/*19*/ "string",
       'string',
       $heredoc,
       
       // object data
/*22*/ new classA(),

       // undefined data
/*23*/ @$undefined_var,

       // unset data
/*24*/ @$unset_var,

       // resource variable
/*25*/ $fp
);

// loop through each element of $inputs to check the behavior of ctype_alpha()
$iterator = 1;
foreach($inputs as $input) {
  echo "\n-- Iteration $iterator --\n";
  var_dump( ctype_alpha($input) );
  $iterator++;
};

fclose($fp);

setlocale(LC_CTYPE, $orig);
?>
===DONE===
--EXPECTF--
*** Testing ctype_alpha() : usage variations ***

-- Iteration 1 --
bool(false)

-- Iteration 2 --
bool(false)

-- Iteration 3 --
bool(false)

-- Iteration 4 --
bool(false)

-- Iteration 5 --
bool(false)

-- Iteration 6 --
bool(false)

-- Iteration 7 --
bool(false)

-- Iteration 8 --
bool(false)

-- Iteration 9 --
bool(false)

-- Iteration 10 --
bool(false)

-- Iteration 11 --
bool(false)

-- Iteration 12 --
bool(false)

-- Iteration 13 --
bool(false)

-- Iteration 14 --
bool(false)

-- Iteration 15 --
bool(false)

-- Iteration 16 --
bool(false)

-- Iteration 17 --
bool(false)

-- Iteration 18 --
bool(false)

-- Iteration 19 --
bool(true)

-- Iteration 20 --
bool(true)

-- Iteration 21 --
bool(true)

-- Iteration 22 --
bool(false)

-- Iteration 23 --
bool(false)

-- Iteration 24 --
bool(false)

-- Iteration 25 --
bool(false)
===DONE===
