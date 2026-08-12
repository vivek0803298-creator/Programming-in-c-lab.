#include<stdio.h>
#include<string.h>
int main(){
       
        // challenge_43 //

    printf("Create a program that prompts the user to enter a positive number. Use a do-while loop to keep asking for the number until the user enters a valid positive number.\n\n");
    int x2;
    do{
      printf("Enter the correct passkey to unlock the security Box: ");
      scanf("%d",&x2);
      if(x2!=24745){
        printf("Please enter the correct passkey.\n\n");
      }
    }while(x2!=24745);

    printf("\n Congrates !... finalluy you Entered t6he correct passkey");


               // challenge_44 //
      printf(" Develop a program that calculates the sum of all numbers enter by a user until the user enters 0. The total sum should then be displayed\n\n");
      printf("Welcome!.. your in this Addition numerals Calculator.\n ");
      int x3,_sum=0;
      do{
        printf("Enter the numbers you want to Calculate the sum : ");
        scanf("%d",&x3);
        _sum+=x3;

      }while(x3!=0);

      printf("The Sum of you Entered numbers is %d .",_sum);

                // challenge_45  //

      printf(" Create a program using for loop multiplication table for any number. \n\n");
       
      printf("Welcome Back! here you will get Table of any no. whetever you want.\n");
      float x4;
      printf("Enter that no. which you want to print the table : ");
      scanf("%f",&x4);

      for(int y=1;y<=10;y++){
        printf("%.2f x %d is = %.2f \n",x4,y,x4*y);
      }

                // challenge_46  //
        printf("Create a program using for to display if a number is prime or not.\n\n");
        int x5;
        printf("Welcome! Please Enter the number which you want to c heck it is Prime or not: ");
        scanf("%d",&x5);
        for(int y1=2;y1<x5;y1++){
          if(x5%y1==0){
            printf("%d is not a Prime Number.\n",x5);
            return 0;
          }
        }
        printf("Congrates!.. %d is a Prime Number.\n",x5);

                  // challenge_47  //
      printf("Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers\n\n");
      printf("Welcome! you in addition of only positive no. if you Enterd negative it skip that negative no.\n");
      int x6,sum3=0;
      do{
      printf("Please! Enter The number: ");
      scanf("%d",&x6);
      if(x6<0){
        continue ;
      }
      sum3+=x6;
    } while(x6!=0);
        
    printf("The Sum of All Positive no. is: %d\n",sum3);

    
                  //  challenge_48  //
      printf("Create a program using continue to print only even numbers using continue for odd numbers..\n\n");
      int num4,_sum2=0;
      printf("Welcome!.. your in Addition on only Even no.\n");
      do{
        printf("Please! Enter number to Addition on only Even no. : ");
        scanf("%d",&num4);
        if(num4%2==0){_sum2+=num4;}
        if(num4%2!=0){
          continue ;
        }
      }while(num4>1);

      printf("The Sum of all Entered0 Even Number is : %d ",_sum2);


                //   challenge_49  //
      printf(" Write a program that continuously reads integers from the user and prints their squares. Use an infinite loop and a break statement to exit when a special number (e.g., -1) is entered.\n\n");

      int _num1,_sq=0;
      printf("Welcome!.. you in the Squring a integer no.\n");
      while(_num1>=0 || _num1<0){
        printf("Enter the number you want to get it Square : ");
        scanf("%d",&_num1);
        _sq=_num1*_num1;
        
        printf("The Square of no. is : %d \n\n",_sq);
        _sq++;

        if(_num1==-1){
          break;
        }

      }
    return 0;
    }
