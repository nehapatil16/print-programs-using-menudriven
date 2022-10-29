#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  MainMenu:
  do
  {
    clrscr();
    printf("\n\n\t\t--***  WELCOME TO MENU DRIVEN PROGRAM...!  ***--");
    printf("\n\n\n================= *************** MAIN MENU *************** ===================");
    printf("\n\n\n\t1. ARITHMETIC OPERATIONS");
    printf("\t\t2. IF-ELSE PROGRAMS");
    printf("\n\n\t3. LOOPS PROGRAMS");
    printf("\t\t\t4. EXIT");
    printf("\n\n--------------------------------------------------------------------------------");
    printf("\n\n\tEnter your Choice : ");
    scanf(" %c",&ch);
    switch(ch)
    {
      case '1':
        ArithmeticMenu:
        do
        {
          clrscr();
          printf("\n\n============ *********** ARITHMETIC OPERATIONS MENU *********** ===============");
          printf("\n\n\n\t1.BASIC OPERATIONS");
          printf("\t\t\t2.SQUARE & CUBE");
          printf("\n\n\t3.CONVERSION PROGRAM");
          printf("\t\t\t4.AREA & PERIMETER");
          printf("\n\n\t5.SWAPPING OF NUMBERS");
          printf("\t\t\t6.BACK TO MAIN MENU");
          printf("\n\n\t7.EXIT");
          printf("\n\n\n-------------------------------------------------------------------------------");
          printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
          printf("\n-------------------------------------------------------------------------------");
          printf("\n\n\tEnter your Choice : ");
          scanf(" %c",&ch);
          if(ch == 'm' || ch == 'M')
            goto MainMenu;
          else if(ch == 'p' || ch == 'P')
            goto MainMenu;
          else if(ch == 'x' || ch == 'X')
            exit(0);
          switch(ch)
          {
            case '1':
              BasicOperationMenu:
              do
              {
                clrscr();
                printf("\n\n============= ************* BASIC OPERATION MENU ************** ================");
                printf("\n\n\t1.ADDITION");
                printf("\t\t\t\t2.SUBTRACTION");
                printf("\n\n\t3.MULTIPLICATION");
                printf("\t\t\t4.DIVISION");
                printf("\n\n\t5.BACK TO ARITHMETIC MENU");
                printf("\t\t6.BACK TO MAIN MENU");
                printf("\n\n\t7.EXIT");
                printf("\n\n\n-------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto ArithmeticMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    do
                    {
                      clrscr();
                      printf("\n\n================ ************** ADDITION MENU ************** ==================");
                      printf("\n\n\n\t1.ADDITION OF INTEGERS");
                      printf("\t\t\t2.ADDITION OF FLOATS");
                      printf("\n\n\t3.BACK TO BASIC OPERATION MENU");
                      printf("\t\t4.BACK TO ARITHMETIC MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n-------------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto BasicOperationMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t\t--**** PROGRAM TO PRINT ADDITION OF TWO INTEGERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n======= ******* ADDITION OF TWO INTEGERS ******* =======\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tprintf(\"\\n\\n\\tAddition of %%d and %%d  \\t: %%d\",fno,sno,fno+sno);\n");
                          printf("\tgetch();\n}");
                          printf("\n-------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t\t--**** PROGRAM TO PRINT ADDITION OF TWO FLOATS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tfloat no1,no2;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n======= ******* ADDITION OF TWO FLOATS ******* =======\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no1);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no2);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tprintf(\"\\n\\n\\tAddition of %%.2f and %%.2f  \\t: %%.2f\",no1,no2,no1+no2);\n");
                          printf("\tgetch();\n}");
                          printf("\n-------------------------------------------------------------------------------");
                          break;

                        case '3': goto BasicOperationMenu;
                        case '4': goto ArithmeticMenu;
                        case '5': goto MainMenu;
                        case '6': exit(0);
                        default : printf("\n\n\tPlease enter valid Choice...");
                      }
                      printf("\n\n\nDo you want to Continue Addition Menu (y/n)...");
                      scanf(" %c",&ch);
                    }while(ch == 'Y' || ch == 'y');
                    break;

                  case '2':
                    do
                    {
                      clrscr();
                      printf("\n\n================= ************* SUBTRACTION MENU ************* ================");
                      printf("\n\n\n\t1.SUBTRACTION OF INTEGERS");
                      printf("\t\t2.SUBTRACTION OF FLOATS");
                      printf("\n\n\t3.BACK TO BASIC OPERATION MENU");
                      printf("\t\t4.BACK TO ARITHMETIC MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n-------------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n--------------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto BasicOperationMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t\t--**** PROGRAM TO PRINT SUBTRACTION OF TWO INTEGERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n===== ****** SUBTRACTION OF TWO INTEGERS ****** =====\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tprintf(\"\\n\\n\\tSubtraction of %%d and %%d  \\t: %%d\",fno,sno,fno-sno);\n");
                          printf("\tgetch();\n}");
                          printf("\n-------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t\t--**** PROGRAM TO PRINT SUBTRACTION OF TWO FLOATS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tfloat no1,no2;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n====== ******* SUBTRACTION OF TWO FLOATS ******* ======\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no1);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no2);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tprintf(\"\\n\\n\\tSubtraction of %%.2f and %%.2f  \\t: %%.2f\",no1,no2,no1-no2);\n");
                          printf("\tgetch();\n}");
                          printf("\n-------------------------------------------------------------------------------");
                          break;

                        case '3': goto BasicOperationMenu;
                        case '4': goto ArithmeticMenu;
                        case '5': goto MainMenu;
                        case '6': exit(0);
                        default : printf("\n\n\tPlease enter valid Choice...");
                      }
                      printf("\n\n\nDo you want to Continue Subtraction Menu (y/n)...");
                      scanf(" %c",&ch);
                    }while(ch == 'Y' || ch == 'y');
                    break;

                  case '3':
                    do
                    {
                      clrscr();
                      printf("\n\n============= ************* MULTIPLICATION MENU ************** ===============");
                      printf("\n\n\n\t1.MULTIPLICATION OF INTEGERS");
                      printf("\t\t2.MULTIPLICATION OF FLOATS");
                      printf("\n\n\t3.BACK TO BASIC OPERATION MENU");
                      printf("\t\t4.BACK TO ARITHMETIC MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n-----------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-----------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto BasicOperationMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO PRINT MULTIPLICATION OF TWO INTEGERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n===== ****** MULTIPLICATION OF TWO INTEGERS ****** =====\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tprintf(\"\\n\\n\\tMultiplication of %%d and %%d \\t: %%d\",fno,sno,fno*sno);\n");
                          printf("\tgetch();\n}");
                          printf("\n-------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO PRINT MULTIPLICATION OF TWO FLOATS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tfloat no1,no2;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n===== ****** MULTIPLICATION OF TWO FLOATS ****** =====\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no1);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no2);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tprintf(\"\\n\\tMultiplication of %%.2f and %%.2f \\t: %%.2f\",no1,no2,no1*no2);\n");
                          printf("\tgetch();\n}");
                          printf("\n-------------------------------------------------------------------------------");
                          break;

                        case '3': goto BasicOperationMenu;
                        case '4': goto ArithmeticMenu;
                        case '5': goto MainMenu;
                        case '6': exit(0);
                        default : printf("\n\n\tPlease enter valid Choice...");
                      }
                      printf("\n\n\nDo you want to Continue Multiplication Menu (y/n)...");
                      scanf(" %c",&ch);
                    }while(ch == 'Y' || ch == 'y');
                    break;

                  case '4':
                    do
                    {
                      clrscr();
                      printf("\n\n================= ************* DIVISION MENU ************** ==================");
                      printf("\n\n\n\t1.DIVISION OF INTEGERS");
                      printf("\t\t\t2.DIVISION OF FLOATS");
                      printf("\n\n\t3.BACK TO BASIC OPERATION MENU");
                      printf("\t\t4.BACK TO ARITHMETIC MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n-------------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto BasicOperationMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO PRINT DIVISION OF TWO INTEGERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n======= ******* DIVISION OF TWO INTEGERS ******* =======\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tprintf(\"\\n\\n\\tDivision of %%d and %%d \\t: %%d\",fno,sno,fno/sno);\n");
                          printf("\tgetch();\n}");
                          printf("\n-------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO PRINT DIVISION OF TWO FLOATS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tfloat no1,no2;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n======= ******* DIVISION OF TWO FLOATS ******* =======\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no1);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no2);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tprintf(\"\\n\\n\\tDivision of %%.2f and %%.2f \\t: %%.2f\",no1,no2,no1/no2);\n");
                          printf("\tgetch();\n}");
                          printf("\n-------------------------------------------------------------------------------");
                          break;
                        case '3': goto BasicOperationMenu;
                        case '4': goto ArithmeticMenu;
                        case '5': goto MainMenu;
                        case '6': exit(0);
                        default : printf("\n\n\tPlease enter valid Choice...");
                      }
                      printf("\n\n\nDo you want to Continue Division Menu (y/n)...");
                      scanf(" %c",&ch);
                    }while(ch =='Y' || ch =='y');
                    break;

                  case '5': goto ArithmeticMenu;
                  case '6': goto MainMenu;
                  case '7': exit(0);
                  default : printf("\n\n\tPlease enter valid Choice...");
                }
                printf("\n\nDo you want to Basic Operation Menu (y/n)...");
                scanf(" %c",&ch);
              }while(ch =='Y' || ch =='y');
              break;

            case '2':
              do
              {
                clrscr();
                printf("\n\n============ ************* SQUARE AND CUBE MENU ************* ================");
                printf("\n\n\n\t1.SQUARE OF INTEGER");
                printf("\t\t\t2.SQUARE OF FLOAT");
                printf("\n\n\t3.CUBE OF INTEGER");
                printf("\t\t\t4.CUBE OF FLOAT");
                printf("\n\n\t5.BACK TO ARITHMETIC MENU");
                printf("\t\t6.BACK TO MAIN MENU");
                printf("\n\n\t7.EXIT");
                printf("\n\n\n-----------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto ArithmeticMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    clrscr();
                    printf("\n\t\t--**** PROGRAM TO PRINT SQUARE OF INTERGER ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n========= ********* SQUARE OF INTEGER ********* ========\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Number\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tprintf(\"\\n\\n\\tSquare of %%d\\t\\t\\t: %%d\",fno,fno*fno);\n");
                    printf("\tgetch();\n}");
                    printf("\n------------------------------------------------------------------------------");
                    break;

                  case '2':
                    clrscr();
                    printf("\n\t\t--**** PROGRAM TO PRINT SQUARE OF FLOAT ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tfloat no1;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n========== ********* SQUARE OF FLOAT ********* =========\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Number\\t\\t: \");\n");
                    printf("\tscanf(\"%%f\",&no1);\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tprintf(\"\\n\\n\\tSquare of %%.2f\\t\\t\\t: %%.2f\",no1,no1*no1);\n");
                    printf("\tgetch();\n}");
                    printf("\n------------------------------------------------------------------------------");
                    break;

                  case '3':
                    clrscr();
                    printf("\n\t\t--**** PROGRAM TO PRINT CUBE OF INTERGER ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n========= ********* CUBE OF INTEGER ********* =========\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Number\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tprintf(\"\\n\\n\\tCube of %%d\\t\\t\\t: %%d\",fno,fno*fno*fno);\n");
                    printf("\tgetch();\n}");
                    printf("\n------------------------------------------------------------------------------");
                    break;

                    case '4':
                      clrscr();
                      printf("\n\t\t--**** PROGRAM TO PRINT CUBE OF FLOAT ****--");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\nvoid main()\n{\n\tfloat no1;\n\tclrscr();\n");
                      printf("\tprintf(\"\\n\\n========== ********* CUBE OF FLOAT ********** =========\");\n");
                      printf("\tprintf(\"\\n\\n\\n\\tEnter the Number\\t\\t: \");\n");
                      printf("\tscanf(\"%%f\",&no1);\n");
                      printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                      printf("\tprintf(\"\\n\\n\\tCube of %%.2f\\t\\t\\t: %%.2f\",no1,no1*no1*no1);\n");
                      printf("\tgetch();\n}");
                      printf("\n------------------------------------------------------------------------------");
                      break;
                    case '5': goto ArithmeticMenu;
                    case '6': goto MainMenu;
                    case '7': exit(0);
                    default : printf("\n\n\tPlease enter valid Choice...");
                  }
                  printf("\n\n\nDo you want to Continue Square and Cube Menu (y/n)...");
                  scanf(" %c",&ch);
                }while(ch == 'Y' || ch == 'y');
                break;

              case '3':
                ConversionMenu:
                do
                {
                  clrscr();
                  printf("\n\n================ ************* CONVERSION MENU ************** ===============");
                  printf("\n\n\n\t1.DISTANCE CONVERSION MENU");
                  printf("\t\t2.TEMPERATURE CONVERSION MENU");
                  printf("\n\n\t3.TIME CONVERSION MENU");
                  printf("\t\t\t4.BACK TO ARITHMETIC MENU");
                  printf("\n\n\t5.BACK TO MAIN MENU");
                  printf("\t\t\t6.EXIT");
                  printf("\n\n\n-------------------------------------------------------------------------------");
                  printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                  printf("\n--------------------------------------------------------------------------------");
                  printf("\n\n\tEnter your Choice : ");
                  scanf(" %c",&ch);
                  if(ch == 'm' || ch == 'M')
                    goto MainMenu;
                  else if(ch == 'p' || ch == 'P')
                    goto ArithmeticMenu;
                  else if(ch == 'x' || ch == 'X')
                    exit(0);
                  switch(ch)
                  {
                    case '1':
                      do
                      {
                        clrscr();
                        printf("\n\n============= ************* DISTANCE CONVERSION MENU ************ ============");
                        printf("\n\n\n\t1.M TO KM CONVERSION");
                        printf("\t\t\t2.KM TO M CONVERSION");
                        printf("\n\n\t3.BACK TO CONVERSION MENU");
                        printf("\t\t4.BACK TO ARITHMETIC MENU");
                        printf("\n\n\t5.BACK TO MAIN MENU");
                        printf("\t\t\t6.EXIT");
                        printf("\n\n\n------------------------------------------------------------------------------");
                        printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                        printf("\n--------------------------------------------------------------------------------");
                        printf("\n\n\tEnter your Choice : ");
                        scanf(" %c",&ch);
                        if(ch == 'm' || ch == 'M')
                          goto MainMenu;
                        else if(ch == 'p' || ch == 'P')
                          goto ConversionMenu;
                        else if(ch == 'x' || ch == 'X')
                          exit(0);
                        switch(ch)
                        {
                          case '1':
                            clrscr();
                            printf("\n\t\t--**** PROGRAM TO PRINT M TO KM CONVERSION ****--");
                            printf("\n-------------------------------------------------------------------------------");
                            printf("\nvoid main()\n{\n\tint mtr;\n\tclrscr();\n");
                            printf("\tprintf(\"\\n\\n========= ******** M TO KM CONVERSION ********* ========\");\n");
                            printf("\tprintf(\"\\n\\n\\n\\tEnter the Distance in Meter\\t\\t: \");\n");
                            printf("\tscanf(\"%%d\",&mtr);\n");
                            printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                            printf("\tprintf(\"\\n\\n\\t%%d M is equal to\\t\\t: %%.2f KM\",mtr,mtr / 1000.0);\n");
                            printf("\tgetch();\n}");
                            printf("\n------------------------------------------------------------------------------");
                            break;

                          case '2':
                            clrscr();
                            printf("\n\t\t--**** PROGRAM TO PRINT KM TO M CONVERSION ****--");
                            printf("\n-------------------------------------------------------------------------------");
                            printf("\nvoid main()\n{\n\tfloat km;\n\tclrscr();\n");
                            printf("\tprintf(\"\\n\\n========= ******** KM TO M CONVERSION ********* ========\");\n");
                            printf("\tprintf(\"\\n\\n\\n\\tEnter the Distance in Kilometer\\t\\t: \");\n");
                            printf("\tscanf(\"%%f\",&km);\n");
                            printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                            printf("\tprintf(\"\\n\\n\\t%%.2f KM is equal to\\t\\t: %%.2f M\",km,km * 1000.0);\n");
                            printf("\tgetch();\n}");
                            printf("\n------------------------------------------------------------------------------");
                            break;

                          case '3': goto ConversionMenu;
                          case '4': goto ArithmeticMenu;
                          case '5': goto MainMenu;
                          case '6': exit(0);
                          default : printf("\n\n\tPlease enter valid Choice...");
                        }
                        printf("\n\n\nDo you want to Continue Distance Conversion Menu (y/n)...");
                        scanf(" %c",&ch);
                      }while(ch == 'Y' || ch == 'y');
                      break;

                    case '2':
                      do
                      {
                        clrscr();
                        printf("\n\n============= *********** TEMPERATURE CONVERSION MENU *********** ============");
                        printf("\n\n\n\t1.FARENHITE TO DEGREE CENTIGRADE");
                        printf("\t2.DEGREE CENTIGRADE TO FARENHITE");
                        printf("\n\t3.BACK TO CONVERSION MENU");
                        printf("\t\t4.BACK TO ARITHMETIC MENU");
                        printf("\n\n\t5.BACK TO MAIN MENU");
                        printf("\t\t\t6.EXIT");
                        printf("\n\n\n-------------------------------------------------------------------------------");
                        printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                        printf("\n-------------------------------------------------------------------------------");
                        printf("\n\n\tEnter your Choice : ");
                        scanf(" %c",&ch);
                        if(ch == 'm' || ch == 'M')
                          goto MainMenu;
                        else if(ch == 'p' || ch == 'P')
                          goto ConversionMenu;
                        else if(ch == 'x' || ch == 'X')
                          exit(0);
                        switch(ch)
                        {
                          case '1':
                            clrscr();
                            printf("\n\t--**** PROGRAM TO PRINT FARENHITE TO DEGREE CONVERSION ****--");
                            printf("\n-------------------------------------------------------------------------------");
                            printf("\nvoid main()\n{\n\tfloat fhr,celcius;\n\tclrscr();\n");
                            printf("\tprintf(\"\\n\\n===== ****** FARENHITE TO DEGREE CONVERSION ****** =====\");\n");
                            printf("\tprintf(\"\\n\\n\\n\\tEnter the Temperature in Farenhite\\t\\t: \");\n");
                            printf("\tscanf(\"%%f\",&fhr);\n");
                            printf("\tcelcius = 5.0/9.0*(fhr-32.0);\n");
                            printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                            printf("\tprintf(\"\\n%%.2f Farenhite equal to\\t: %%.2f Degree Celcius\",fhr,celcius);\n");
                            printf("\tgetch();\n}");
                            printf("\n------------------------------------------------------------------------------");
                            break;

                          case '2':
                            clrscr();
                            printf("\n\t--**** PROGRAM TO PRINT DEGREE CENTIGRADE TO FARENHITE CONVERSION ****--");
                            printf("\n-------------------------------------------------------------------------------");
                            printf("\nvoid main()\n{\n\tfloat fhr,celcius;\n\tclrscr();\n");
                            printf("\tprintf(\"\\n\\n===== ****** DEGREE TO FARENHITE CONVERSION ****** =====\");\n");
                            printf("\tprintf(\"\\n\\n\\n\\tEnter the Temperature in Degree Centigrade\\t\\t: \");\n");
                            printf("\tscanf(\"%%f\",&celcius);\n");
                            printf("\tfhr = celcius*(9.0/5.0)+32.0;\n");
                            printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                            printf("\tprintf(\"\\n%%.2f Degree Celcius equal to\\t: %%.2f Farenhite\",celcius,fhr);\n");
                            printf("\tgetch();\n}");
                            printf("\n------------------------------------------------------------------------------");
                            break;

                          case '3': goto ConversionMenu;
                          case '4': goto ArithmeticMenu;
                          case '5': goto MainMenu;
                          case '6': exit(0);
                          default : printf("\n\n\tPlease enter valid Choice...");
                        }
                        printf("\n\nDo you want to Continue Temperature Conversion Menu (y/n)...");
                        scanf(" %c",&ch);
                      }while(ch == 'Y' || ch == 'y');
                      break;

                    case '3':
                      clrscr();
                      printf("\n\t\t--**** PROGRAM TO PRINT TIME CONVERSION ****--");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\nvoid main()\n{\n\tint sec,min,secs;\n\tclrscr();\n");
                      printf("\tprintf(\"\\n\\n======== ********* TIME CONVERSION ********* ========\");\n");
                      printf("\tprintf(\"\\n\\n\\n\\tEnter the Time in Seconds\\t: \");\n");
                      printf("\tscanf(\"%%d\",&sec);\n");
                      printf("\tmin = sec / 60;\n\tsecs = sec % 60;\n");
                      printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                      printf("\tprintf(\"\\n%%d seconds is equal to  \\t: %%d min %%d sec\",sec,min,secs);\n");
                      printf("\tgetch();\n}");
                      printf("\n------------------------------------------------------------------------------");
                      break;

                    case '4': goto ArithmeticMenu;
                    case '5': goto MainMenu;
                    case '6': exit(0);
                    default : printf("\n\n\tPlease enter valid Choice...");
                  }
                printf("\n\nDo you want to Continue Conversion Menu (y/n)...");
                scanf(" %c",&ch);
              }while(ch == 'Y' || ch == 'y');
              break;

            case '4':
              do
              {
                clrscr();
                printf("\n\n=============== *********** AREA AND PERIMETER MENU ************ =============");
                printf("\n\n\n\t1.AREA & PERIMETER OF SQUARE");
                printf("\t\t2.AREA & PERIMETER OF RECTANGLE");
                printf("\n\n\t3.AREA & PERIMETER OF CIRCLE");
                printf("\t\t4.BACK TO ARITHMETIC MENU");
                printf("\n\n\t5.BACK TO MAIN MENU");
                printf("\t\t\t6.EXIT");
                printf("\n\n\n-------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto ArithmeticMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO PRINT AREA AND PERIMETER OF SQUARE ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno,area,perimeter;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n====== ****** AREA AND PERIMETER OF SQUARE ****** =====\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Side of Square\\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tarea = fno * fno;\n\tperimeter = 4*fno;\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tprintf(\"\\nArea of Square\\t\\t\\t: %%d\",area);\n");
                    printf("\tprintf(\"\\nPerimeter of Square\\t\\t\\t: %%d\",perimeter);\n");
                    printf("\tgetch();\n}");
                    printf("\n------------------------------------------------------------------------------");
                    break;

                   case '2':
                     clrscr();
                     printf("\n\t--**** PROGRAM TO PRINT AREA AND PERIMETER OF RECTANGLE ****--");
                     printf("\n-------------------------------------------------------------------------------");
                     printf("\nvoid main()\n{\n\tint length,width,area,perimeter;\n\tclrscr();\n");
                     printf("\tprintf(\"\\n\\n===== ***** AREA AND PERIMETER OF RECTANGLE ***** =====\");\n");
                     printf("\tprintf(\"\\n\\n\\n\\tEnter the Length\\t\\t: \");\n");
                     printf("\tscanf(\"%%d\",&length);\n");
                     printf("\tprintf(\"\\n\\n\\n\\tEnter the Width\\t\\t: \");\n");
                     printf("\tscanf(\"%%d\",&width);\n");
                     printf("\tarea = length * width;\n\tperimeter = 2 * (length+width);\n");
                     printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                     printf("\tprintf(\"\\nArea of Rectangle\\t\\t: %%d\",area);\n");
                     printf("\tprintf(\"\\nPerimeter of Rectangle\\t\\t\\t: %%d\",perimeter);\n");
                     printf("\tgetch();\n}");
                     printf("\n------------------------------------------------------------------------------");
                     break;

                   case '3':
                     clrscr();
                     printf("\n\t--**** PROGRAM TO PRINT AREA AND PERIMETER OF CIRCLE ****--");
                     printf("\n-------------------------------------------------------------------------------");
                     printf("\nvoid main()\n{\n\tint rad;\n\tfloat area,perimeter;\n\tclrscr();\n");
                     printf("\tprintf(\"\\n\\n====== ****** AREA AND PERIMETER OF CIRCLE ****** =====\");\n");
                     printf("\tprintf(\"\\n\\n\\n\\tEnter the Radius\\t: \");\n");
                     printf("\tscanf(\"%%d\",&rad);\n");
                     printf("\tarea = 3.14 * rad * rad;\n\tperimeter = 2 * 3.14 * rad;\n");
                     printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                     printf("\tprintf(\"\\nArea of Circle\\t\\t\\t: %%.2f\",area);\n");
                     printf("\tprintf(\"\\nPerimeter of Circle\\t\\t\\t: %%.2f\",perimeter);\n");
                     printf("\tgetch();\n}");
                     printf("\n------------------------------------------------------------------------------");
                     break;

                  case '4':goto ArithmeticMenu;
                  case '5':goto MainMenu;
                  case '6':exit(0);
                  default : printf("\n\n\tPlease enter valid Choice...");
                }
                printf("\n\nDo you want to Continue Area and Perimeter Menu (y/n)...");
                scanf(" %c",&ch);
              }while(ch == 'Y' || ch == 'y');
              break;

            case '5':
              do
              {
                clrscr();
                printf("\n\n============= ************* SWAPPING NUMBERS MENU ************* ==============");
                printf("\n\n\n\t1.SWAPPING OF TWO NUMBERS");
                printf("\t\t2.SWAPPING OF THREE NUMBERS");
                printf("\n\n\t3.BACK TO ARITHMETIC MENU");
                printf("\t\t4.BACK TO MAIN MENU");
                printf("\n\n\t5.EXIT");
                printf("\n\n\n-------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto ArithmeticMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO PRINT SWAPPING OF TWO NUMBERS ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno,sno,temp;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n======= ******* SWAPPING OF TWO NUMBERS ******* =======\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Second Number\\t: \");\n");
                    printf("\tscanf(\"%%d\",&sno);\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tprintf(\"\\n\\n\\tBefore Swapping\\t\\t: fno = %%d\\n\\t\\t\\t sno = %%d\",fno,sno);\n");
                    printf("\ttemp = fno;\n\tfno = sno;\n\tsno = temp;\n");
                    printf("\tprintf(\"\\n\\n\\tAfter Swapping\\t\\t: fno = %%d\\n\\t\\t\\t\\tsno = %%d\",fno,sno);\n");
                    printf("\tgetch();\n}");
                    printf("\n------------------------------------------------------------------------------\n");
                    break;

                  case '2':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO PRINT SWAPPING OF THREE NUMBERS ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno,sno,tno,temp;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n======= ******* SWAPPING OF THREE NUMBERS ******* ======\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Second Number\\t: \");\n");
                    printf("\tscanf(\"%%d\",&sno);\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Third Number\\t: \");\n");
                    printf("\tscanf(\"%%d\",&tno);\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tprintf(\"\\nBefore Swapping\\t: fno = %%d\\tsno = %%d\\ttno =%%d\",fno,sno,tno);\n");
                    printf("\ttemp = fno;\n\tfno = sno;\n\tsno = tno;\n\ttno = temp;\n");
                    printf("\tprintf(\"\\nAfter Swapping\\t: fno = %%d\\tsno = %%d\\ttno = %%d\",fno,sno,tno);\n");
                    printf("\tgetch();\n}");
                    printf("\n------------------------------------------------------------------------------");
                    break;

                  case '3': goto ArithmeticMenu;
                  case '4': goto MainMenu;
                  case '5': exit(0);
                  default : printf("\n\n\tPlease enter valid Choice...\n");
                }
                printf("\nDo you want to continue Swapping of numbers Menu(y/n)...:");
                scanf(" %c",&ch);
              }while ( ch == 'Y' || ch == 'y');
              break;

            case '6': goto MainMenu;
            case '7': exit(0);
            default : printf("\n\n\tPlease enter valid Choice...");
          }
          printf("\n\nDo you want to continue Arithmetic Operations Menu(y/n)...:");
          scanf(" %c",&ch);
        }while ( ch == 'Y' || ch == 'y');
        break;

      case '2':
        IfElseMenu:
        do
        {
          clrscr();
          printf("\n\n============== ************ IF-ELSE PROGRAMS MENU ************* ===============");
          printf("\n\n\n\t1.CHECK THE NUMBER");
          printf("\t\t\t2.CHECK THE CHARACTER");
          printf("\n\n\t3.CHECK THE TRIANGLE");
          printf("\t\t\t4.CALCULATE RESULT OF STUDENT");
          printf("\n\n\t5.CHECK PROFIT AND LOSS");
          printf("\t\t\t6.CHECK THE LEAP YEAR");
          printf("\n\n\t7.BACK TO MAIN MENU");
          printf("\t\t\t8.EXIT");
          printf("\n\n\n-------------------------------------------------------------------------------");
          printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
          printf("\n-------------------------------------------------------------------------------");
          printf("\n\n\tEnter your Choice : ");
          scanf(" %c",&ch);
          if(ch == 'm' || ch == 'M')
            goto MainMenu;
          else if(ch == 'p' || ch == 'P')
            goto MainMenu;
          else if(ch == 'x' || ch == 'X')
            exit(0);
          switch(ch)
          {
            case '1':
              CheckNumberMenu:
              do
              {
                clrscr();
                printf("\n\n=============== ************ CHECK THE NUMBER MENU ************ ===============");
                printf("\n\n\n\t1.FIND GREATEST NUMBER");
                printf("\t\t\t2.CHECK NUMBER IS +VE OR -VE");
                printf("\n\n\t3.CHECK NUMBER IS EVEN OR ODD");
                printf("\t\t4.BACK TO IF-ELSE MENU");
                printf("\n\n\t5.BACK TO MAIN MENU");
                printf("\t\t\t6.EXIT");
                printf("\n\n\n-------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n--------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto IfElseMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    do
                    {
                      clrscr();
                      printf("\n\n============== ************* GREATEST NUMBER MENU ************* ==============");
                      printf("\n\n\n\t1.GREATEST OF TWO NUMBERS");
                      printf("\t\t2.GREATEST OF THREE NUMBERS");
                      printf("\n\n\t3.BACK TO CHECK THE NUMBER MENU");
                      printf("\t\t4.BACK TO IF-ELSE MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n------------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto CheckNumberMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO CHECK GREATEST OF TWO NUMBERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n======== ******* GREATEST OF TWO NUMBERS ******* =======\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tif(fno == sno)\n");
                          printf("\t\tprintf(\"\\n\\n\\tBoth Numbers are Equal.\");\n");
                          printf("\telse if(fno > sno)\n");
                          printf("\t\tprintf(\"\\n\\n\\t%%d is Greater Number than %%d.\",fno,sno);\n");
                          printf("\telse\n\t\tprintf(\"\\n\\n\\t%%d is Greater Number than %%d.\",sno,fno);\n");
                          printf("\tgetch();\n}\n");
                          printf("------------------------------------------------------------------------------\n");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO CHECK GREATEST OF THREE NUMBERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno,tno;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n======= ******* GREATEST OF THREE NUMBERS ******* ======\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\n\\tEnter the Third Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&tno);\n");
                          printf("\tif(fno == sno && sno == tno)\n");
                          printf("\t\tprintf(\"\\n\\n\\tAll Three Numbers are Equal.\");\n");
                          printf("\telse if(fno > sno && fno > tno)\n");
                          printf("\t\tprintf(\"\\n\\n\\t%%d is Greater than %%d and %%d.\",fno,sno,tno);\n");
                          printf("\telse if(sno > tno)\n");
                          printf("\t\tprintf(\"\\n\\n\\t%%d is Greater than %%d and %%d.\",sno,fno,tno);\n");
                          printf("\telse\n\t\tprintf(\"\\n\\n\\t%%d is Greater than %%d and %%d.\",tno,fno,sno);\n");
                          printf("\tgetch();\n}\n");
                          printf("------------------------------------------------------------------------------");
                          break;

                        case '3': goto CheckNumberMenu;
                        case '4': goto IfElseMenu;
                        case '5': goto MainMenu;
                        case '6': exit(0);
                        default: printf("\n\n\tPlease enter valid Choice...\n");
                      }
                      printf("\nDo you want to continue Greatest Number Menu (y/n)...");
                      scanf(" %c",&ch);
                    }while(ch =='Y' || ch =='y');
                    break;

                  case '2':
                    do
                    {
                      clrscr();
                      printf("\n\n============= *********** +VE OR -VE NUMBER MENU ************ ==============");
                      printf("\n\n\n\t1.CHECK +VE OR -VE INTEGER");
                      printf("\t\t2.CHECK +VE OR -VE FLOAT");
                      printf("\n\n\t3.BACK TO CHECK THE NUMBER MENU");
                      printf("\t\t4.BACK TO IF-ELSE MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n-----------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-----------------------------------------------------------------------------");
                      printf("\n\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto CheckNumberMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO CHECK +VE OR -VE INTEGER ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n========= ******** +VE OR -VE INTEGER ******** ========\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tif(fno == 0)\n");
                          printf("\t\tprintf(\"\\n\\n\\tGiven number is Zero.\");\n\telse if(fno > 0)\n");
                          printf("\t\tprintf(\"\\n\\n\\t%%d is Positive Number.\",fno);\n");
                          printf("\telse\n\t\tprintf(\"\\n\\n\\t%%d is Negative Number.\",fno);\n");
                          printf("\tgetch();\n}\n");
                          printf("------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO CHECK +VE OR -VE FLOAT ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tfloat no1;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n========= ******** +VE OR -VE FLOAT ********* =========\");\n");
                          printf("\tprintf(\"\\n\\n\\n\\tEnter the Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%f\",&no1);\n");
                          printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                          printf("\tif(fno == 0)\n");
                          printf("\t\tprintf(\"\\n\\n\\tGiven number is Zero.\");\n\telse if(no1 > 0)\n");
                          printf("\t\tprintf(\"\\n\\n\\t%%.2f is Positive Number.\",no1);\n");
                          printf("\telse\n\t\tprintf(\"\\n\\n\\t%%.2f is Negative Number.\",no1);\n");
                          printf("\tgetch();\n}\n");
                          printf("------------------------------------------------------------------------------");
                          break;

                        case '3':goto CheckNumberMenu;
                        case '4':goto IfElseMenu;
                        case '5':goto MainMenu;
                        case '6':exit();
                        default: printf("\n\n\tPlease enter valid Choice...");
                      }
                      printf("\n\nDo you want to continue +ve or -ve Number Menu (y/n)...:");
                      scanf(" %c",&ch);
                    }while( ch == 'Y' || ch == 'y');
                    break;

                  case '3':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO CHECK EVEN OR ODD NUMBER ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n======== ******** EVEN OR ODD NUMBER ******** ========\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Number\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tif(fno % 2 == 0)\n");
                    printf("\t\tprintf(\"\\n\\n\\t%%d is an Even Number.\",fno);\n");
                    printf("\telse\n\t\tprintf(\"\\n\\n\\t%%d is an Odd Number.\",fno);\n");
                    printf("\tgetch();\n}\n");
                    printf("--------------------------------------------------------------------------");
                    break;

                  case '4': goto IfElseMenu;
                  case '5': goto MainMenu;
                  case '6': exit(0);
                  default: printf("\n\n\tPlease enter valid Choice...");
                }
                printf("\n\nDo you want to continue Check the Number Menu (y/n)...");
                scanf(" %c",&ch);
              }while(ch =='Y' || ch =='y');
              break;

            case '2':
              do
              {
                clrscr();
                printf("\n\n============= ************ CHECK THE CHARACTER MENU ************ =============");
                printf("\n\n\n\t1.CHECK TYPE OF CHARACTER");
                printf("\t\t2.CHECK TYPE OF ALPHABET");
                printf("\n\n\t3.BACK TO IF-ELSE MENU");
                printf("\t\t\t4.BACK TO MAIN MENU");
                printf("\n\n\t5.EXIT");
                printf("\n\n\n-------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto IfElseMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO CHECK TYPE OF CHARACTER ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tchar c;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n======= ******* CHECK TYPE OF CHARACTER ******* ========\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Character\\t: \");\n");
                    printf("\tscanf(\" %%c\",&c);\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tif(c >= 'A' && c <= 'Z')\n");
                    printf("\t\tprintf(\"\\n\\n\\t%%c is a Capital Alphabet\",c);\n");
                    printf("\telse if(c >= 'a' && c <= 'z')\n");
                    printf("\t\tprintf(\"\\n\\n\\t%%c is a Small Alphabet\",c);\n");
                    printf("\telse if(c >= '0' && c <= '9')\n");
                    printf("\t\tprintf(\"\\n\\n\\t%%c is a Digit\",c);\n");
                    printf("\telse\n\t\tprintf(\"\\n\\n\\t%%c is a Special Symbol\",c);\n");
                    printf("\tgetch();\n}\n");
                    printf("----------------------------------------------------------------------------");
                    break;

                  case '2':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO CHECK TYPE OF ALPHABET ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tchar c;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n======= ******* CHECK TYPE OF ALPHABET ******* ========\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the Alphabet\\t: \");\n");
                    printf("\tscanf(\" %%c\",&c);\n");
                    printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
                    printf("\tif(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U'|| c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')\n");
                    printf("\t\tprintf(\"\\n\\n\\t%%c is a Vowel\",c);\n");
                    printf("\telse if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')\n");
                    printf("\t\tprintf(\"\\n\\n\\t%%c is a Consonent\",c);\n");
                    printf("\telse\n\t\tprintf(\"\\n\\n\\t%%c is not an Alphabet\",c);\n");
                    printf("\tgetch();\n}\n");
                    printf("----------------------------------------------------------------------------");
                    break;

                  case '3':goto IfElseMenu;
                  case '4':goto MainMenu;
                  case '5':exit(0);
                  default: printf("\n\n\tPlease enter valid Choice...");
                }
                printf("\n\nDo you want to continue Check the Character Menu (y/n)...:");
                scanf(" %c",&ch);
              }while( ch == 'Y' || ch == 'y');
              break;

            case '3':
              do
              {
                clrscr();
                printf("\n\n=========== *********** CHECK VALIDITY OF TRIANGLE MENU *********** ===========");
                printf("\n\n\n\t1.CHECK VALIDITY BASED ON ANGLE");
                printf("\t\t2.CHECK VALIDITY BASED ON SIDES");
                printf("\n\n\t3.BACK TO IF-ELSE MENU");
                printf("\t\t\t4.BACK TO MAIN MENU");
                printf("\n\n\t5.EXIT");
                printf("\n\n\n------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto IfElseMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);

                switch(ch)
                {
                  case '1':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO CHECK VALIDITY OF TRIANGLE BASED ON ANGLES ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno,sno,tno;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n==== **** VALIDITY OF TRIANGLE BASED ON ANGLES **** ====\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the First Number\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tprintf(\"\\n\\n\\tEnter the Second Number\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&sno);\n");
                    printf("\tprintf(\"\\n\\n\\tEnter the Third Number\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&tno);\n");
                    printf("\tif(fno <= 0 || sno <= 0 || tno <= 0)\n");
                    printf("\t\tprintf(\"\\n\\n\\tPlease enter valid Angles...\");\n");
                    printf("\telse if(fno +sno + tno == 180)\n");
                    printf("\t\tprintf(\"\\n\\n\\tHere, Triangle is Valid.\");\n");
                    printf("\telse\n\t\tprintf(\"\\n\\n\\tHere, Triangle is Invalid.\");\n");
                    printf("\tgetch();\n}\n");
                    printf("------------------------------------------------------------------------------\n");
                    break;

                  case '2':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO CHECK VALIDITY OF TRIANGLE BASED ON SIDES ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint side1,side2,side3;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n==== **** VALIDITY OF TRIANGLE BASED ON SIDES **** ====\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the First Side\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&side1);\n");
                    printf("\tprintf(\"\\n\\n\\tEnter the Second Side\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&side2);\n");
                    printf("\tprintf(\"\\n\\n\\tEnter the Third Side\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&side3);\n");
                    printf("\tif(side1 <= 0 || side2 <= 0 || side3 <= 0)\n");
                    printf("\t\tprintf(\"\\n\\n\\tPlease enter valid Sides...\");\n");
                    printf("\telse if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)\n");
                    printf("\t\tprintf(\"\\n\\n\\tHere, Triangle is Valid.\");\n");
                    printf("\telse\n\t\tprintf(\"\\n\\n\\tHere, Triangle is Invalid.\");\n");
                    printf("\tgetch();\n}\n");
                    printf("------------------------------------------------------------------------------");
                    break;

                  case '3': goto IfElseMenu;
                  case '4': goto MainMenu;
                  case '5': exit();
                  default: printf("\n\n\tPlease enter valid Choice...\n");
                }
                printf("\nDo you want to continue Valid Triangle Menu (y/n)...");
                scanf(" %c",&ch);
              }while(ch == 'y' || ch == 'Y');
              break;

            case '4':
              do
              {
                clrscr();
                printf("\n\n============= ************* RESULT OF STUDENT MENU ************** =============");
                printf("\n\n\n\t1.PART 1");
                printf("\t\t\t\t2.PART 2");
                printf("\n\n\t3.BACK TO IF-ELSE MENU");
                printf("\t\t\t4.BACK TO MAIN MENU");
                printf("\n\n\t5.EXIT");
                printf("\n\n\n------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto IfElseMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);

                switch(ch)
                {
                  case '1':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO CHECK RESULT OF STUDENT ****--");
                    printf("\n------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint sub1,sub2,sub3,marks;\n\tclrscr();\n\tfloat percent;\n");
                    printf("\tprintf(\"\\n\\n==== **** RESULT OF STUDENT **** ====\");\n");
                    printf("\tprintf(\"\\n\\n\\n\\tEnter the marks in First Subject\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&sub1);\n");
                    printf("\tprintf(\"\\n\\n\\tEnter the marks in Second Subject\\t\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&sub2);\n");
                    printf("\tprintf(\"\\n\\n\\tEnter the marks in Third Subject\\t\\t: \");\n");
                    printf("\tscanf(\"%%d\",&sub3);\n");
                    printf("\tif(sub1<0 || sub2 < 0 || sub3 < 0 || sub1 > 100 || sub2 > 100 || sub3 > 100)\n");
                    printf("\t\tprintf(\"\\n\\n\\tPlease enter valid Marks...\");\n");
                    printf("\telse\n\t{\n\t\tmarks = sub1 + sub2 + sub3;\n");
                    printf("\t\tprintf(\"\\n\\n\\tTotal Marks of Student\\t: %%d\",marks);\n");
                    printf("--------------------------------------------------------------------------------");
                    break;

                  case '2':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO CHECK RESULT OF STUDENT ****--");
                    printf("\n------------------------------------------------------------------------------");
                    printf("\n\t\tif(sub1<40 || sub2<40 || sub3<40)\n");
                    printf("\t\t\tprintf(\"\\n\\n\\tClass of Student\\t: FAIL\");\n");
                    printf("\t\telse\n\t\t{\n\t\t\tpercent = marks / 3.0;\n");
                    printf("\t\t\tprintf(\"\\n\\n\\tPercentage of Student\\t: %%.2f\",percent);\n");
                    printf("\t\t\tif(percent >= 70)\n");
                    printf("\t\t\t\tprintf(\"\\n\\tClass of Student\\t: DISTINCTION\");\n");
                    printf("\t\t\telse if(percent >= 60)\n");
                    printf("\t\t\t\tprintf(\"\\n\\tClass of Student\\t: FIRST CLASS\");\n");
                    printf("\t\t\telse if(percent >= 50)\n\t\t\t\tprintf(\"\\n\\tClass of Student\\t: SECOND CLASS\");\n");
                    printf("\t\t\telse\n\t\t\t\tprintf(\"\\n\\tClass of Student\\t: PASS CLASS\");\n");
                    printf("\t\t}\n\t}\n\tgetch();\n}\n");
                    printf("--------------------------------------------------------------------------------");
                    break;

                  case '3': goto IfElseMenu;
                  case '4': goto MainMenu;
                  case '5': exit();
                  default: printf("\n\n\tPlease enter valid Choice...\n");
                }
                printf("\nDo you want to continue Result of Student Menu (y/n)...");
                scanf(" %c",&ch);
              }while(ch == 'y' || ch == 'Y');
              break;

            case '5':
              clrscr();
              printf("\n\t--**** PROGRAM TO CHECK PROFIT AND LOSS ****--");
              printf("\n-------------------------------------------------------------------------------");
              printf("\nvoid main()\n{\n\tint purchase,selling;\n\tclrscr();\n");
              printf("\tprintf(\"\\n\\n======== ******* PROFIT AND LOSS ******* =======\");\n");
              printf("\tprintf(\"\\n\\n\\n\\tEnter the Purchase Price\\t: \");\n");
              printf("\tscanf(\"%%d\",&purchase);\n");
              printf("\tprintf(\"\\n\\n\\n\\tEnter the Selling Price\\t: \");\n");
              printf("\tscanf(\"%%d\",&selling);\n");
              printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
              printf("\tif(purchase < 0 || selling < 0)\n");
              printf("\t\tprintf(\"\\n\\tPlease enter valid Price...\");\n");
              printf("\telse if(purchase == selling)\n");
              printf("\t\tprintf(\"\\n\\n\\tThere is neither Profit nor Loss.\");\n");
              printf("\telse if(purchase < selling)\n\t\tprintf(\"\\n\\n\\tThere is Profit.\");\n");
              printf("\telse\n\t\tprintf(\"\\n\\n\\tThere is Loss.\");\n");
              printf("\tgetch();\n}\n");
              printf("--------------------------------------------------------------------------");
              break;

            case '6':
              clrscr();
              printf("\n\t\t--**** PROGRAM TO CHECK LEAP YEAR ****--");
              printf("\n-------------------------------------------------------------------------------");
              printf("\nvoid main()\n{\n\tint year;\n\tclrscr();\n");
              printf("\tprintf(\"\\n\\n============ ********* LEAP YEAR *********** ===========\");\n");
              printf("\tprintf(\"\\n\\n\\n\\tEnter the Year\\t: \");\n");
              printf("\tscanf(\"%%d\",&year);\n");
              printf("\tprintf(\"\\n\\n--------------------------------------------------------\");\n");
              printf("\tif(year < 1000 || year > 9999)\n");
              printf("\t\tprintf(\"\\n\\tPlease enter valid Year...\");\n");
              printf("\telse if(year%4 == 0 && year%100 != 0 || year%400 == 0)\n");
              printf("\t\tprintf(\"\\n\\n\\t%%d is a Leap year\",year);\n");
              printf("\telse\n\t\tprintf(\"\\n\\n\\t%%d is a not Leap year\",year);\n");
              printf("\tgetch();\n}\n");
              printf("--------------------------------------------------------------------------------");
              break;

            case '7':goto MainMenu;
            case '8':exit(0);
            default: printf("\n\n\tPlease enter valid Choice...\n");
          }
          printf("\nDo you want to continue If-Else Programs Menu(y/n)...:");
          scanf(" %c",&ch);
        }while( ch == 'Y' || ch == 'y');
        break;

      case '3':
        LoopsMenu:
        do
        {
          clrscr();
          printf("\n\n=============== ************* LOOP PROGRAMS MENU ************* ==============");
          printf("\n\n\n\t1.PRINTING NUMBERS");
          printf("\t\t\t2.FIBONACCI SERIES");
          printf("\n\n\t3.CHECK TYPE OF NUMBERS");
          printf("\t\t\t4.REVERSE NUMBERS");
          printf("\n\n\t5.FACTORIAL OF NUMBER");
          printf("\t\t\t6.NUMBER RAISED TO POWER");
          printf("\n\n\t7.BACK TO MAIN MENU");
          printf("\t\t\t8.EXIT");
          printf("\n\n\n------------------------------------------------------------------------------");
          printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
          printf("\n-------------------------------------------------------------------------------");
          printf("\n\n\n\tEnter your Choice : ");
          scanf(" %c",&ch);
          if(ch == 'm' || ch == 'M')
            goto MainMenu;
          else if(ch == 'p' || ch == 'P')
            goto MainMenu;
          else if(ch == 'x' || ch == 'X')
            exit(0);
          switch(ch)
          {
            case '1':
              PrintNumbersMenu:
              do
              {
                clrscr();
                printf("\n\n============== ************ PRINT NUMBERS MENU ************* ===============");
                printf("\n\n\n\t1.PRINT TABLE OF GIVEN NUMBER");
                printf("\t\t2.PRINT NUMBERS IN GIVEN RANGE");
                printf("\n\n\t3.PRINT EVEN ODD NUMBERS");
                printf("\t\t4.BACK TO LOOP PROGRAMS MENU");
                printf("\n\n\t5.BACK TO MAIN MENU");
                printf("\t\t\t6.EXIT");
                printf("\n\n\n------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto LoopsMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    clrscr();
                    printf("\n\t\t--**** PROGRAM TO PRINT TABLE ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno,i;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n=========== ********** PRINT TABLE ********* ==========\");\n");
                    printf("\tprintf(\"\\n\\n\\nEnter the Number\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tprintf(\"\\n\\nTable of %%d :\\n\",fno);\n");
                    printf("\tfor(i=1;i<=10;i++)\n\t{\n");
                    printf("\t\tprintf(\"\\n\\t%%d\",i*fno);\n\t}\n");
                    printf("\tgetch();\n}\n");
                    printf("--------------------------------------------------------------------------------\n");
                    break;


                  case '2':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO PRINT NUMBERS IN GIVEN RANGE ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint sno,tno;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n====== ****** PRINT NUMBERS IN GIVEN RANGE ****** ======\");\n");
                    printf("\tprintf(\"\\n\\n\\nEnter the Starting Number\t: \");\n");
                    printf("\tscanf(\"%%d\",&sno);\n");
                    printf("\tprintf(\"\\n\\n\\nEnter the Ending Number\t: \");\n");
                    printf("\tscanf(\"%%d\",&tno);\n");
                    printf("\tif(sno < tno)\n\t{\n");
                    printf("\t\tfor(;sno<=tno;sno++)\n");
                    printf("\t\t\tprintf(\"\\t\\t%%d\",sno);\n\t}\n");
                    printf("\telse\n\t{\n\t\tfor(;sno>=tno;sno--)\n\t\t\t\printf(\"\\t\\t%%d\",sno);\n\t}\n");
                    printf("\tgetch();\n}\n");
                    printf("------------------------------------------------------------------------------");
                    break;

                  case '3':
                    do
                    {
                      clrscr();
                      printf("\n\n============ *********** PRINT EVEN ODD NUMBERS MENU ************ ============");
                      printf("\n\n\n\t1.PRINT EVEN NUMBERS");
                      printf("\t\t\t2.PRINT ODD NUMBERS");
                      printf("\n\n\t3.BACK TO PRINT NUMBERS MENU");
                      printf("\t\t4.BACK TO LOOP PROGRAMS MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n----------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto PrintNumbersMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t\t--**** PROGRAM TO PRINT EVEN NUMBERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint sno,tno,i;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n========= ******** PRINT EVEN NUMBERS ******** =========\");\n");
                          printf("\tprintf(\"\\n\\n\\nEnter the Starting Number\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\n\\nEnter the Ending Number\t: \");\n");
                          printf("\tscanf(\"%%d\",&tno);\n");
                          printf("\tprintf(\"\\n\\nEven Numbers are :\\n\\n\");\n");
                          printf("\tfor(i=sno;i<=tno;i++)\n\t{\n");
                          printf("\t\tif(i%%2 == 0)\n\t\t\tprintf(\"\\t\\t%%d\",i);\n\t}\n");
                          printf("\tgetch();\n}\n");
                          printf("------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t\t--**** PROGRAM TO PRINT ODD NUMBERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint sno,tno,i;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n========= ******** PRINT ODD NUMBERS ******** =========\");\n");
                          printf("\tprintf(\"\\n\\n\\nEnter the Starting Number\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\n\\nEnter the Ending Number\t: \");\n");
                          printf("\tscanf(\"%%d\",&tno);\n");
                          printf("\tprintf(\"\\n\\nOdd Numbers are :\\n\\n\");\n");
                          printf("\tfor(i=sno;i<=tno;i++)\n\t{\n");
                          printf("\t\tif(i%%2 == 1)\n\t\t\tprintf(\"\\t\\t%%d\",i);\n\t}\n");
                          printf("\tgetch();\n}\n");
                          printf("------------------------------------------------------------------------------");
                          break;

                        case '3': goto PrintNumbersMenu;
                        case '4': goto LoopsMenu;
                        case '5': goto MainMenu;
                        case '6': exit(0);
                        default: printf("\n\n\tPlease enter the valid Choice...");
                      }
                      printf("\n\nDo you want to continue Print Even Odd Numbers Menu(y/n)...");
                      scanf(" %c",&ch);
                    }while(ch == 'y' || ch == 'Y');
                    break;

                  case '4': goto LoopsMenu;
                  case '5': goto MainMenu;
                  case '6': exit(0);
                  default: printf("\n\n\tPlease enter valid Choice...\n");
                }
                printf("\nDo you want to continue Print Numbers Menu(y/n)...");
                scanf(" %c",&ch);
              }while(ch == 'y' || ch == 'Y');
              break;

            case '2':
              do
              {
                clrscr();
                printf("\n\n============= *********** PRINT FIBONACCI SERIES MENU *********** ============");
                printf("\n\n\n\t1.PRINT SERIES IN GIVEN RANGE");
                printf("\t\t2.PRINT SERIES TO GIVEN TERMS");
                printf("\n\n\t3.PRINT SERIES IN REVERSE ORDER");
                printf("\t\t4.BACK TO LOOP PROGRAMS MENU");
                printf("\n\n\t5.BACK TO MAIN MENU");
                printf("\t\t\t6.EXIT");
                printf("\n\n\n------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n--------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto LoopsMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO PRINT FIBONACCI SERIES IN GIVEN RANGE ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint fno,i,j,sum;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n===== ***** FIBONACCI SERIES IN GIVEN RANGE ***** =====\");\n");
                    printf("\tprintf(\"\\n\\n\\nEnter the Range\\t: \");\n");
                    printf("\tscanf(\"%%d\",&fno);\n");
                    printf("\tprintf(\"\\n\\nFibonacci series upto %%d :\\n\\n\",fno);\n");
                    printf("\tfor(i=0,j=1;i<=fno;)\n\t{\n");
                    printf("\t\tsum = i+j;\n\t\tprintf(\"\\t\\t%%d\",i);\n\t\ti=j;\n\t\tj=sum;\n\t}\n");
                    printf("\tgetch();\n}\n");
                    printf("\n-------------------------------------------------------------------------------");
                    break;

                  case '2':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO PRINT FIBONACCI SERIES TO THE GIVEN TERMS ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint range,i,j,fno,sum;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n===== **** FIBONACCI SERIES TO THE GIVEN TERMS **** ====\");\n");
                    printf("\tprintf(\"\\n\\n\\nEnter how many terms do you want\\t: \");\n");
                    printf("\tscanf(\"%%d\",&range);\n");
                    printf("\tprintf(\"\\n\\nFibonacci series upto %%d terms :\\n\\n\",range);\n");
                    printf("\tfor(i=0,j=1,fno=1;fno<=range;fno+=1)\n\t{\n");
                    printf("\t\tsum = i+j;\n\t\tprintf(\"\\t\\t%%d\",i);\n\t\ti=j;\n\t\tj=sum;\n\t}\n");
                    printf("\tgetch();\n}\n");
                    printf("\n-------------------------------------------------------------------------------");
                    break;

                  case '3':
                    clrscr();
                    printf("\n\t--**** PROGRAM TO PRINT FIBONACCI SERIES IN REVERSE ORDER ****--");
                    printf("\n-------------------------------------------------------------------------------");
                    printf("\nvoid main()\n{\n\tint i,j,sum;\n\tclrscr();\n");
                    printf("\tprintf(\"\\n\\n===== **** FIBONACCI SERIES IN REVERSE ORDER **** =====\");\n");
                    printf("\tprintf(\"\\n\\nFibonacci series in Reverse Order :\\n\\n\",fno);\n");
                    printf("\tfor(i=55,j=34;j>=0;)\n\t{\n");
                    printf("\t\tsum = i-j;\n\t\tprintf(\"\\t\\t%%d\",i);\n\t\ti=j;\n\t\tj=sum;\n\t}\n");
                    printf("\tgetch();\n}\n");
                    printf("\n-------------------------------------------------------------------------------");
                    break;

                  case '4': goto LoopsMenu;
                  case '5': goto MainMenu;
                  case '6': exit(0);
                  default: printf("\n\n\tPlease enter valid Choice...");
                }
                printf("\n\nDo you want to continue Fibonacci Series Menu(y/n)...");
                scanf(" %c",&ch);
              }while(ch == 'y' || ch == 'Y');
              break;

            case '3':
              CheckNumbersMenu:
              do
              {
                clrscr();
                printf("\n\n============= ************ CHECK TYPE OF NUMBERS MENU ************ ============");
                printf("\n\n\n\t1.ARMSTRONG NUMBER");
                printf("\t\t\t2.PRIME NUMBER");
                printf("\n\n\t3.PALINDROME NUMBER");
                printf("\t\t\t4.BACK TO LOOP PROGRAMS MENU");
                printf("\n\n\t5.BACK TO MAIN MENU");
                printf("\t\t\t6.EXIT");
                printf("\n\n\n------------------------------------------------------------------------------");
                printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                printf("\n-------------------------------------------------------------------------------");
                printf("\n\n\tEnter your Choice : ");
                scanf(" %c",&ch);
                if(ch == 'm' || ch == 'M')
                  goto MainMenu;
                else if(ch == 'p' || ch == 'P')
                  goto LoopsMenu;
                else if(ch == 'x' || ch == 'X')
                  exit(0);
                switch(ch)
                {
                  case '1':
                    do
                    {
                      clrscr();
                      printf("\n\n============= ************* ARMSTRONG NUMBER MENU ************* ==============");
                      printf("\n\n\n\t1.CHECK NUMBER IS ARMSTRONG OR NOT");
                      printf("\t2.PRINT ARMSTRONG NUMBERS");
                      printf("\n\n\t3.BACK TO CHECK TYPE OF NUMBERS MENU");
                      printf("\t4.BACK TO LOOP PROGRAMS MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n------------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto CheckNumbersMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO CHECK ARMSTRONG NUMBER ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno,sum,rem;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n====== ******* CHECK ARMSTRONG NUMBER ******* ======\");\n");
                          printf("\tprintf(\"\\n\\nEnter the Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n----------------------------------------------------\\n\");\n");
                          printf("\tsum=0;\n\tfor(sno=fno;sno>0;sno/=10)\n\t{\n");
                          printf("\t\trem = sno%%10;\n\t\tsum = sum + (rem*rem*rem);\n\t}\n");
                          printf("\tif(sum == fno)\n\t\tprintf(\"\\n\\n\\t%%d is an Armstrong Number\",fno);\n");
                          printf("\telse\n\t\tprintf(\"\\n\\n\\t%%d is not an Armstrong Number\",fno);\n");
                          printf("\tgetch();\n}\n");
                          printf("-------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO PRINT ARMSTRONG NUMBERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno,tno,sum,rem;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n======= ****** PRINT ARMSTRONG NUMBERS ****** ======\");\n");
                          printf("\tprintf(\"\\n\\nEnter the Starting Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\nEnter the Ending Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&tno);\n");
                          printf("\tfor(sum=0,fno=sno;sno<=tno;sno++)\n\t{\n");
                          printf("\t\tfor(;fno>0;fno/=10)\n\t\t{\n\t\t\trem = fno%10;\n");
                          printf("\t\t\tsum = sum + (rem*rem*rem);\n\t\t}\n\t}\n");
                          printf("\tif(sum == sno)\n\t\tprintf(\"\\t%%d\",sno);\n");
                          printf("\tgetch();\n}\n");
                          printf("-------------------------------------------------------------------------------");
                          break;

                        case '3':goto CheckNumbersMenu;
                        case '4':goto LoopsMenu;
                        case '5':goto MainMenu;
                        case '6':exit();
                        default: printf("\n\n\tPlease enter valid Choice...\n");
                      }
                      printf("\nDo you want to continue Armstrong Number Menu (y/n)...");
                      scanf(" %c",&ch);
                    }while(ch == 'y' || ch == 'Y');
                    break;

                  case '2':
                    do
                    {
                      clrscr();
                      printf("\n\n============== ************** PRIME NUMBER MENU ************** ===============");
                      printf("\n\n\n\t1.CHECK NUMBER IS PRIME OR NOT");
                      printf("\t\t2.PRINT PRIME NUMBERS");
                      printf("\n\n\t3.BACK TO CHECK THE NUMBER MENU");
                      printf("\t\t4.BACK TO LOOP PROGRAMS MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n-------------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto CheckNumbersMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO CHECK PRIME NUMBER ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,range,i;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n======= ******** CHECK PRIME NUMBER ******** =======\");\n");
                          printf("\tprintf(\"\\n\\nEnter the Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tfor(range=0,i=2;i<fno;i++)\n\t{\n");
                          printf("\t\tif(fno%%i == 0)\n\t\t{\n\t\t\trange++;\n\t\t\tbreak;\n\t\t}\n\t}\n");
                          printf("\tif(range == 0)\n\t\tprintf(\"\\n\\n\\t%%d is a Prime Number\",fno);\n");
                          printf("\telse\n\t\tprintf(\"\\n\\n\\t%%d is not a Prime Number\",fno);\n");
                          printf("\tgetch();\n}\n");
                          printf("-------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO PRINT PRIME NUMBERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint sno,tno,range,i;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n====== ******* PRINT PRIME NUMBERS ******* ======\");\n");
                          printf("\tprintf(\"\\n\\nEnter the Starting and Ending Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d%%d\",&sno,&tno);\n");
                          printf("\tfor(;sno<=tno;sno++)\n\t{\n");
                          printf("\t\tfor(range = 0,i = 2;i<sno;i++)\n\t\t{\n");
                          printf("\t\t\tif(sno%%i == 0)\n\t\t\t{\n\t\t\t\trange++;\n\t\t\t\tbreak;\n\t\t\t}\n\t\t}}\n");
                          printf("\tif(range == 0)\n\t\tprintf(\"\\n\\n\\t%%d\",sno);\n");
                          printf("\tgetch();\n}\n");
                          printf("-------------------------------------------------------------------------------");
                          break;

                        case '3': goto CheckNumbersMenu;
                        case '4': goto LoopsMenu;
                        case '5': goto MainMenu;
                        case '6': exit(0);
                        default: printf("\n\n\tPlease enter valid Choice...\n");
                      }
                      printf("\nDo you want to continue Prime Number Menu(y/n)...");
                      scanf(" %c",&ch);
                    }while(ch == 'y' || ch == 'Y');
                    break;

                  case '3':
                    do
                    {
                      clrscr();
                      printf("\n\n============== ************ PALINDROME NUMBER MENU ************* =============");
                      printf("\n\n\n\t1.CHECK NUMBER IS PALINDROME OR NOT");
                      printf("\t2.PRINT PALINDROME NUMBERS");
                      printf("\n\n\t3.BACK TO CHECK THE NUMBER MENU");
                      printf("\t\t4.BACK TO LOOP PROGRAMS MENU");
                      printf("\n\n\t5.BACK TO MAIN MENU");
                      printf("\t\t\t6.EXIT");
                      printf("\n\n\n------------------------------------------------------------------------------");
                      printf("\nM / m : MAIN MENU\t\tP / p : PREVIOUS MENU\t\tX / x : EXIT");
                      printf("\n-------------------------------------------------------------------------------");
                      printf("\n\n\tEnter your Choice : ");
                      scanf(" %c",&ch);
                      if(ch == 'm' || ch == 'M')
                        goto MainMenu;
                      else if(ch == 'p' || ch == 'P')
                        goto CheckNumbersMenu;
                      else if(ch == 'x' || ch == 'X')
                        exit(0);
                      switch(ch)
                      {
                        case '1':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO CHECK PALINDROME NUMBER ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno,rem,sum;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n====== ******* PRINT PALINDROME NUMBERS ******* ======\");\n");
                          printf("\tprintf(\"\\n\\nEnter the Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&fno);\n");
                          printf("\tprintf(\"\\n\\n----------------------------------------------------\\n\");\n");
                          printf("\tfor(sno=fno,sum=0;sno > 0;sno /= 10)\n\t{\n");
                          printf("\t\trem = sno % 10;\n\t\tsum = sum * 10 + rem;\n\t}\n");
                          printf("\tif(fno == sum)\n\t\tprintf(\"\\n\\n\\t%%d is an Palindrome Number\",fno);\n");
                          printf("\telse\n\t\tprintf(\"\\n\\n\\t%%d is not an Palindrome Number\",fno);\n");
                          printf("\tgetch();\n}\n");
                          printf("-------------------------------------------------------------------------------");
                          break;

                        case '2':
                          clrscr();
                          printf("\n\t--**** PROGRAM TO PRINT PALINDROME NUMBERS ****--");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\nvoid main()\n{\n\tint fno,sno,tno,sum,rem;\n\tclrscr();\n");
                          printf("\tprintf(\"\\n\\n====== ******* PRINT PALINDROME NUMBERS ******* ======\");\n");
                          printf("\tprintf(\"\\n\\nEnter the Starting Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&sno);\n");
                          printf("\tprintf(\"\\n\\nEnter the Ending Number\\t\\t: \");\n");
                          printf("\tscanf(\"%%d\",&tno);\n");
                          printf("\tfor(;sno<=tno;sno++)\n\t{\n");
                          printf("\t\tfor(fno=sno,sum=0 ; fno>0 ; fno/=10)\n\t\t{\n");
                          printf("\t\t\trem = fno % 10;\n\t\t\tsum = sum * 10 + rem;\n\t\t}\n\t}\n");
                          printf("\tif(sno == sum)\n\t\tprintf(\"\\n\\n\\t%%d\",sno);\n");
                          printf("\tgetch();\n}\n");
                          printf("-------------------------------------------------------------------------------");
                          break;

                        case '3': goto CheckNumbersMenu;
                        case '4': goto LoopsMenu;
                        case '5': goto MainMenu;
                        case '6': exit(0);
                        default: printf("\n\n\tPlease enter valid Choice...\n");
                      }
                      printf("\nDo you want to continue Palindrome Number Menu(y/n)...");
                      scanf(" %c",&ch);
                    }while(ch == 'y' || ch == 'Y');
                    break;

                  case '4':goto LoopsMenu;
                  case '5':goto MainMenu;
                  case '6':exit(0);
                  default: printf("\n\n\tPlease enter valid Choice...");
                }
                printf("\n\nDo you want to continue Check the Numbers Menu (y/n)...:");
                scanf(" %c",&ch);
              }while( ch == 'Y' || ch == 'y');
              break;

            case '4':
              clrscr();
              printf("\n\t--**** PROGRAM TO PRINT REVERSE NUMBER ****--");
              printf("\n-------------------------------------------------------------------------------");
              printf("\nvoid main()\n{\n\tint fno,sno,sum,rem;\n\tclrscr();\n");
              printf("\tprintf(\"\\n\\n====== ******* PRINT REVERSE NUMBER ******* ======\");\n");
              printf("\tprintf(\"\\n\\nEnter the Number\\t\\t: \");\n");
              printf("\tscanf(\"%%d\",&fno);\n");
              printf("\tprintf(\"\\n\\n----------------------------------------------------\\n\");\n");
              printf("\tsum = 0;\n\tfor(sno = fno;sno > 0;sno /= 10)\n\t{\n");
              printf("\t\trem = sno % 10;\n\t\tsum = sum * 10 + rem;\n\t}\n");
              printf("\tprintf(\"\\n\\n\\tReverse of %%d is\\t: %%d\",fno,sum);\n");
              printf("\tgetch();\n}\n");
              printf("-------------------------------------------------------------------------------");
              break;

            case '5':
              clrscr();
              printf("\n\t--**** PROGRAM TO PRINT FACTORIAL OF NUMBER ****--");
              printf("\n-------------------------------------------------------------------------------");
              printf("\nvoid main()\n{\n\tint fno,sno,sum;\n\tclrscr();\n");
              printf("\tprintf(\"\\n\\n====== ******* PRINT FACTORIAL OF NUMBER ******* ======\");\n");
              printf("\tprintf(\"\\n\\nEnter the Number\\t: \");\n");
              printf("\tscanf(\"%%d\",&fno);\n");
              printf("\tprintf(\"\\n\\n----------------------------------------------------\\n\");\n");
              printf("\tsum = 1;\n\tfor(sno = fno;sno > 1;sno--)\n\t{\n");
              printf("\t\tsum = sum * sno;\n\t}\n");
              printf("\tprintf(\"\\n\\n\\tFactorial of %%d is\\t: %%d\",fno,sum);\n");
              printf("\tgetch();\n}\n");
              printf("-------------------------------------------------------------------------------");
              break;

            case '6':
              clrscr();
              printf("\n\t--**** PROGRAM TO PRINT NUMBER RAISED TO POWER ****--");
              printf("\n-------------------------------------------------------------------------------");
              printf("\nvoid main()\n{\n\tint fno,power,sum,i;\n\tclrscr();\n");
              printf("\tprintf(\"\\n\\n====== ****** PRINT NUMBER RAISED TO POWER ****** ======\");\n");
              printf("\tprintf(\"\\n\\nEnter the Number\\t: \");\n");
              printf("\tscanf(\"%%d\",&fno);\n");
              printf("\tprintf(\"\\n\\nEnter the Power\\t: \");\n");
              printf("\tscanf(\"%%d\",&power);\n");
              printf("\tprintf(\"\\n\\n----------------------------------------------------\\n\");\n");
              printf("\tsum = 1;\n\tfor(i=power ;i>0 ; i--)\n\t{\n\t\tsum = sum * fno;\n\t}\n");
              printf("\tprintf(\"\\n\\n\\t%%d raised to %%d is\\t: %%d\",fno,power,sum);\n");
              printf("\tgetch();\n}\n");
              printf("-------------------------------------------------------------------------------");
              break;

            case '7':goto MainMenu;
            case '8':exit(0);
            default: printf("\n\n\tPlease enter valid Choice...");
          }
          printf("\n\nDo you want to continue Loops Program Menu (y/n)...:");
          scanf(" %c",&ch);
        }while( ch == 'Y' || ch == 'y');
        break;

      case '4':exit(0);
      default: printf("\n\n\tPlease enter valid Choice...");
    }

    printf("\n\nDo you want to continue Main Menu (y/n)...:");
    scanf(" %c",&ch);
  }while ( ch == 'Y' || ch == 'y');

  printf("\n\nPress any key to Exit...");
  getch();
}