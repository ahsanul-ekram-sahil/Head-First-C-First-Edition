// Created by: Ahsanul Ekram Patwary (Sahil)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main()
{
    char suit = 'O';

    switch (suit)
    {
    case 'C':
        puts("Clubs");
        break;
    case 'D':
        puts("Diamonds");
        break;
    case 'H':
        puts("Hearts");
        break;
    case 'S':
        puts("Spades");
        break;
    default:
        puts("Invalid suit");
    }

    return 0;
}