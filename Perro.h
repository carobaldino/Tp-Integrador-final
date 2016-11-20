#ifndef PERRO_H_INCLUDED
#define PERRO_H_INCLUDED

struct Perro;
typedef struct Perro tipoPerro;

int edad_get(tipoPerro*);
void edad_set(tipoPerro*,int);
tipoPerro* crearPerro();
void modificarEdad(tipoPerro*);



#endif // PERRO_H_INCLUDED
