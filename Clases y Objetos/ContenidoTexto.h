/*
 * ContenidoTexto.h
 *
 *  Created on: 21/11/2016
 *      Author: Baldino
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#ifndef CONTENIDOTEXTO_H_
#define CONTENIDOTEXTO_H_

struct ContenidoTexto;
typedef struct ContenidoTexto tipoContenidoTexto;

tipoContenidoTexto* crearContenidoTexto();
void agregarContenidoTexto(char linea[],tipoContenidoTexto* contenidoTexto);
//void renombrar(tipoContenidoTexto* unContenido, char nombre);
bool tieneNombreCorto(tipoContenidoTexto* unContenido);

#endif /* CONTENIDOTEXTO_H_ */
