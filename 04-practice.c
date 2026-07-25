#include <stdio.h>
int main()
{
  // now solving challenge 19 //
  printf("challenge_19:  Create a program that  determine if a no. is positive, negative, or zero.\n\n");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num>0){
    printf("The number is positive.\n");
  }
  else if (num<0){
    printf("The number is negative.\n");
  }
  else{
    printf("The number is zero.\n");
  }

    // now solving challenge 20 //
  printf("challenge 20: create a program that determine if a number is even or odd.\n\n");
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  if (number%2==0){
    printf("The number is even.\n");
  }
  else{
    printf("The number is odd.\n");
  } 

    // now solving challenge 21 //
  printf("challenge 21: create a program that determines the greatest of three numbers.\n\n");
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a>b && a>c){
    printf("The greatest number is %d.\n", a);
  }
  else if (b>a && b>c){
    printf("The greatest number is %d.\n", b);
  }
  else{
    printf("The greatest number is %d.\n", c);
  }

  if (a==b && b==c){
    printf("All three numbers are equal.\n");
  }

     // now solving challenge 22 //
  printf("challenge 22: create a program that determines if a given year is a leap year(consider codition like divisible by 4 but not 100 ,unless also divisible by 400).\n\n");
  int year;
  printf("Enter a year whatever in your mind for checking it is leap  year or not: ");
  scanf("%d", &year);

if (year%4==0 && year%100!=0 || year%400==0){

  printf("%d is a leap year.\n", year);
}
else{
  printf("%d is not a leap year.\n", year);
}

    // now solving challenge 23 //
  printf("challenge 23: create a program that calculate grade based on marks.\n\n");
  int marks;
  printf("Please! enter your sessional exam marks out of 100 . To calculate the Percrntage of yours : ");
  scanf("%d",&marks);

   if (marks >= 85){
    printf ("your Percentage is above 90 . your performance is very good in this exam." ,marks);
  }
  else if (marks >=70 && marks< 85){
    printf("your Percentage is above 75 . your performance is good in this sessional exam , please ! take care little bit.",marks);
  }
  else if (marks >=60 && marks< 70){
    printf("your Percentage is above 60 . your performance is well in this sessional exam , please ! do work on yourself.",marks);
  }
  else if (marks >=40 && marks< 60){
    printf("your Percentageis above 30 . your performance is bad in this sessional exam , please ! try much harde.",marks);
  }
  else{
    printf("your Percentage is less than 30 . your performance is very bad bad in this sessional exam , you have to think about yourself andf your future.",marks);
  }

    // challenge _ 24 //
     printf("create a programe that categorised a person into diffrent age groups\n\n");

     int age;
     printf("enter your age to identify your age groups : ");
     if (scanf("%d",&age) != 1 || age<0){
    printf("please! enter your age correctly.\n");
       return 0;
      }

  if (age<=13){
    printf("your age group is CHILD..\n",age);
  }
  else if (age<=20 && age >13){
    printf("your age group is TEEN.\n",age);
  }
  else if (age<=60 && age >20){
    printf("your age group is ADULT.\n",age);
  }
  else if ( age>=60){
    printf("your age group is SENIOR.\n",age);
  }

  // challenge _25 //
printf("create a programe to find the minimum of two Numbers using ternary operator.\n\n");
int F_num , S_num;
printf("Please ! enter two diffrent number : ");
scanf("%d %d",&F_num,&S_num);

(F_num>S_num)?printf("so the  minumum no is : %d\n",S_num):printf("so the minimum no. is : %d\n",F_num);
      //  challenge _ 26 //
    printf("create a programe to find if the given no. is even or odd using ternary operator.\n\n");
 int ven;
 printf("enter two no. to check that which one is odd and which is even : ");
  scanf(" %d",&ven);

   (ven%2==0)?printf("the entered no. is even ."):printf("the entered no. is odd.");

    //    challenge _27  //
printf("create a programe for to calculation of absolute value of given integer using ternary operator.\n\n");

int absl;
printf("Enter any integral value : ");
scanf("%d", &absl);
(absl>=0)?printf("absolute value is = %d ",absl):printf("absolute value is = %d .\n",absl*-1);

        //  challenge _ 28  //

  printf("Create a program to classify a student's score as \"High\", \"Moderate\", or \"Low\" using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).\n\n");

  int score;
  printf("enter your score: ");
  scanf("%d",&score);
   // nested turnery operator  //
  (score>=80)?printf("your score is high.\n"):(score>=50 && score<80)?printf("your score is moderate."):printf("your score is low.");

        //  challenge _ 29  //
        printf("create a programe to create a simple calculator that uses a switch statement to       perform basic arithmatic operations like addition,sub,multiplication and division.\n\n");

int cal,l_nam ;
char pt;
printf("Enter the operation (+,-.* and /): \n");
scanf("%c",&pt);
printf("enter any two numbers to perform calculation : ");
 scanf("%d %d",&cal,&l_nam);

 switch (pt){
   case '+' :
            printf("Result of addition is : %d \n",cal+l_nam);
            break;
            case '-' :
            printf("Result of substraction is : %d \n",cal-l_nam);
            break;
            case '*' :
            printf("Result of multipication  is : %d \n",cal*l_nam);
            break;
            case '/' :
            printf("Result of division  is : %d \n",cal/l_nam);
            break;

 }
  
 return 0;
}