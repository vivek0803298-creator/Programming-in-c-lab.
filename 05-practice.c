#include<stdio.h>
#include<string.h>
int main(){
       // challenge_31 //
   printf("Develop a programe that prints the multiplication table for given no.\n\n");

  int a;
    printf("Enter the no. you want to find the table of it :");
  scanf("%d",&a);
  int i=1;
  while(i<=10){
    printf("%d x %d = %d\n",a,i,a*i);
    i++;
  }


// challenge_32 //

printf("create a programe to sum all odd no. from 1 to a specified number n.\n\n");

int b=1;
int sum=0;
while(b<=100){
  if(b%2==1){
    printf("%d\n",b);
    sum+=b;
  }
 b++;
}

printf("The sum of all odd numbers from 1 to 100 is: %d\n", sum);



// challenge_33 //


printf(" Write a function that calculates the factorial of a given number.\n\n");
int c;
printf("Welcome! Enter the number to find its factorial :");
scanf("%d", &c);
int fact=1;
int d=1;
while(d<=c){
  fact*=d;
  d++;
}
printf("The factorial of %d is: %d\n", c, fact); 


       //challenge_34 //
printf(" Create a program that computes the sum of the digits of an integer.\n\n");
int e;
printf("Enter the number to find the sum of its digits :");
scanf("%d",&e);
int sum1=0;
while(e!=0){
  sum1+=e%10;
  e/=10;
}
printf("The sum of the digits of the number is: %d\n", sum1); 

      // challenge_35 //
printf("Create a program to find the Least Common Multiple (LCM) of two numbers.\n\n");

int g, h;
printf(" Welcome to LCM calculator.\n");
printf("Enter the numbers to find its LCM .\n");
printf("Enter the first number :");
scanf("%d",&g);
printf("Enter the second number :");
scanf("%d",&h);

int min = (g < h) ? g : h; // Start from the smaller number
int max = g*h; // Start from the larger number
for(; min<=max ; min++){
  if(min%g==0 && min%h==0){
    printf("The LCM of %d and %d is: %d\n", g, h, min);
    break;
  }
}

       // challenge_36 //
printf("Create a program to find the Greatest Common Divisor (GCD) of two integers.\n\n");

int j,k ;
printf(" Welcome to GCD calculator.\n");
printf("Enter the numbers to find its GCD .\n");
printf("Enter the first number :");
scanf("%d",&k);
printf("Enter the second number :");
scanf("%d",&j);

int min1 = (j < k) ? j : k; // Start from the smaller number
int max2 = min1;
for(;max2>=1 ; max2--){
  if(j%max2==0 && k%max2==0){
    printf("The GCD of %d and %d is: %d\n", j, k, max2);
    break;
  }

}

            // challenge_37 //
  printf(" Create a program to check whether a given number is prime using while.\n\n");
  int l;
  printf("Enter the number to check if it is prime: ");
  scanf("%d",&l);
  int isPrime=2;
  while(isPrime<l){
    if(l%isPrime==0){
      printf("%d is not a prime number.\n", l);
      return 0;
    }
    isPrime++;
 }
printf("%d is a prime number.\n", l);


              // challenge_38 //
  printf("Create a program to reverse the digits of a number.\n\n");
  int num1;
  printf("Enter the number to reverse its digits: ");
  scanf("%d",&num1);
  int reversed=0;
  while(num1!=0){
    reversed=reversed*10+num1%10;
    num1/=10;
  }
  printf("The reversed number is: %d\n", reversed);


            // challenge _39 //
  printf("Create a program to print the Fibonacci series up to a certain number.\n\n");
  int num2;
  printf("Enter the number to print the Fibonacci series up to: ");
  scanf("%d",&num2);
  int first=0 ,second=1,next;
while(first<=num2){
  printf("%d",first);
  next=first+second;
  first=second;
  second=next;
}

           // challenge_40 //
  printf(" Create a program to check if a number is an Armstrong number.\n\n");
  int num3;
   printf("welcome! Enter the number to check if it is an Armstrong number: ");
   scanf("%d",&num3);
int digit=0,sum2=0,temp2=num3;
while(num3!=0){
  digit=num3%10;
  sum2+=digit*digit*digit;
  num3/=10;
}
if(sum2==temp2){
  printf("%d is an Armstrong number.\n", temp2);
}
else{
  printf("%d is not an Armstrong number.\n", temp2);
}


          // challenge_41 //
  printf("Create a program to verify if a number is a palindrome.\n\n");
  int num4;
  printf("Welcome! Enter the number to check if it is a palindrome: ");
  scanf("%d",&num4);
  int reversed1=0,copy=num4;
  while(copy>0){
    reversed1=reversed1*10+copy%10;
    copy/=10;
  }
  if(reversed1==num4){
    printf("%d is a palindrome number.\n", num4);
  }
  else{
    printf("%d is not a palindrome number.\n", num4);
  }
 
          // challenge_42 //

  printf("Create a program that print patterns:\n\n");
  int rows;
  printf("Welcome! Enter the number of rows for the pattern: ");
  scanf("%d",&rows);
  printf("Here is your Right-angled triangle pattern:\n");
  for(int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++){
      printf("* ");
    }
    printf("\n");
  }
  printf("welocome ! Here are your left half pyramid patterns:\n"); 
  for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows-i;j++){
      printf("  ");
    }
    for(int j=1;j<=i;j++){
      printf("* ");
    }
    printf("\n");
  }
  printf("Here is your Inverted Right-angled triangle pattern:\n");
  for(int i=rows;i>=1;i--){
    for(int j=1;j<=i;j++){
      printf("* ");
    }
    printf("\n");
  }

          

      return 0;
    }
