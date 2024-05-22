#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <vector>
#include "Libros.h"
#include "Socios.h"
#include "Prestamos.h"

#define NO_SE_ENCUENTRA -1

enum Orden_Prestamos{ORDEN_DNI_P, ORDEN_APELLIDO_Y_NOMBRE_P, ORDEN_MOVIL_P, ORDEN_CODIGO_P, ORDEN_TITULO_P, ORDEN_AUTOR_P, ORDEN_DEVOLUCION_P};

enum Orden_Socios{ORDEN_DNI_S, ORDEN_APELLIDO_Y_NOMBRE_S, ORDEN_DOMICILIO_S, ORDEN_MOVIL_S};

enum Orden_Libros{ORDEN_CODIGO_L, ORDEN_TITULO_L, ORDEN_AUTOR_L, ORDEN_EDITORAL_L, ORDEN_STOCK_L};

class Biblioteca {
private:
	std::vector <Socios> S;
	std::vector <Libros> L;
	std::vector <Prestamos> P;
	std::string fileSocios = "Socios.dat";
	std::string fileLibros = "Libros.dat";
	std::string filePrestamos = "Prestamos.dat";
public:
	Biblioteca();
	bool setSocios();
	bool setLibros();
	bool setPrestamos();
	int CantidadSocios();
	int CantidadLibros();
	int CantidadPrestamos();
	
	Libros &operator[](int i);	
	
	Libros &VerLibro(int i);
	Socios &VerSocio(int i);
	Prestamos &VerPrestamo(int i);
	
	
	void AddSocio(Socios &s);
	void AddLibro(Libros &l);
	void AddPrestamo(Prestamos &p);
	void DeletSocio(int i);
	void DeletLibro(int i);
	void Devolucion(int i);
	void EditarSocio(Socios &s, int pos);
	void EditarLibro(Libros &l, int pos);
	bool ExisteSocio(int doc);
	bool ExisteLibro(int cod);
	
	void OrdenPrestamos(Orden_Prestamos criterio);
	void OrdenSocios(Orden_Socios criterio);
	void OrdenLibros(Orden_Libros criterio);
	
	int BuscarDNI(int doc, int pos_desde);
	int BuscarApellidoYNombre(std::string parte_apellido, int pos_desde);
	int BuscarCodigo(int cod, int pos_desde);
	int BuscarTitulo(std::string parte_titulo, int pos_desde);
	
};

#endif

