#include <stdio.h>

int main() {
    char municipalityName[100];
    char mayorName[100];
    int population;

    printf("===============================================\n");
    printf("       MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("===============================================\n");
    printf("       Welcome to Windhoek Municipality\n");
    printf("===============================================\n\n");

    printf("Enter Municipality Name: ");
    fgets(municipalityName, sizeof(municipalityName), stdin);

    printf("Enter Mayor's Name: ");
    fgets(mayorName, sizeof(mayorName), stdin);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n\n");
    printf("===============================================\n");
    printf("              MUNICIPALITY REPORT\n");
    printf("===============================================\n");
    printf("Municipality Name : %s", municipalityName);
    printf("Mayor's Name      : %s", mayorName);
    printf("Population        : %d\n", population);
    printf("===============================================\n");

    return 0;
}