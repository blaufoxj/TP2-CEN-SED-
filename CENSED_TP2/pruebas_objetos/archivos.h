#ifndef ARCHIVOS_H
#define ARCHIVOS_H

#include "utilidades.h"
<<<<<<< HEAD
#include "ubicacion.h"
=======
>>>>>>> 6d37fb58a82d55530f82141e1956555915b71330

const string PATH_EDIFICIOS = "edificios.txt";
const string PATH_MATERIALES = "materiales.txt";
const string PATH_UBICACIONES = "ubicaciones.txt";
const string PATH_MAPA = "mapa.txt";
<<<<<<< HEAD
const char PARENTESIS_CHAR = '(';
const int OPCION_NUMEROS = 1;
const int OPCION_PARENTESIS = 0;

const int POSICION_INICIAL = 0;

=======
>>>>>>> 6d37fb58a82d55530f82141e1956555915b71330

//pre: -
//post: Carga el archivo de materiales al 'vector_materiales' y devuelve True.
//      Imprime un error y devuelve False si el archivo no existe.
bool cargar_materiales(Material* &vector_materiales, int &tipos_de_materiales);

//pre: -
//post: Agrega el 'material' al 'vector_materiales' de forma dinámica.
//      Actualiza el valor de 'tipos_de_materiales'.
void agregar_material(Material* &vector_materiales, Material material, int &tipos_de_materiales);

//pre: -
//post: Carga el archivo de edificios al 'vector_edificios' y devuelve True.
//      Imprime un error y devuelve False si el archivo no existe.
bool cargar_edificios(Edificio* &vector_edificios, int &cantidad_edificios);

//pre: -
//post: Agrega el 'edificio' al 'vector_edificios' de forma dinámica.
//      Actualiza el valor de 'cantidad_edificios'.
void agregar_edificio(Edificio* &vector_edificios, Edificio edificio, int &cantidad_edificios);

bool cargar_ubicaciones(Ubicacion* &vector_ubicaciones, int &edificios_construidos);
void agregar_ubicacion(Ubicacion* &vector_ubicaciones, Ubicacion ubicacion, int &edificios_construidos);
bool cargar_mapa(Mapa* &mapa);

<<<<<<< HEAD
string leer_palabra_compuesta(ifstream &archivo, string &nombre_edificio, int opcion);

bool verificar_tipo_caracter(string palabra, int tipo_caracter);

#endif // ARCHIVOS_H
=======
#endif // ARCHIVOS_H
>>>>>>> 6d37fb58a82d55530f82141e1956555915b71330
