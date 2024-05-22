#ifndef SOCIOS_H
#define SOCIOS_H
#include <fstream>
#include <string>


struct reg_socio{
	int dni;
	char nombre[256];
	char apellido[256];
	char domicilio[256];
	char movil[17];
};

class Socios {
	int dni;
	std::string nombre;
	std::string apellido;
	std::string domicilio;
	std::string movil;
public:
	Socios();
	Socios(int s_dni, std::string s_nombre, std::string s_apellido, std::string s_domicilio, std::string s_movil);
	int getDNI();
	std::string getNombre();
	std::string getApellido();
	std::string getDomicilio();
	std::string getMovil();
	
	void editDNI(int doc);
	void editNombre(std::string s_nom);
	void editApellido(std::string s_ape);
	void editDomicilio(std::string s_dom);
	void editMovil(std::string s_mov);
	
	void setSocio(std::ofstream &data);
	void getSocio(std::ifstream &data);
	
	std::string ValidarSocio();
};

bool compara_dni_socio(Socios s1, Socios s2);
bool compara_apellido_y_nombre_socio(Socios s1, Socios s2);
bool compara_domicilio_socio(Socios s1, Socios s2);
bool compara_movil_socio(Socios s1, Socios s2);

#endif

