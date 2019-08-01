//program to generate dice rolls
#include <stdio.h>
#include <stdlib.h>

void rollDice();
void menu(int);

int main()
{
    int input;
    input = 1;

    //while loop keeps menu active until user ends program
    while (input != 0)
    {
       menu(input); 
    }//end while

    return 0;
}//end main

void menu(int menuInput)
{
        printf("1: Roll Dice\n");
        printf("0: Exit Program\n");

        scanf("%d", &menuInput);

        switch (menuInput)
        {
            case 1:
                rollDice();

                break;
            case 0:
                printf("Shutting Down");
                
            default:
                printf("Invalid Input\n");
                
                break;
        }//end switch
}//end menu

void rollDice()
{
    int total, dice, sides;

    printf("Enter dice to roll:\n");
            
    scanf("%dd%d", &dice, &sides);

    total = dice * (rand() % (sides + 1));

    printf("Rolled %d\n", total);

    return;
}//end rollDice