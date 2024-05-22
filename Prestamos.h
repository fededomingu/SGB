#ifndef PRESTAMOS_H
#define PRESTAMOS_H
#include <fstream>
#include "Socios.h"
#include "Libros.h"


struct reg_prestamo{
	int dni_p;
	char nombre_p[256];
	char apellido_p[256];
	char movil_p[256];
	int codigo_p;
	char titulo_p[256];
	int dia, mes, anio;
};

class Prestamos {
	int dni_p;
	std::string nombre_p;
	std::string apellido_p;
	std::string movil_p;
	int codigo_p;
	std::string titulo_p;
	int dia, mes, anio, cant_dias_p, stock;
public:
	Prestamos();
	Prestamos(Socios soc_p, Libros lib_p, int cd_p);
	int getCantidaDiasPrestamo();
	int getStock_P();
	int getDia_P();
	int getMes_P();
	int getAnio_P();
	int getDNI_P();
	int getCodigo_P();
	std::string getNombre_P();
	std::string getApellido_P();
	std::string getMovil_P();
	std::string getTitulo_P();
	
	void setPrestamo(std::ofstream &data);
	void getPrestamo(std::ifstream &data);
	
	std::string ValidarPrestamo(Socios s, Libros l);
};

bool compara_dni_prestamo(Prestamos p1, Prestamos p2);
bool compara_apellido_y_nombre_prestamo(Prestamos p1, Prestamos p2);
bool compara_movil_prestamo(Prestamos p1, Prestamos p2);
bool compara_codigo_prestamo(Prestamos P1, Prestamos p2);
bool compara_titulo_prestamo(Prestamos p1, Prestamos p2);
bool compara_fecha_dev_prestamo(Prestamos p1, Prestamos p2);

#endif

