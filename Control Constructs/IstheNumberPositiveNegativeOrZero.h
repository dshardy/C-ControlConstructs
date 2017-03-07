//
//  IstheNumberPositiveNegativeOrZero.h
//  Control Constructs
//
//  Created by Darren Hardy on 26/11/2016.
//  Copyright © 2016 Darren Hardy. All rights reserved.
//
IstheNumberPositiveNegativeOrZero()
{
    printf("\n\nRunning...IstheNumberPositiveNegativeOrZero\n\n");

    int dhIsNumPosZeroNeg; //---Declare a varialble in Ram to hold the users input
    
    printf("Please type in a number\n");
    
    scanf( "%i",& dhIsNumPosZeroNeg); //---request keyboard input of a number
    
    if (dhIsNumPosZeroNeg > 0) {
        printf("The number is positive\n");
    }
    
    else if (dhIsNumPosZeroNeg < 0) {
        printf("The number is negative\n");
    }
    
    else if ((dhIsNumPosZeroNeg = 0)) {
        printf("The number is zero\n");
    }
    
  
    return 0;
}


