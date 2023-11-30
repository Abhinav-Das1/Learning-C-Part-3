#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RockPaperScissors(char you, char comp)
{
    // Returns 1 if you win, Returns -1 if you lose, Returns 0 if draw

    //  Draw condition
    if (you == comp)
    {
        return 0;
    }

    // Non-Draw condition
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
}
int main()
{
    int number;
    char you, comp;
    //Random number generator
    srand(time(0));
    number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissors\n");
    scanf("%c", &you);
    int result = RockPaperScissors(you, comp);
    printf("You chose %c and computer chose %c. ", you, comp);
    if (result == 0)
    {
        printf("Game Draw!");
    }
    else if (result == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }
    return 0;
}