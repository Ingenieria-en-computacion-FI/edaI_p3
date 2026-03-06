#ifndef __PELICULA_H__
#define __PELICULA_H__

#define MAX_DIRECTORES 10

/* Tipo opaco */
typedef struct Pelicula Pelicula;


/* TODO
   Definir la estructura Pelicula

   Debe contener:
   - titulo (cadena dinámica)
   - anio
   - genero (cadena dinámica)
   - arreglo de directores
   - contador de directores
*/
struct Pelicula
{
    /* TODO */
};

/* Crear una película */
Pelicula* crearPelicula(const char* titulo, int anio, const char* genero);

/* Imprimir información de la película */
void imprimir(Pelicula* p);

/* Cambiar el género */
void cambiarGenero(Pelicula* p, const char* nuevoGenero);

/* Agregar un director */
void agregarDirector(Pelicula* p, const char* director);

/* Liberar memoria */
void destruir(Pelicula* p);

#endif
