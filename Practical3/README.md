# Practical 3

This folder contains the codes for practical 3.

use_print.c demonstrates how to use printf syntax in C

integration.c computes the area under the curve given by a function f(x) = tan(x) 
by dividing x variable into 12 equidistant points between a = 0 and b = pi/3. The
code then compares the result from the computed sum with the exact integral of the 
function f(x). The difference between the two values appears to be small.


## Compiling of each code

* gcc use_print.c -o useprint
*gcc integration.c -o getArea -lm

## Execution of each code

* ./useprint
* ./getArea
