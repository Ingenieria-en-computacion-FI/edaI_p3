#ifndef NODO_H
#define NODO_H

/* Declaración incompleta del tipo Nodo (tipo opaco) */
typedef struct Nodo Nodo;

// TODO: Definir la estructura Nodo que debe contener un entero llamado valor

/* Crea un nodo con el valor indicado */
Nodo* crearNodo(int valor);

/* Obtiene el valor almacenado en el nodo */
int obtenerValor(Nodo* nodo);

/* Cambia el valor almacenado en el nodo */
void asignarValor(Nodo* nodo, int valor);

/* Libera la memoria del nodo */
void destruirNodo(Nodo* nodo);

#endif
