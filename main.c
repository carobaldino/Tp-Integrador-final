/*
 ============================================================================
 Name        : pruebas.c
 Author      : Carolina Baldino
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Perro.h"

int main() {
    tipoPerro* perrito = crearPerro();
    printf("Edad inicial del perrito: %d",edad_get(perrito));
    modificarEdad(perrito);
    printf("\nEdad del perrito modificada: %d",edad_get(perrito));
   return 0;
}

