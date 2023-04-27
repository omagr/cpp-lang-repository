/*
char : data type was designed to hold a character. A character can be a single letter, number, symbol, or whitespace. Character literals are always placed between single quotes (e.g. ‘g’, ‘1’, ‘ ‘). The char data type is an integral type, meaning the underlying value is stored as an integer. Similar to how a Boolean value 0 is interpreted as false and non-zero is interpreted as true, the integer stored by a char variable are intepreted as an ASCII character.

------------------------------------------------------------------------------------- 

ASCII : stands for American Standard Code for Information Interchange, and it defines a particular way to represent English characters (plus a few other symbols) as numbers between 0 and 127 (called an ASCII code or code point). For example, ASCII code 97 is interpreted as the character ‘a’.

Code	Symbol	Code	Symbol	Code	Symbol	Code	Symbol
0	NUL (null)	32	(space)	64	@	96	`
1	SOH (start of header)	33	!	65	A	97	a
2	STX (start of text)	34	”	66	B	98	b
3	ETX (end of text)	35	#	67	C	99	c
4	EOT (end of transmission)	36	$	68	D	100	d
5	ENQ (enquiry)	37	%	69	E	101	e
6	ACK (acknowledge)	38	&	70	F	102	f
7	BEL (bell)	39	’	71	G	103	g
8	BS (backspace)	40	(	72	H	104	h
9	HT (horizontal tab)	41	)	73	I	105	i
10	LF (line feed/new line)	42	*	74	J	106	j
11	VT (vertical tab)	43	+	75	K	107	k
12	FF (form feed / new page)	44	,	76	L	108	l
13	CR (carriage return)	45	-	77	M	109	m
14	SO (shift out)	46	.	78	N	110	n
15	SI (shift in)	47	/	79	O	111	o
16	DLE (data link escape)	48	0	80	P	112	p
17	DC1 (data control 1)	49	1	81	Q	113	q
18	DC2 (data control 2)	50	2	82	R	114	r
19	DC3 (data control 3)	51	3	83	S	115	s
20	DC4 (data control 4)	52	4	84	T	116	t
21	NAK (negative acknowledge)	53	5	85	U	117	u
22	SYN (synchronous idle)	54	6	86	V	118	v
23	ETB (end of transmission block)	55	7	87	W	119	w
24	CAN (cancel)	56	8	88	X	120	x
25	EM (end of medium)	57	9	89	Y	121	y
26	SUB (substitute)	58	:	90	Z	122	z
27	ESC (escape)	59	;	91	[	123	{
28	FS (file separator)	60	<	92	\	124	|
29	GS (group separator)	61	=	93	]	125	}
30	RS (record separator)	62	>	94	^	126	~
31	US (unit separator)	63	?	95	_	127	DEL (delete)

------------------------------------------------------------------------------------- 

Char Props : 
    1. Char is defined by C++ to always be 1 byte in size. By default, 
        1 byte = 2^8 -> 256 -> 0 ` 255 
    2. a char may be signed or unsigned (though it’s usually signed). 
    3. If you’re using chars to hold ASCII characters, you don’t need to specify a sign (since both signed and unsigned chars can hold values between 0 and 127). 
    4. If you’re using a char to hold small integers (something you should not do unless you’re explicitly optimizing for space), you should always specify whether it is signed or unsigned. 
    5. A signed char can hold a number between -128 and 127. An unsigned char can hold a number between 0 and 255.
    6. Single chars are always put in single quotes (e.g. ‘a’, ‘+’, ‘5’). A char can only represent one symbol (e.g. the letter a, the plus symbol, the number 5). Something like this is illegal:
    7. Text put between double quotes (e.g. “Hello, world!”) is treated as a string.

------------------------------------------------------------------------------------- 

Escape sequences : There are some characters in C++ that have special meaning. These characters are called escape sequences. An escape sequence starts with a ‘\’ (backslash) character, and then a following letter or number.

Name	                       Symbol	            Meaning
Alert	                        \a	                Makes an alert, such as a beep
Backspace	                    \b	                Moves the cursor back one space
Formfeed	                    \f	                Moves the cursor to next logical page
Newline	                        \n	                Moves cursor to next line
Carriage return	                \r	                Moves cursor to beginning of line
Horizontal tab	                \t	                Prints a horizontal tab
Vertical tab	                \v	                Prints a vertical tab
Single quote	                \’	                Prints a single quote
Double quote	                \”	                Prints a double quote
Backslash	                    \\	                Prints a backslash.
Question mark	                \?	                Prints a question mark.
Octal number	                \(number)	        Translates into char represented by octal
Hex number	                    \x(number)	        Translates into char represented by hex number

Three other notable escape sequences are:
\’ prints a single quote
\” prints a double quote
\\ prints a backslash

*/  


#include <iostream>

int main()
{
    char a { 'a' };
    char b ( 'b' );
    char c { 99 };
    char d { '+' };
    char e { ' ' };
    char i { };
    char k {99 + 1 };

    std::cin >> i;

    std::cout << "a: " << a << '\n';
    std::cout << "ascii of a: " << static_cast<int> (a) << '\n'; // ascii value of character
    std::cout << "size of char: " << sizeof(char) << '\n';
    std::cout << "b: " << b << '\n';
    std::cout << "c: " << c << '\n';
    std::cout << "d: " << d << '\n';
    std::cout << "e: " << e << '\n';
    std::cout << "i: " << i << '\n';
    std::cout << "j: " << "j" << '\n';
    std::cout << "k: " << k << '\n';

    std::cout << "\n First part \t Second part";

    return 0;
}