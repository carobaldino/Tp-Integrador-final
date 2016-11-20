#include <stdio.h>
#include <stdlib.h>
#include "Perro.h"

struct Perro{
    int edad;
};


int edad_get(tipoPerro* unPerro){
    return unPerro->edad;
}

void edad_set(tipoPerro* unPerro, int nuevaEdad){
    unPerro->edad = nuevaEdad;
}

tipoPerro* crearPerro(){
    tipoPerro* unPerro = malloc(sizeof(tipoPerro));
    unPerro->edad = 0;
    return unPerro;
}

void modificarEdad(tipoPerro* perrito){
    perrito->edad = 5;
}


