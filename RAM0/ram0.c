// using sdcc80 1.99c

// assembly files are in ram0Z.asm as
// indicated by ramMain.lst

// this has been pushed to zpragma.inc
//#pragma output CRT_ORG_CODE = 49152

//be sure to bank to this slot if you
//plan on using other banks

//we are just putting functions here

//PLACE ASSEMBLY VARIABLES HERE
//HAVE AT LEAST ONE VARIABLE DEFINED AS AN ASM VARIABLE

//if this is before any custom headers
//it will set everything below it to be
//in the correct memory slot

# define M_PI_M     3.14159	// pi
# define N_PI       -3.14159 //negative PI
# define M_PI_2_M   1.57079	// pi / 2
# define M_2XPI     6.28318 // pi * 2
# define M_PI_4_M   12.56636 // pi * 4
#define degree2radian2(a) (a * 00.01745)
#define radian2degree2(a) (a * 57.29578)
#define ABS(N) ((N<0)?(-N):(N))



#include <stdlib.h>//standard library
#include <stdio.h>//standard input output
#include <input.h>//used for detecting key inputs
#include <math.h>



static void naked_placement_in_RAM0(void) __naked
{
__asm
    SECTION BANK_00
__endasm;
}



#include "externs.h"
#include "variables.h"
#include "ram0.h"

// do not have main() here at all since
// we are just compiling to object files
// you will get a RET inserted automatically


// Normalizes any number to an arbitrary range
// by assuming the range wraps around when going below min or above max
float normalize(float value, float start, float end)
{
  float width       = end - start   ;   //
  float offsetValue = value - start ;   // value relative to 0

  return ( offsetValue - ( floor( offsetValue / width ) * width ) ) + start ;
  // + start to reset back to start of original range
}








//must have blank line at end
