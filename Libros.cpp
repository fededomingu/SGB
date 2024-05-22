#include "Libros.h"
#include <cstring>
#include "Utils.h"

Libros::Libros(){}
Libros::Libros(int l_codigo, std::string l_titulo, std::string l_autor, std::string l_editorial, int l_stock){
	codigo = l_codigo;
	titulo = l_titulo;
	autor = l_autor;
	editorial = l_editorial;
	stock = l_stock;
}

int Libros::getCodigo(){ return codigo; }

std::string Libros::getTitulo(){ return titulo; }

std::string Libros::getAutor(){ return autor; }

std::string Libros::getEditorial(){ return editorial; }

int Libros::getStock(){ return stock; }

void Libros::editCodigo(int cod){ codigo = cod; }

void Libros::editTitulo(std::string tit){ titulo = tit; }

void Libros::editEditorial(std::string ed){ editorial = ed; }

void Libros::editStock(int sk){ stock = sk; }

void Libros::setLibro(std::ofstream &data){
	reg_libro reg;
	reg.codigo = codigo;
	strcpy(reg.titulo, titulo.c_str());
	strcpy(reg.autor, autor.c_str());
	strcpy(reg.editorial, editorial.c_str());
	reg.stock = stock;
	data.write((char*)&reg,sizeof(reg));
}

void Libros::getLibro(std::ifstream &data){
	reg_libro reg;
	data.read((char*)&reg,sizeof(reg));
	codigo = reg.codigo;
	titulo = reg.titulo;
	autor = reg.autor;
	editorial = reg.editorial;
	stock = reg.stock;
}

bool compara_codigo_libro(Libros l1, Libros l2){
	return l1.getCodigo() < l2.getCodigo();
}

bool compara_titulo_libro(Libros l1, Libros l2){
	std::string t1 = l1.getTitulo();
	std::string t2 = l2.getTitulo();
	pasar_a_minusculas(t1);
	pasar_a_minusculas(t2);
	return t1 < t2;
}
	
bool compara_autor_libro(Libros l1, Libros l2){
	std::string a1 = l1.getAutor();
	std::string a2 = l2.getAutor();
	pasar_a_minusculas(a1);
	pasar_a_minusculas(a2);
	return a1 < a2;
}

bool compara_editorial_libro(Libros l1, Libros l2){
	std::string e1 = l1.getEditorial();
	std::string e2 = l2.getEditorial();
	pasar_a_minusculas(e1);
	pasar_a_minusculas(e2);
	return e1 < e2;
}

bool compara_stock_libro(Libros l1, Libros l2){
	return l1.getStock() < l2.getStock();
}

std::string Libros::ValidarLibro(){
	std::string e;
	
	if(codigo < 1 ) e += "Debe ingresar un codigo\n";
	
	if(titulo.size() == 0) e+="Debe ingresar un titulo\n";
	if(titulo.size() > 256) e+="El titulo es muy largo\n";
	
	if(autor.size() == 0) e+="Debe ingresar un autor\n";
	if(autor.size() > 256) e+="El autor es muy largo\n";
	
	if(editorial.size() == 0) e+="Debe ingresar una editorial\n";
	if(editorial.size() > 256) e+="La editorial es muy larga\n";
	
	if(stock < 1) e+="El stock no es valido\n";
	
	return e;
}
