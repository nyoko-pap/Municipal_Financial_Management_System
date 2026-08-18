#include <stdio.h>
#include <string.h>

int main(void)
{
    char municipality[100];
    char mayor[100];
    int population;

    printf("Municipal Financial Management System\n\n");
    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    if (!fgets(municipality, sizeof municipality, stdin)) return 1;
    municipality[strcspn(municipality, "\r\n")] = '\0';

    printf("Enter Mayor's Name: ");
    if (!fgets(mayor, sizeof mayor, stdin)) return 1;
    mayor[strcspn(mayor, "\r\n")] = '\0';

    printf("Enter Population: ");
    while (scanf("%d", &population) != 1) {
        int c;
        while ((c = getchar()) != EOF && c != '\n');
        printf("Invalid input. Enter Population: ");
    }

    printf("\n---------------------------------\n");
    printf("Municipal Financial Management System - Report\n");
    printf("---------------------------------\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);
    printf("---------------------------------\n");

    return 0;
}
