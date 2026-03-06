#ifndef PELICULA_H
#define PELICULA_H

#include <stdbool.h>

// Todo (1) define la estructura Pelicula con sus características y define un alias


// Todo(2): completa el prototipo de la función crearPelicula
Pelicula* crearPelicula();

// Todo(3): completa el prototipo de la función destruir
void destruir();

/* Observadores */
// Todo(4): Completa los prototipos para que reciban una referencia constante
const char* obtener_titulo();
const char* obtener_director();
int obtener_anio();
const char* obtener_genero();
int otener_duracion();
float obtener_calificacion();

/* Modificadores */
// Todo(5): Completa los prototipos para que reciban una referencia y el valor de loq eu se va a modificar
void calificar();
void cambiarGenero();
void agregarDirector();

/* Derivadas */
// Todo(6): Completa los prototipos para que reciban una referencia constante
bool esClasica();
bool esLarga();

#endif
