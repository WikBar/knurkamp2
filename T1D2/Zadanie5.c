#include "stdio.h"
#include "string.h"


struct czlowiek{
    char* imie;
    int wiek;
    char* zawod;
};

int odczytujaca(char* nazwaPliku, struct czlowiek * ludz){

    FILE *file = fopen(nazwaPliku, "w+");
    rewind(file);
    if (file == NULL) {
        printf("Nie można otworzyć pliku do zapisu.\n");
        return 1;
    }
    fscanf(file, "%s %d %s", ludz->imie,&ludz->wiek,ludz->zawod);
    printf("%s %d %s",ludz->imie,ludz->wiek,ludz->zawod);
    fclose(file);
    return 0;
}

int zapisujaca(char* nazwaPliku, struct czlowiek * ludz){
    FILE *file = fopen(nazwaPliku, "w");
    if (file == NULL) {
        printf("Nie można otworzyć pliku do zapisu.\n");
        return 1;
    }
    fprintf(file, "%s %d %s", ludz->imie,ludz->wiek,ludz->zawod);
    fclose(file);
    return 0;
}

int main(int argc,char** argv) {
    const char* imie="Bozydar";
    const char* zawod="Rodzicow";
    const int wiek=10;

    char* fileName=argv[1];
    char* op=argv[2];
    struct czlowiek ludz;

    ludz.imie=imie;
    ludz.zawod=zawod;
    ludz.wiek=wiek;

    if (strcmp(op,"ODCZYTAJ") != 0){
        odczytujaca(fileName,&ludz);
    }else if(strcmp(op,"ZAPIS") != 0){
        zapisujaca(fileName,&ludz);
    }else {
        printf("CHUJOWE PODAŁES\n. JESZCZE RAZ\n");
    }


    return 0;
}