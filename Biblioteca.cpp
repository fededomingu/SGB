#include <fstream>
#include "Biblioteca.h"
#include <algorithm>
#include "Libros.h"
#include "Socios.h"
#include "Utils.h"

Biblioteca::Biblioteca(){

	std::ifstream s_data(fileSocios.c_str(),std::ios::binary|std::ios::ate);
	if(s_data.is_open()){
		int cant_socios = s_data.tellg()/sizeof(reg_socio);
		S.resize(cant_socios);
		s_data.seekg(0,std::ios::beg);
		for(int i=0;i<cant_socios;i++)
			S[i].getSocio(s_data);
		s_data.close();
	}
	
	std::ifstream l_data(fileLibros.c_str(),std::ios::binary|std::ios::ate);
	if(l_data.is_open()){
		int cant_lib = l_data.tellg()/sizeof(reg_libro);
		L.resize(cant_lib);
		l_data.seekg(0,std::ios::beg);
		for(int i=0; i<cant_lib; i++)
			L[i].getLibro(l_data);
		l_data.close();
	}
	
	std::ifstream p_data(filePrestamos.c_str(),std::ios::binary|std::ios::ate);
	if(p_data.is_open()){
		int cant_pres = p_data.tellg()/sizeof(reg_prestamo);
		P.resize(cant_pres);
		p_data.seekg(0,std::ios::beg);
		for(int i=0; i<cant_pres; i++)
			P[i].getPrestamo(p_data);
		p_data.close();
	}
}

bool Biblioteca::setSocios(){
	std::ofstream file_S(fileSocios.c_str(), std::ios::binary|std::ios::ate);
	if(! file_S.is_open())
		return false;
	for(int i=0; i<CantidadSocios(); i++)
		S[i].setSocio(file_S);
	file_S.close();
	return true;
}

bool Biblioteca::setLibros(){
	std::ofstream file_L(fileLibros.c_str(), std::ios::binary|std::ios::ate);
	if(! file_L.is_open())
		return false;
	for(int i=0; i<CantidadSocios(); i++)
		L[i].setLibro(file_L);
	file_L.close();
	return true;
}

bool Biblioteca::setPrestamos(){
	std::ofstream file_P(filePrestamos.c_str(), std::ios::binary|std::ios::ate);
	if(! file_P.is_open())
		return false;
	for(int i=0; i<CantidadPrestamos(); i++)
		P[i].setPrestamo(file_P);
	file_P.close();
	return true;
}

int Biblioteca::CantidadSocios(){ return S.size(); }
int Biblioteca::CantidadLibros(){ return L.size(); }
int Biblioteca::CantidadPrestamos(){ return P.size(); }

Libros &Biblioteca::operator[](int i){
		return L[i];
}

Socios &Biblioteca::VerSocio(int i){
	return S[i];
}

Libros &Biblioteca::VerLibro(int i){
	return L[i];
}

Prestamos &Biblioteca::VerPrestamo(int i){
	return P[i];
}

void Biblioteca::AddSocio(Socios &s){
	S.push_back(s);
}
void Biblioteca::AddLibro(Libros &l){
	L.push_back(l);
}
void Biblioteca::AddPrestamo(Prestamos &p){
	P.push_back(p);
}
void Biblioteca::DeletSocio(int i){
	S.erase(S.begin()+i);
}
void Biblioteca::DeletLibro(int i){
	L.erase(L.begin()+i);
}
void Biblioteca::Devolucion(int i){
	P.erase(P.begin()+i);
}
void Biblioteca::EditarSocio(Socios &s, int pos){
	S[pos]=s;
}

void Biblioteca::EditarLibro(Libros &l, int pos){
	L[pos]=l;
}

bool Biblioteca::ExisteSocio(int doc){
	if(BuscarDNI(doc, 0) < 0) return false;
	return true;
}

bool Biblioteca::ExisteLibro(int cod){
	if(BuscarCodigo(cod, 0) < 0) return false;
	return true;	
}

void Biblioteca::OrdenPrestamos(Orden_Prestamos criterio){
	switch(criterio){
	case ORDEN_DNI_P:
		sort(P.begin(), P.end(), compara_dni_prestamo); break;
	case ORDEN_APELLIDO_Y_NOMBRE_P:
		sort(P.begin(), P.end(), compara_apellido_y_nombre_prestamo); break;
	case ORDEN_MOVIL_P:
		sort(P.begin(), P.end(), compara_movil_prestamo); break;
	case ORDEN_CODIGO_P:
		sort(P.begin(), P.end(), compara_codigo_prestamo); break;
	case ORDEN_TITULO_P:
		sort(P.begin(), P.end(), compara_titulo_prestamo); break;
	case ORDEN_AUTOR_P:
		sort(P.begin(), P.end(), compara_titulo_prestamo); break;
	case ORDEN_DEVOLUCION_P:
		sort(P.begin(), P.end(), compara_fecha_dev_prestamo); break;
		}
	}

void Biblioteca::OrdenSocios(Orden_Socios criterio){
	switch(criterio){
	case ORDEN_DNI_S:
		sort(S.begin(), S.end(), compara_dni_socio); break;
	case ORDEN_APELLIDO_Y_NOMBRE_S:
		sort(S.begin(), S.end(), compara_apellido_y_nombre_socio);break;
	case ORDEN_DOMICILIO_S:
		sort(S.begin(), S.end(), compara_domicilio_socio); break;
	case ORDEN_MOVIL_S:
		sort(S.begin(), S.end(), compara_movil_socio); break;
	}
}

void Biblioteca::OrdenLibros(Orden_Libros criterio){
	switch(criterio){
	case ORDEN_CODIGO_L:
		sort(L.begin(), L.end(), compara_codigo_libro); break;
	case ORDEN_TITULO_L:
		sort(L.begin(), L.end(), compara_titulo_libro); break;
	case ORDEN_AUTOR_L:
		sort(L.begin(), L.end(), compara_autor_libro); break;
	case ORDEN_EDITORAL_L:
		sort(L.begin(), L.end(), compara_editorial_libro); break;
	case ORDEN_STOCK_L:
		sort(L.begin(), L.end(), compara_stock_libro); break;
	}
}

int Biblioteca::BuscarDNI(int doc, int pos_desde){
	for(int i=pos_desde;i<CantidadSocios();i++){
		Socios &s= S[i];
		if(doc == s.getDNI())
			return i;
	}
	return NO_SE_ENCUENTRA;
}

int Biblioteca::BuscarCodigo(int cod, int pos_desde){
		for(int i=pos_desde;i<CantidadLibros();i++){
		Libros &l = L[i];
		if(cod == l.getCodigo())
			return i;
	}
	return NO_SE_ENCUENTRA;
}

int Biblioteca::BuscarApellidoYNombre(std::string parte, int pos_desde){
	pasar_a_minusculas(parte);
	for(int i=pos_desde;i<CantidadSocios();i++){
		Socios &s = S[i];
		std::string apenom = s.getApellido()+", "+s.getNombre();
		pasar_a_minusculas(apenom);
		if(apenom.find(parte,0)!=std::string::npos)
			return i;
	}
	return NO_SE_ENCUENTRA;
}

int Biblioteca::BuscarTitulo(std::string parte, int pos_desde){
	pasar_a_minusculas(parte);
	for(int i=pos_desde;i<CantidadLibros();i++){
		Libros &l = L[i];
		std::string tit = l.getTitulo();
		if(tit.find(parte, 0)!=std::string::npos)
			return i;
	}
	return NO_SE_ENCUENTRA;
}
