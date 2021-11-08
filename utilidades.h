#ifndef UTILIDADES_H
#define UTILIDADES_H

#include "archivos.h"
#include "edificio.h"

const int ERROR_EXCEDENTE = -1;
const int ERROR_NOMBRE_INCORRECTO = -2;
const int ERROR_DEMOLER = -3;
const int CANTIDAD_DEVUELTA = 2;

int encontrar_edificio(Edificio* vector_edificios, int cantidad_edificios);
void mostrar_inventario(Material* vector_materiales, int tipos_de_materiales);
void mostrar_costo_edificio(Edificio* vector_edificio, int posicion_edificio);
void mostrar_todos_edificios(Edificio* vector_edificios, int cantidad_edificios, Ubicacion* vector_ubicaciones, int edificios_construidos);
void cargar_posicion_material_edificios(Material* vector_materiales, int tipos_de_materiales, int posiciones_materiales[]);
void verificar_construccion(Mapa* &mapa, Material* &vector_materiales, Edificio* &vector_edificios, int posicion_edificio, Ubicacion* &vector_ubicaciones, int &edificios_construidos, int posiciones_materiales[]);
void construir_edificio(Material* &vector_materiales, Edificio* &vector_edificios, int posicion_edificio, int posiciones_materiales[]);
bool confirmar_construccion(Material* vector_materiales, Edificio* vector_edificios, int posicion_edificio, int posiciones_materiales[]);
int obtener_cantidad_edificio(Ubicacion* vector_ubicaciones, int edificios_construidos, string nombre_edificio);
void mostrar_edificios_construidos(Edificio* vector_edificios, int cantidad_edificios, Ubicacion* vector_ubicaciones, int edificios_construidos);
bool verificar_coordenada_valida(Mapa* mapa, Ubicacion* vector_ubicaciones, int edificios_construidos, int* coordenadas);
void pedir_coordenadas(int* coordenadas);
void pedir_fila(int &fila);
void pedir_columna(int &columna);
bool coordenada_ocupada(Ubicacion* vector_ubicaciones, int edificios_construidos, int* coordenadas);
void cargar_ubicaciones_mapa(Mapa* &mapa, Ubicacion* vector_ubicaciones, int edificios_construidos, Edificio* vector_edificios, int cantidad_edificios);
void verificar_demolicion(Mapa* &mapa, Material* &vector_materiales, Edificio* &vector_edificios, int cantidad_edificios, Ubicacion* &vector_ubicaciones, int &edificios_construidos, int posiciones_materiales[]);
bool confirmar_demolicion(Material* vector_materiales, Edificio* vector_edificios, int cantidad_edificios, string nombre_edificio, int posiciones_materiales[]);
void demoler_edificio(Material* &vector_materiales, Edificio* &vector_edificios, int cantidad_edificios, string nombre_edificio, int posiciones_materiales[]);
void recolectar_recursos_producidos(Material* vector_materiales, Edificio* vector_edificios, int cantidad_edificios, Ubicacion* vector_ubicaciones, int edificios_construidos, int posiciones_materiales[]);

#endif // UTILIDADES_H