//
//  QuadraticRoots.h
//  Control Constructs
//
//  Created by Darren Hardy on 26/11/2016.
//  Copyright © 2016 Darren Hardy. All rights reserved.
//
#include <stdio.h>
#include <math.h>

QuadraticRoots()
{
    printf("\n\nRunning...QuadraticRoots\n\n");
    
    int a,b,c ; // input variables declared
    int PositiveQuadraticRoot; // Positive root output variable declared
    int NegativeQuadraticRoot; // Negative root output variable declared
    
    PositiveQuadraticRoot = 0;
    NegativeQuadraticRoot = 0;
    
    printf("\nThis program will find the roots of a Quadratic Equation\n\nPlease enter values for a, b, and c\n");
    
    scanf("%i", &a);            //Request input for a
    printf("a = %d\n", a);      //Print out a
    scanf("%i", &b);            //Request input for b
    printf("b = %d\n", b);      //Print out b
    scanf("%i", &c);            //Request input for c
    printf("c = %d\n\n", c);    //Print out c
    
    PositiveQuadraticRoot = (-b + (sqrt ( (b*b) - (4 * a * c) ) ) / (2 * a));
    NegativeQuadraticRoot = (-b - (sqrt ( (b*b) - (4 * a * c) ) ) / (2 * a));

    printf("The positive root is: %d\n", PositiveQuadraticRoot);
    printf("The negative root is: %d\n", NegativeQuadraticRoot);
    
    // If quadratic a = 8, b = 16, c = 1 then roots = -0.0645   1.9354 for testing
    
    return 0;

}
