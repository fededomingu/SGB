#ifndef SOCIO_H
#define SOCIO_H

struct reg_socio{
	char nombre[256];
	char apellido[256];
	int dni;
	char domicilio[256];
	int movil;
	char email[256];
	int dia_nac, mes_nac, anio_nac;
};


class Socio {
	std::string nombre;
	std::string apellido;
	int dni;
	std::string domicilio;
	int movil;
	std::string email;
	int dia_nac, mes_nac, anio_nac;
public:
	Socio(std::string s_nombre="", std::string s_apellido="", int s_dni=0, std::string s_domicilio="",
		  int s_movil=0, std::string s_email="", int s_dnac=0, int s_mnac=0, int s_anac=0);
	
	std::string VerNombre() const;
	std::string VerApellido() const;
	int VerDNI() const;
	std::string VerDomicilio() const;
	int VerMovil() const;
	std::string VereMail() const;
	int VerDiaNac() const;
	int VerMesNac() const;
	int VerAnioNac() const;
	
	void ModificarNombre(std::string s_nombre);
	void ModificarApellido(std::string s_apellido);
	void ModificarDNI(int s_dni);
	void ModificarDomicilio(std::string s_domicilio);
	void ModificarMovil(int s_movil);
	void ModificareMail(std::string s_email);
	void ModificarFechaNac(int s_dnac, int s_mnac, int s_anac);
	
	void setDataSocio(std::ofstream &data);
	void getDataSocio(std::ifstream &data);
	
};


#endif

