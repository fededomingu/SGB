#ifndef UTILS_H
#define UTILS_H
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <vector>


/// Convierte una cadena a solo minusculas
void pasar_a_minusculas(std::string &s);

///Calcula Fecha Actual del sistema devuelve un int YYYYMMDD
int FechaActual();

///Recibe el año y devuelve un vector con los dias de cada mes y si es o no año bisiesto
std::vector<int> Meses(int a);

////Recibe un entero y devuelve la fecha de sumar el entero mas la fecha actual formato YYYYMMDD
int Fecha_Devolucion(int fd);

bool is_number(std::string str);


#endif
