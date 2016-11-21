/*
 * Biblioteca.c
 *
 *  Created on: 20/11/2016
 *      Author: Baldino
 */
#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
#include "ContenidoBinario.h"
#include "ContenidoTexto.h"

struct Biblioteca{
   int maximoTamanioIndividual;
   tipoContenidoTexto* textos;
   tipoContenidoBinario* binarios;
};

tipoBiblioteca* crearBiblioteca(){
   tipoBiblioteca* unaBiblioteca = malloc(sizeof(tipoBiblioteca));
   return unaBiblioteca;
}

int maximoTamanioIndividual_get(tipoBiblioteca* biblioteca){
   return biblioteca->maximoTamanioIndividual;
}

void maximoTamanioIndividual_set(tipoBiblioteca* biblioteca, int tamanio){
   biblioteca->maximoTamanioIndividual=tamanio;
}


