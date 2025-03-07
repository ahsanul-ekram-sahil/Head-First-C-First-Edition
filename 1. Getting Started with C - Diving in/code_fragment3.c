// Created by: Ahsanul Ekram Patwary (Sahil)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main()
{
    /* Assume name is shorter than 20 characters. */
    char ex[20];
    puts("Enter girlfriend's name:");
    scanf("%19s", ex);
    printf("Dear %s,\n\n\tYou're history.\n", ex);

    return 0;
}