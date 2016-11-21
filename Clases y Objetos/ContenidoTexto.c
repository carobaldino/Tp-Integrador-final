/*
 * ContenidoTexto.c
 *
 *  Created on: 21/11/2016
 *      Author: Baldino
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "ContenidoTexto.h"

struct ContenidoTexto{
   char nombre[30];
   int contenido[100];
   tipoContenidoTexto* ptr_contenido;
};


tipoContenidoTexto* crearContenidoTexto(){
         tipoContenidoTexto* contenidoTexto = malloc(sizeof(tipoContenidoTexto));
         return contenidoTexto;
}

void agregarContenidoTexto(char linea[],tipoContenidoTexto* contenidoTexto){
      strcpy(contenidoTexto->contenido,contenidoTexto);
}

void renombrar(tipoContenidoTexto* unContenido, char nombre){
   strcpy(unContenido->nombre,nombre);
}

bool tieneNombreCorto(tipoContenidoTexto* unContenido){
   return unContenido->nombre < 200;
}

