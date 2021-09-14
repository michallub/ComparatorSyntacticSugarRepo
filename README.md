# ComparatorSyntacticSugarRepo
0.0 &lt;= x &lt;= 1.0

"syntactic sugar" library for writing range conditions like: (0.f <= CMP(x) <= 1.f), or comparing multiple values like: (0.f <= CMP(x) <= y <= z <= w <= 1.f)
Library is fast, with good compiler there is no performance overhead.

CMPNL, CMPNB, CMPN - neutral object used to write something like: (CMPNL>= x < y <= z >= w) that means: ((x<y)&&(y<=z)&&(z>=w))
CMPL, CMPB, CMP - functions used to write something like:  (CMPL(x) < y <= z >= w) that means: ((x<y)&&(y<=z)&&(z>=w))

postfixes L or B means "Logic AND" (&&), and "Binary AND" (&). 

Logic AND is based on conditional jumps and has "short circuit", so is good for heavy comparator.

Binary AND runs all every expression, and test if all are true. Good for simple types.

no postfixes means use default AND (binary). If you want change default AND, before inluding library, define :

#define CompIndirect_DEFAULT_LOGIC_OP true

WARNING: Take care about side-effects of your arguments or compare operators, by choosing the right AND.



Library support 6 main compare operators: <, <=, >, >=, ==, and !=; 

WARNING: Take care about operator order.  != and == has lower priority than <, <=, >, >=.
