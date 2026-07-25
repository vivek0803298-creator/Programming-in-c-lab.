    // challenges _ 18 : (if ,ifelse,elseif, nested if) practice . //

    #include <stdio.h>
    #include <string.h>
    int main()
    {
       printf("challenge_18:  Create a program to check if a number is positive, negative, or zero. Build ARTO workflow.\n\n");

      int age ;
      char x[10];
      printf("Your most welcome!!.. to an official website of ARTO by the goverment of india . Make you licence and get your driving licence in a few days . Drive safe and be safe .\n");

      printf("Enter your nationality .\nare you an indian citizen (yes/no): ");
      scanf(" %s", x);

      
    if (strcmp(x, "yes") == 0) {
      printf(" Welcome !....  indian citizens .\n");

      printf(" PLease! Enter your age: ");
      scanf("%d", &age);

    
      if (age>=18 && age< 70)
      {
        printf("You are eligible for driving licence .\n please! fill the form and submit it to the ARTO office .\n Thank you for your time and have a safe drive .\n");
      } else if (age<18)
      {
          printf("You are too young. so; you are not eligible for driving licence .\n");
      } else if (age>=70)
      {
          printf("You are too old. so; you are not eligible for driving licence .\n");
      }
      
      else
      {
          printf("You are not eligible for driving licence .\n");
      }
      
    }

    else{
      printf("Sorry!.. you are not indian citizen .\n You can't apply for driving licence .\n\n");
    }

      // practice of switch case statement //
      char month ;
      printf("Enter any character in between a to l:");
      scanf(" %c", &month);
      switch (month){
        case 'a':
        printf("This is a january monmth.\n");
        break;
        case 'b':
        printf("This is a february monmth.\n");
        break;
        case 'c':
        printf("This is a march monmth.\n");
        break;
        case 'd':
        printf("This is a april monmth.\n");
        break;
        case 'e':
        printf("This is a may monmth.\n");
        break;
        case 'f':
        printf("This is a june monmth.\n");
        break;
        case 'g':
        printf("This is a july monmth.\n");
        break;
        case 'h':
        printf("This is a august monmth.\n");
        break;
        case 'i':
        printf("This is a september monmth.\n");
        break;
        case 'j':
        printf("This is a october monmth.\n");
        break;
        case 'k':
        printf("This is a november monmth.\n");
        break;
        case 'l':
        printf("This is a december monmth.\n");
        break;
        default:
        printf("This is not a valid character.\n");
        break;
      }

          //challenge- practing ternary operator & go to statement .//
      int p ;
      printf("enter a number:");
      scanf("%d", &p);
      (p>=7) ? printf("This is a number you have to enter for the right output.\n") :  printf(" you have enterd a wrong no. please! enter the again.\n\n");//ternary operator example - its use if we have to take a dicision in one line.

      int user_input,user_pin=247;
      user_input:// label statement.
      
     printf("Please! enter you provided pin number to access your account: ");
      scanf("%d", &user_input);
    if (user_input==user_pin){
      printf("You have entered the correct pin number. it take some time to process your request.\n");
    }
    else if (user_input!=user_pin){
      printf("You have entered the wrong pin number. please! enter the correct pin number.\n");
      goto user_input;// goto statement example - its use to jump to a specific point in the program.
    }
    

      return 0;
      };

   