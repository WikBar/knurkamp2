#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DUGOSC 100

int main() {
    char string1[DUGOSC];
    char string2[DUGOSC];
    char combined[DUGOSC * 2];

    printf("Pierwszy string: ");
    fgets(string1, DUGOSC, stdin);
    string1[strcspn(string1, "\n")] = 0;

    printf("Drugi string: ");
    fgets(string2, DUGOSC, stdin);
    string2[strcspn(string2, "\n")] = 0;

    strcpy(combined, string1);
    strcat(combined, string2);

    FILE *file = fopen("dupa.txt", "w");
    if (file == NULL) {
        printf("Nie można otworzyć pliku do zapisu.\n");
        return 1;
    }
    fprintf(file, "%s", combined);
    fclose(file);

    printf("Połączone stringi w 'dupa.txt'.\n");

    return 0;
}