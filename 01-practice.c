// show the pattern through print statement//

#include<stdio.h>
int main()
{  
  printf(" challenge no.1:show the pattern through print statement\n\n\n");
   printf("right half pyramid\n");
    printf("* \n");
    printf("* * \n");
    printf("* * * \n");
    printf("* * * * \n");
    printf("* * * * * \n"); 

    printf("left half pyramid\n");
    printf("        * \n");
    printf("      * * \n");
    printf("    * * * \n");
    printf("  * * * * \n");
    printf("* * * * * \n");
   
    printf("reverse right half pyramid\n");
    printf("* * * * * \n");
    printf("* * * * \n");
    printf("* * * \n");
    printf("* * \n");
    printf("* \n");

    // show followinf pattern using single print statement//
    printf("challenge no.2 :show followinf pattern using single print statement\n\n\n");
     printf("right half pyramid\n* \n* * \n* * * \n* * * * \n* * * * * \n");
     printf("left half pyramid\n        * \n      * * \n    * * * \n  * * * * \n* * * * * \n");
      printf("reverse right half pyramid\n* * * * * \n* * * * \n* * * \n* * \n* \n");
    
     printf("right half pyramid\n* \n* * \n* * * \n* * * * \n* * * * * \n");
     printf("left half pyramid\n        * \n      * * \n    * * * \n  * * * * \n* * * * * \n");
      printf("reverse right half pyramid\n* * * * * \n* * * * \n* * * \n* * \n* \n");

    // now solving challenge_03//
    printf("solving challenge_03 := Create a program to input name of the person and respond with Welcome NAME to KG Coding \n\n\n");
    printf("Enter your Fname_Lastname: ");
    char name[20];
    scanf(" %20s,",name);
    printf(" \"Welcome!!!... %s to KG coding plateform. \n here we learn practically how we implement coding skills to solve real life problems \"\n\n", name);

  // now solving challenge_04//
  printf("solving challenge_04 := Create a program to declare two integer variables, assign them values, and display their values\n\n");
  int a = 10, b = 20;
  printf("Value of a: %d\n", a);
  printf("Value of b: %d\n\n", b);

  // now solving challenge_05//
  printf("solving challenge_05 := Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.\n\n");
  int ii = 10;
  float ff = 3.4f;
  double dd = 45.552245;
  char ch = 'D';
  printf("value of ii (int): %d, size: %zu bytes\n", ii, sizeof(ii));
  printf("value of ff (float): %f, size: %zu bytes\n", ff, sizeof(ff));
  printf("value of dd (double): %f, size: %zu bytes\n", dd, sizeof(dd));
  printf("value of ch (char): %c, size: %zu byte\n\n", ch, sizeof(ch));

  // now solving challenge_06//
  printf("solving challenge_06 := Create a program to input first and last name of a person and display a welcome message.\n\n");
  char first_name[25];
  char last_name[25];
  printf("Enter your first name: ");
  scanf("%s",first_name);
  printf("Enter your last name: ");
  scanf("%s",last_name);
  printf("Hello !!..., %s %s your most welcome to my this programe!\n\n", first_name, last_name);

   // now solving challenge_07//
 printf("solving challenge_07 := Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.\n\n");
 char First_name[20];
  char Last_name[20];
  int age;
  printf("Enter your first name: ");
  scanf("%s",First_name);
  printf("Enter your last name: ");
  scanf("%s",Last_name);
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Hello, %s %s!\n You are %d years old.\n\n", First_name, Last_name, age);

  // now solving challenge_08//
  printf(" challenge _08:  Create a program to print the area of a square by inputting its side length.\n\n");
  float side_length;
  printf("Enter the side length of the square: ");
  scanf("%f", &side_length);
    // Calculate the area of the square//
    float _area = side_length * side_length;
printf("The area of the square is %f:\n\n", _area);

  // now solving challenge_09//
  printf("challenges _09:  Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.\n\n");
  const float PI = 3.14;
  float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    // Calculate the circumference of the circle//
    float circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %f\n\n", circumference);

     // now solving challenge_10//
     printf("challenges _10:  Create a program to print the area of a circle by inputting its radius.\n\n");
     float rad;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    // Calculate the area of the circle//
    float _6area = PI * rad * rad;
    printf("The area of the circle is: %f\n\n", _6area);
     
    //  now solving challenge_11//
    printf("challenges _11:  Create a program to swap two numbers.\n\n");
    int num1, num2, temp;
    printf("Enter first number: ");
    scanf("%d", &num1); 
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Swapping the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: first number = %d, second number = %d\n",
  num1, num2);
  return 0;
}