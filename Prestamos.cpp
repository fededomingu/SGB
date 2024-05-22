#include "Prestamos.h"
#include "Socios.h"
#include "Libros.h"
#include "Utils.h"
#include <fstream>
#include <cstring>


Prestamos::Prestamos(){}
Prestamos::Prestamos(Socios soc_p, Libros lib_p,int cd_p){
	dni_p = soc_p.getDNI();
	nombre_p = soc_p.getNombre();
	apellido_p = soc_p.getApellido();
	movil_p = soc_p.getMovil();
	codigo_p = lib_p.getCodigo();
	titulo_p = lib_p.getTitulo();
	cant_dias_p = cd_p;
	stock = lib_p.getStock();
	dia = Fecha_Devolucion(cd_p)%100;
	mes = (Fecha_Devolucion(cd_p)/100)%100;
	anio = Fecha_Devolucion(cd_p)/10000;
}

int Prestamos::getCantidaDiasPrestamo(){ return cant_dias_p; }
int Prestamos::getDia_P(){ return dia; }
int Prestamos::getMes_P(){ return mes; }
int Prestamos::getAnio_P(){ return anio; }
int Prestamos::getDNI_P(){ return dni_p; }
int Prestamos::getCodigo_P(){ return codigo_p; }
std::string Prestamos::getNombre_P(){ return nombre_p; }
std::string Prestamos::getApellido_P(){ return apellido_p; }
std::string Prestamos::getMovil_P(){ return movil_p; }
std::string Prestamos::getTitulo_P(){ return titulo_p; }

void Prestamos::setPrestamo(std::ofstream &data){
	reg_prestamo reg;
	reg.dni_p = dni_p;
	strcpy(reg.nombre_p, nombre_p.c_str());
	strcpy(reg.apellido_p, apellido_p.c_str());
	strcpy(reg.movil_p, movil_p.c_str());
	reg.codigo_p = codigo_p;
	strcpy(reg.titulo_p, titulo_p.c_str());
	reg.dia = dia;
	reg.mes = mes;
	reg.anio = anio;
	data.write((char*)&reg,sizeof(reg));
}

void Prestamos::getPrestamo(std::ifstream &data){
	reg_prestamo reg;
	data.read((char*)&reg,sizeof(reg));
	dni_p = reg.dni_p;
	nombre_p = reg.nombre_p;
	apellido_p = reg.apellido_p;
	movil_p = reg.movil_p;
	codigo_p = reg.codigo_p;
	titulo_p = reg.titulo_p;
	dia = reg.dia;
	mes = reg.mes;
	anio = reg.anio;
}

bool compara_dni_prestamo(Prestamos p1, Prestamos p2){
	return p1.getDNI_P() < p2.getDNI_P();
}

bool compara_apellido_y_nombre_prestamo(Prestamos p1, Prestamos p2){
	std::string a1 = p1.getApellido_P()+", "+p1.getNombre_P();
	std::string a2 = p2.getApellido_P()+", "+p2.getNombre_P();
	pasar_a_minusculas(a1);
	pasar_a_minusculas(a2);
	return a1 < a2;
}

bool compara_movil_prestamo(Prestamos p1, Prestamos p2){
	std::string m1 = p1.getMovil_P();
	std::string m2 = p2.getMovil_P();
	pasar_a_minusculas(m1);
	pasar_a_minusculas(m2);
	return m1 < m2;
}

bool compara_codigo_prestamo(Prestamos p1, Prestamos p2){
	return p1.getCodigo_P() < p2.getCodigo_P();
}

bool compara_titulo_prestamo(Prestamos p1, Prestamos p2){
	std::string t1 = p1.getTitulo_P();
	std::string t2 = p2.getTitulo_P();
	pasar_a_minusculas(t1);
	pasar_a_minusculas(t2);
	return t1 < t2;
}

bool compara_fecha_dev_prestamo(Prestamos p1, Prestamos p2){
	int fecha1 = p1.getAnio_P()*10000+p1.getMes_P()*100+p1.getDia_P();
	int fecha2 = p2.getAnio_P()*10000+p2.getMes_P()*100+p2.getDia_P();
	return fecha1 < fecha2;
}

std::string Prestamos::ValidarPrestamo(Socios s, Libros l){
	std::string e;
	if(cant_dias_p < 1) e+="Debe ingresar los dias de prestamo\n";
	e+= s.ValidarSocio();
	e+= l.ValidarLibro();
	
	return e;
	
}
