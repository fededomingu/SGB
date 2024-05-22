#ifndef LIBROS_H
#define LIBROS_H
#include <string>
#include <fstream>


struct reg_libro{
	int codigo;
	char titulo[256];
	char autor[256];
	char editorial[256];
	int stock;
};

class Libros{
	int codigo;
	std::string titulo;
	std::string autor;
	std::string editorial;
	int stock;
	
public:
	Libros();
	Libros(int l_codigo, std::string l_titulo, std::string l_autor, std::string l_editorial, int l_stock);
	
	int getCodigo();
	std::string getTitulo();
	std::string getAutor();
	std::string getEditorial();
	int getStock();
	
	void editCodigo(int cod);
	void editTitulo(std::string tit);
	void editAutor(std::string aut);
	void editEditorial(std::string ed);
	void editStock(int sk);
	
	void setLibro(std::ofstream &data);
	void getLibro(std::ifstream &data);
	
	std::string ValidarLibro();
};
bool compara_codigo_libro(Libros l1, Libros l2);
bool compara_titulo_libro(Libros l1, Libros l2);
bool compara_autor_libro(Libros l1, Libros l2);
bool compara_editorial_libro(Libros l1, Libros l2);
bool compara_stock_libro(Libros l1, Libros l2);

#endif

