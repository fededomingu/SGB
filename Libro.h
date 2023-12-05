#ifndef LIBRO_H
#define LIBRO_H
#include <string>

struct reg_libro{
	int codigo;
	char titulo[256];
	char autor[256];
	char editorial[256];
	int anio_pub, stock;
};

class Libro {
	
	int codigo;
	std::string titulo;
	std::string autor;
	std::string editorial;
	int anio_pub, stock;		
	
public:
	
	Libro(int l_codigo=0, std::string l_titulo="", std::string l_autor="",
		  std::string l_editorial="", int l_aniopub=0, int l_stock=0);
	
	int VerCodigo() const;
	std::string VerTitulo() const;
	std::string VerAutor() const;
	std::string VerEditorial() const;
	int VerAnioPub() const;
	int VerStock() const;
	
	void ModificarCodigo(int l_codigo);
	void ModificarTitulo(std::string l_titulo);
	void ModificarAutor(std::string l_autor);
	void ModificarEditorial(std::string l_editorial);
	void ModificarAnioPub(int l_aniopub);
	void ModificarStock(int l_stock);
	
	void setDataLibro(std::ofstream &data);
	void getDataLibro(std::ifstream &data);
	
private:
};

#endif

