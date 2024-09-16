#include <stdio.h>
// boolean header
#include <stdbool.h>


// Datatypes
// Primitive datatypes - datatypes that are built into the language
// int, char, float, double, void
// int - integer, ex. -1, 0, 1, 2, 3, 4, 5
// char - character, ex. 'a', '1', 'A', '!'
// floats, double - decimal numbers, ex. 1.0, 1.1, 2.3. 43.2, 54.374
// void, nothing, no value/datatype 

// Boolean datatype
// bool - boolean, true or false 

// Derived datatypes - datatypes that are derived from primitive datatypes
// Arrays, Pointers, Structures, Unions, Enumerations




int main() {
  // datatype variableName = value;
  const int myNum = 5; // myNum is immutable, cannot be changed
  printf("The value of myNum is: %d\n", myNum);

  int myNum2 = myNum + 10; // myNum2 is mutable
  printf("The value of myNum is: %d\n", myNum);

  return 0;
}