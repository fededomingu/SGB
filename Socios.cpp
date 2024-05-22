#include "Socios.h"
#include <fstream>
#include <cstring>
#include <string>
#include "Utils.h"

Socios::Socios(){}
Socios::Socios(int s_dni, std::string s_nombre, std::string s_apellido, std::string s_domicilio, std::string s_movil){
	dni = s_dni;
	nombre = s_nombre;
	apellido = s_apellido;
	domicilio = s_domicilio;
	movil = s_movil;
}

int Socios::getDNI(){ return dni; }
std::string Socios::getNombre(){ return nombre; }
std::string Socios::getApellido(){ return apellido; }
std::string Socios::getDomicilio(){ return domicilio; }
std::string Socios::getMovil(){ return movil; }

void Socios::editDNI(int doc){ dni = doc; }
void Socios::editNombre(std::string s_nom){ nombre = s_nom; }
void Socios::editApellido(std::string s_ape){ apellido = s_ape; }
void Socios::editDomicilio(std::string s_dom){ domicilio = s_dom; }
void Socios::editMovil(std::string s_mov){ movil = s_mov; }

void Socios::setSocio(std::ofstream &data){
	reg_socio reg;
	reg.dni=dni;
	strcpy(reg.nombre,nombre.c_str());
	strcpy(reg.apellido,apellido.c_str());
	strcpy(reg.domicilio,domicilio.c_str());
	strcpy(reg.movil,movil.c_str());
	data.write((char*)&reg,sizeof(reg));
}

void Socios::getSocio(std::ifstream &data){
	reg_socio reg;
	data.read((char*)&reg,sizeof(reg));
	dni=reg.dni;
	nombre=reg.nombre;
	apellido=reg.apellido;
	domicilio=reg.domicilio;
	movil=reg.movil;
}


bool compara_dni_socio(Socios s1, Socios s2){
	return s1.getDNI()<s2.getDNI();
}

bool compara_apellido_y_nombre_socio(Socios s1, Socios s2){
	std::string n1=s1.getApellido()+", "+s1.getNombre();
	std::string n2=s2.getApellido()+", "+s2.getNombre();
	pasar_a_minusculas(n1);
	pasar_a_minusculas(n2);
	return n1<n2;
}

bool compara_domicilio_socio(Socios s1, Socios s2){
	std::string d1=s1.getDomicilio();
	std::string d2=s2.getDomicilio();
	pasar_a_minusculas(d1);
	pasar_a_minusculas(d2);
	return d1<d2;
}

bool compara_movil_socio(Socios s1, Socios s2){
	std::string m1=s1.getMovil();
	std::string m2=s2.getMovil();
	pasar_a_minusculas(m1);
	pasar_a_minusculas(m2);
	return m1<m2;
}

std::string Socios::ValidarSocio(){
	std::string e;
	if(dni < 999999 || dni > 100000000) e += "El DNI debe contener solo ocho numeros\n";
	
	if(nombre.size()==0) e+="Debe ingresar un nombre\n";
	if(nombre.size() > 256) e+="El nombre es muy largo\n";
	
	if(apellido.size()==0) e+="Debe ingresar un apellido\n";
	if(apellido.size() > 256) e+="El apellido es muy largo\n";
	
	if(domicilio.size()==0) e+="Debe ingresar un domicilio\n";
	if(domicilio.size() > 256) e+="El domicilio es muy largo\n";
	
	if(movil.size()==0) e+="Debe ingresar un movil\n";
	if(movil.size() > 17) e+="El movil es muy largo\n";
	
	return e;
}	
