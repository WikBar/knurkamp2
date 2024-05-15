/* NIE DOTYKAJ */
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void weryfikacja1(void* ss, int sz)
{
    char* st = (char*)ss;
    int wiek = *st;
    if(wiek != 105)
    {
        printf("Błędne rozwiązanie\n");
        return;
    }
    st += sz / 3;
    uint64_t imiePtr = (*(uint64_t*)st);
    char* imie = (char*)imiePtr;
    st += sz / 3;

    if(strcmp(imie, "Jan") != 0)
    {
        printf("Błędne rozwiązanie\n");
        return;
    }
    float wzrost = *(float*)st;
    if(wzrost < 2.138 && wzrost > 2.136)
    {
        printf("Brawo poprawne rozwiązanie\n");
    }
    else
    {
        printf("Ups, błędne rozwiązanie\n");
    }
}
/* KONIEC SEKCJI NIE DOTYKAJ */

/*
 Treść zadania:

 Stwórz strukturę o nazwie `czlowiek`.
 Zrób żeby zawierała następujące pola:
 - `wiek` <- liczba całkowita (rozmiar standardowy)
 - `imie` <- no jego imie a co xD (ptr do stringa)
 - `wzrost` <- liczba zmiennoprzecinkowa w metrach amerykańskich np 1.234

 Stwórz człowieka o imieniu `Jan`, wieku 105 lat, wzroście 2 m 137 cm (w metrach amerykańskich - 1 metr = 1000 cm - 2m 137cm = 2.137)
 Pola wiek, imie, i wzrost muszą mieć taką samą koleność.

 Uruchom funckje `weryfikacja1` ze swojej funkcji main podając wskaźnik do człowieka oraz rozmiar struktury człowiek jako drugi parametr.

 ***** Zadanie na 6 albo gwiazdke jak zwał tak zwał *****
 Opisz co robi po kolei funckja `void weryfikacja1(void* ss, int sz)`
*/

int main(void)
{
    typedef struct {
        int wiek;
        char *imie;
        float wzrost;
    }Czlowiek;

    Czlowiek ludz;
    ludz.wiek=105;
    ludz.wzrost=2.137;
    ludz.imie="Jan";
    weryfikacja1(&ludz, sizeof(ludz));
}