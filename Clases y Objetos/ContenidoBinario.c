/*
 * ContenidoBinario.c
 *
 *  Created on: 21/11/2016
 *      Author: Baldino
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "ContenidoBinario.h"

struct ContenidoBinario{
   char nombre[30];
   int contenido[100];
   tipoContenidoBinario* ptr_contenido;
};
//tipoContenidoBinario* crearContenidoBinario(){
//         tipoContenidoBinario* contenidoBinario = malloc(sizeof(tipoContenidoBinario));
//         contenidoBinario->contenido=NULL;
//         return contenidoBinario;
//   }

//void agregarContenidoBinario(int binario,tipoContenidoTexto* contenidoTexto){
//      contenidoTexto->contenido = binario;
//}



void renombrar(tipoContenidoBinario* unContenido, char nombre){
   strcpy(unContenido->nombre,nombre);
}

//bool tieneNombreCorto(tipoContenidoTexto* unContenido){
//   return unContenido->nombre < 200;
//}
