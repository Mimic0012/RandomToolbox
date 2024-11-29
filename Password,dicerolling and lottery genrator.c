#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dicerolling()
{
    for(int i=1;i<=6;i++) // rolls the die for 6 time
    {
        int number = rand() % 6 + 1;
        printf("Roll %d = %d\n",i,number);
    }    
}

void lotteryGenrator(int lotterylength)
{
    int number [] = {0,1,2,3,4,5,6,7,8,9};
    int num = sizeof(number)/sizeof(number[0]);
    printf("The Lottery number is = ");
    for (int i =0;i<=lotterylength;i++)
    {
        printf("%d",number[rand() % num]);
    }
    printf("\n");
}

void password1(int passwordlength)
{
    char characters[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()1234567890";
    int size = sizeof(characters)-1;
    printf("Password is = ");
    for(int i=0;i<passwordlength;i++)
    {
        printf("%c",characters[rand() % size]);
    }
    printf("\n");
}


int main ()
{
    srand(time(0));
    int passwordlength = 12;

    dicerolling(); // Simulates dice rolling

    password1(passwordlength); //Genrates a password
    
    lotteryGenrator(8); // Genrates a random lotteery number
    return 0;
}