/*
 ============================================================================
 Name        : EjemploPunterosFuncion.c
 Author      : Carolina Baldino
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



typedef struct Perro {
      int nivelSuenio;
      int nivelHambre;
      int nivelFelicidad;
}tipoPerro;


int nivelSuenio_get(tipoPerro* unPerro){
   return unPerro->nivelSuenio;
}

int nivelHambre_get(tipoPerro* unPerro){
   return unPerro->nivelHambre;
}

void nivelSuenio_set(tipoPerro* unPerro,int cantSuenio){
   unPerro->nivelSuenio = cantSuenio;
}

void nivelHambre_set(tipoPerro* unPerro,int cantHambre){
   unPerro->nivelHambre = cantHambre;
}

void comer (tipoPerro* unPerro){
   unPerro->nivelSuenio += unPerro->nivelSuenio * 0.5;
}

void correr (tipoPerro* unPerro){
   unPerro->nivelHambre += unPerro->nivelHambre * 0.5;
}



int main() {
   int hambre,suenio;

   tipoPerro* perrito = malloc(sizeof(tipoPerro));

   printf("\nNivel de hambre?: ");
   scanf("%d",&hambre);
   nivelHambre_set(perrito,hambre);


   printf("\nNivel de suenio?: ");
   scanf("%d",&suenio);
   nivelSuenio_set(perrito,suenio);

   printf("\n\nAhora vamos a hacer COMER al perro.. \naumenta un 50 porciento su nivel de suenio ");
   comer(perrito);

   printf("\n\nAhora vamos a hacer CORRER al perro.. \naumenta un 50 porciento su nivel de hambre ");
   correr(perrito);

   printf("\n\nEstado Final del perro: \n");
   printf("Nivel de Hambre: %d\n",nivelHambre_get(perrito));
   printf("Nivel de Suenio: %d\n",nivelSuenio_get(perrito));



   printf("\n\n fin.");


   return 0;
}
