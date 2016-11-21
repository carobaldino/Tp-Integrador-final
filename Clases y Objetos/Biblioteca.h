/*
 * Biblioteca.h
 *
 *  Created on: 20/11/2016
 *      Author: Baldino
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

struct Biblioteca;
typedef struct Biblioteca tipoBiblioteca;

tipoBiblioteca* crearBiblioteca();
int maximoTamanioIndividual_get(tipoBiblioteca*);
void maximoTamanioIndividual_set(tipoBiblioteca*,int);


#endif /* BIBLIOTECA_H_ */
