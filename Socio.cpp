#include "Socio.h"
#include <string>
#include <cstring>
#include <fstream>


Socio::Socio (std::string s_nombre, std::string s_apellido, int s_dni, std::string s_domicilio,
			  int s_movil, std::string s_email, int s_dnac, int s_mnac, int s_anac)
{
	
	nombre = s_nombre;
	apellido = s_apellido;
	dni = s_dni;
	domicilio = s_domicilio;
	movil = s_movil;
	email = s_email;
	dia_nac = s_dnac;
	mes_nac = s_mnac;
	anio_nac = s_anac;
}

std::string Socios::VerNombre() const { return nombre; }

std::string Socios::VerApellido() const { return apellido; }

int Socios::VerDNI() const { return dni; }

std::string Socios::VerDomicilio() const { return domicilio; }

int Socios::VerMovil() const { return movil; }

std::string Socios::VereMail() const { return email; }

int Socios::VerDiaNac() const { return dia_nac; }
int Socios::VerMesNac() const { return mes_nac; }
int Socios::VerAnioNac() const { return anio_nac; }

void Socios::ModificarNombre(std::string s_nombre){
	nombre = s_nombre;
}

void Socios::ModificarApellido(std::string s_apellido){
	apellido = s_apellido;
}

void Socios::ModificarDNI(int s_dni){
	dni = s_dni;
}

void Socios::ModificarDomicilio(std::string s_domicilio){
	domicilio = s_domicilio;
}

void Socios::ModificarMovil(int s_movil){
	movil = s_movil;
}

void Socios::ModificareMail(std::string s_email){
	email = s_email;
}

void Socios::ModificarFechaNac(int s_dnac, int s_mnac, int s_anac){
	dia_nac = s_dnac;
	mes_nac = s_mnac;
	anio_nac = s_anac;
}

void Socios::setDataSocio(std::ofstream &data) {
	reg_socio reg;
	strcpy(reg.nombre, nombre.c_str());
	strcpy(reg.apellido, apellido.c_str());
	reg.dni = dni;
	strcpy(reg.domicilio, domicilio.c_str());
	reg.movil = movil;
	strcpy(reg.email, email.c_str());
	reg.anio_nac = anio_nac;
	reg.mes_nac = mes_nac;
	reg.dia_nac = dia_nac;
	data.write((char*)&reg,sizeof(reg));
}

void Socios::getDataSocio(std::ifstream &data){
	reg_socio reg;
	data.read((char*)&reg,sizeof(reg));
	nombre = reg.nombre;
	apellido = reg.apellido;
	dni = reg.dni;
	domicilio = reg.domicilio;
	movil = reg.movil;
	email = reg.email;
	anio_nac = reg.anio_nac;
	mes_nac = reg.mes_nac;
	dia_nac = reg.dia_nac;	
}


