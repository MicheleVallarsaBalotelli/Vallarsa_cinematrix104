#include "cinematrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdin.h>
#include <time.h>

#define max_string 100

typedef struct {
    char titolo[max_string100]; // array di caratteri per memorizzare stringhe
    char regista[max_string100];
    int anno;
    float durata;
} Film;

void aggiungiFilm(Film *catalogo, int *numFilm) {

printf("Inserisci titolo: ");
gets(catalogo->titolo);
printf("Inserisci regista: ");
gets(catalogo->regista);
printf("Inserisci anno: ");
scanf("%d", &catalogo->anno);
printf("Inserisci durata: ");
scanf("%f", &catalogo->durata);



}

int main(void) {

    Film *catalogo = (Film *)malloc(sizeof(Film));
    int numFilm = 0;
    realloc(catalogo, sizeof(Film));


    return 0;
}