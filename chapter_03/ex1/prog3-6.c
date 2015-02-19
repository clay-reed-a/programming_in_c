#include <stdio.h> // This header will be included in 
                   // just about every C program you write.


int main (void)
{

  // Like you've seen in JavaScript, you can
  // declare groups of variables 
  int three = 2,
        two = 2; // like so. 

  // And assign variables to operations 
  // on other variables
  int one = three + two; // as expected.

  // You can also interpolate values into strs 
  // w/ letters indicating their type (i for integer, etc). 
  printf("%i and %i are %i\n",  // Escape these w/ a %. 
    three, two, one+1); // Then just feed the values in as args
  // in order of their appearance. 

  return 0; 
}