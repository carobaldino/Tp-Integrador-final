/*
 * tests.c
 *
 *  Created on: 20/11/2016
 *      Author: Baldino
 */
#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
#include "ContenidoBinario.h"
#include "ContenidoTexto.h"


int main(){
   int tamanioVector;
   char linea[100];

   tipoBiblioteca* biblioteca = crearBiblioteca();
   printf("Se creo un objeto Biblioteca.\n");

   printf("Tamaño de la biblioteca sin settear: %o", maximoTamanioIndividual_get(biblioteca));

   maximoTamanioIndividual_set(biblioteca,1000);
   printf("\nTamaño de la biblioteca setteado con 1000: %i", maximoTamanioIndividual_get(biblioteca));


   printf("\nIngrese una linea de para agregar en el contenido de texto: ");
   gets(linea);

   tipoContenidoTexto* contenidoT = crearContenidoTexto();
   biblioteca->textos = contenidoT;

   agregarContenidoDeTexto(linea,biblioteca->textos);
   printf("\nLa linea agregada fue: %s",biblioteca->textos);







   return 0;
}
