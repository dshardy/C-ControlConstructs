//
//  main.c
//  Control Constructs
//
//  Created by Darren Hardy on 25/11/2016.
//  Copyright © 2016 Darren Hardy. All rights reserved.
//

// On a mac, the hash symbol is 'function' 'Alt' '3'


#include <stdio.h>

#include "IstheNumberPositiveNegativeOrZero.h"
#include "QuadraticRoots.h"
#include "WeekdayOrWeekend.h"
//--switch
#include "WhatSeason.h"
#include "TimesTables.h"
#include "CalculateFactorials.h"
#include "TemperatureConversion.h"
#include "TemperatureConversionWithLimits.h"
#include "SmallestValueofTenKeyboardNumbers.h"
#include "SmallestValueofTenKeyboardNumbersWithWhileLoop.h"
#include "EnterAPositiveNumberPlease.h"
#include "NonNegativeNumbers.h"
#include "XSqrYSqrEqualsZSpr.h"
#include "KeyboardInBinaryOut.h"



//--------------------------------------------------------------

int main()
{
    ConstructSelector();
    return 0;

}

//--------------------------------------------------------------

        ConstructSelector()

{
        printf("\nPlease select a function to run \n");
    
        printf("\n0.  Exit the program\n");
        printf("1.  IstheNumberPositiveNegativeOrZero\n");
        printf("2.  QuadraticRoots\n");
        printf("3.  WeekdayOrWeekend\n");
        printf("4.  WhatSeason\n");
        printf("5.  TimesTables\n");
        printf("6.  CalculateFactorials\n");
        printf("7.  TemperatureConversion\n");
        printf("8.  TemperatureConversionWithLimits\n");
        printf("9.  SmallestValueofTenKeyboardNumbers\n");
        printf("10. SmallestValueofTenKeyboardNumbersWithWhileLoop\n");
        printf("11. EnterAPositiveNumberPlease\n");
        printf("12. NonNegativeNumbers\n");
        printf("13. XSqrYSqrEqualsZSpr\n");
        printf("14. KeyboardInBinaryOut\n");

    int dhFunctionSelection;
    
    scanf("%d", &dhFunctionSelection);
    
    switch (dhFunctionSelection) {
        case 0: return 0; break;
        case 1: IstheNumberPositiveNegativeOrZero(); break;
        case 2: QuadraticRoots(); break;
        case 3: WeekdayOrWeekend(); break;
        case 4: WhatSeason (); break;
        case 5: TimesTables (); break;
        case 6: CalculateFactorials (); break;
        case 7: TemperatureConversion (); break;
        case 8: TemperatureConversionWithLimits (); break;
        case 9: SmallestValueofTenKeyboardNumbers (); break;
        case 10: SmallestValueofTenKeyboardNumbersWithWhileLoop (); break;
        case 11: EnterAPositiveNumberPlease (); break;
        case 12: NonNegativeNumbers (); break;
        case 13: XSqrYSqrEqualsZSpr (); break;
        case 14: KeyboardInBinaryOut (); break;
        default:
            printf("\nPlease select a function to run or select zero to exit\n");
            ConstructSelector();
        break;
    }

    return 0;
}








