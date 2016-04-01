//  6.087: Practical Programming in C
//  IAP 2010
//  Problem Set 2
//  Types, operators, expressions
//  Created by Max Alcala on 3/15/16.
//  Copyright © 2016 Max Alcala. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

#define testy "bla bla bla"

int main(void)
{
    //
    printf("this is the size of short: %lu \n", sizeof(short));
    //    Problem 2.2:

    // determine if a char `c` is lowercase, or uppercase
    //  const char c = 30;
    //  if (c >= 'a' && c <= 'z') {
    //      printf("c is lowercase");
    //  } else if (c >= 'A' && c <= 'Z') {
    //      printf("c is uppercase");
    //  } else if (c >= '0' && c <= '9') {
    //      printf("c is is a digit");
    //  } else if (c == ' ' || c == '  ' || c == '\n') {
    //      printf("c is is a whitespace");
    //  } else {
    //      printf("c is neither a letter, digit, or whitespace");
    //  }

    // problem 2.3
    printf("Problem 2.3\n");

    // Consider :
    int val=0xCAFE;
    // Write expressions using bitwise operators that do the following:

    // • test if atleast three of last four bits (LSB) are on
    int lastFourBits = val & 0xF;
    if (lastFourBits == 0xB || lastFourBits == 0x7 || lastFourBits >= 0xD) {
        printf("at least 3 of the last 4 bits are on \n");
    }

    // • reverse the byte order (i.e., produce val=0xFECA)
    printf("these are the reversed bytes %04x\n", ((val & 0xFF) << 8) | val >> 8);

    // • circular-rotate the last four bits (i.e., produce val=0xECAF)
    printf("these are the rotated bytes %04x\n", (val >> 4) | ((val & 0xF) << 12));

    // problem 2.4
    // Using precedence rules, evaluate the following expressions and determine the value of the variables(without running the code). Also rewrite them using parenthesis to make the order explicit.
    // Assume (x=0xFF33,MASK=0xFF00).Expression: c=x & MASK ==0;
    // Result: 
    //    
    //    x & (MASK == 0)
    //    0xFF33 & 0
    //    (0xFF00) == 0
    //    c is 0
    //
    // Assume (x=10,y=2,z=2;).Expression: z=y=x++ + ++y∗2;
    // Result: 
    //
    //
    return 0;
}
