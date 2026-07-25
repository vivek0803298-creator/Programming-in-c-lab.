#include <stdio.h>
#include <math.h>
 int main()
{
  // now solving challenge 11 //
  printf("challenge_11:  Create a program for given an integer values and convert them into floating-point values and print both .\n\n");
int a =  56 ;
 float b = (float)a;
printf("This is your first value :  %d  \n", a );

printf("This is your second(floating-point) value :  %f  \n\n", b  );


// now solving challenge_12//
printf("challenge_12:  Create a program that take two numbers and shows their results of all arithmatic operators ( +, -, *, /).\n\n");
float a2 , b2 ;
 printf("Enter your first no. : ", a2);
 scanf("%f", &a2);
printf("Enter your second no. : ", b2);
 scanf("%f", &b2);

   float x = a2+b2 ;
printf( " The addition result of your two no. is  %f : \n ", x );
   float y = a2-b2 ;
printf( " The substraction result of your two  no. is  %f : \n ", y );
  float p = a2 * b2 ;
printf( " The multiplication result of your two no. is  %f : \n ", p  );
float q  = a2 / b2 ;
printf( " The division result of your two  no. is  %f : \n ", q );
float l = (int)a2 % (int)b2 ;
printf( " The modulus result of your two no. is  %f  \n\n ", l );

// now solving challenge_13//
printf("challenge_13:  Create a program that takes two floating-point numbers and shows their multiplication result.\n\n");
float a3   ;
float b3  ;
printf(" Enter your first floating  no. : ", a3 );
scanf("%f" , &a3 );

printf(" Enter your second floating  no. : ", b3 );
scanf("%f" , &b3 );
   
float c = a3 * b3 ;
printf(" Multiplication floating  no. is  %f  :   \n\n", c );

// now solving challenge_14//
printf("challenge_14:  Create a program that calculates the perimeter of a rectangle.\n\n");

float A,B;
printf("enter your length of rectangle : ");
 scanf("%f", &A );

printf("enter your width of rectangle : ");
 scanf("%f", &B);

 float peri = 2 * (A + B) ;
printf("The perimeter of Rectangle  %f = \n\n" , peri );

// now solving challenge_15 simple interest si= (p*r*t)/100 //
printf("challenge_15:  Create a program that calculates the simple interest.\n\n");

float p4 , x4 ,t4 ; 
printf(" Enter your principle amount :  " );
scanf("%f" , &p4 );

printf(" Enter that  how much interest rate per year you want  :  " );
scanf("%f" , &x4);

float r = x4/100 ;
printf(" That is your  interest rate you  will get per year = %f   \n" , r );

printf(" Enter time (for how much long you want to put your money) :  "  );
scanf("%f" , &t4 );

float I = ( p4* r * t4);

printf("your interest amount is = %2f  \n ", I );

float a7 = p4+ I ;
printf("Your total amount is  = %f  \n\n" , a7 );

// now solving challenge_16 compound interest = p (1 + r/ 100)^t //
printf("challenge_16:  Create a program that calculates the compound interest.\n\n");

float p5 , x5 ,t5 ;
printf(" Enter your principle amount :  " );
scanf("%f" , &p5 );

printf(" Enter that  how much interest rate per year you want  :  " );
scanf("%f" , &x5);

 float r8 = x5/100 ;
printf("That is your interest rate you  will get per year = %f \n " , r8 );

printf(" Enter time (for how much long you want to put your money) :  "  );
scanf("%f" , &t5 );

float compound_interest = p5 * pow(1+r8,t5);
 printf("your total amount is = %f  \n\n", compound_interest ); 

   // now solving challenge_17//
printf("challenge_17:  Create a program to convert temperature from fahrenheit to celsius.\n\n");
float fahrenheit, celsius;
printf("Enter temperature in Fahrenheit: ");
scanf("%f", &fahrenheit);
  celsius = (fahrenheit-32) *5/9 ;

  printf("Temperature in Celsius: %f ", celsius);
 



return 0; 

}

