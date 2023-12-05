#include "Libro.h"
#include <string>
#include <cstring>
#include <fstream>


Libro::Libro(int l_codigo, std::string l_titulo, std::string l_autor,
			 std::string l_editorial, int l_aniopub, int l_stock) {
	codigo = l_codigo;
	titulo = l_titulo;
	autor = l_autor;
	editorial = l_editorial;
	anio_pub = l_aniopub;
	stock = l_stock;
}

int Libro::VerCodigo() const { return codigo; }
std::string Libro::VerTitulo() const { return titulo; }
std::string Libro::VerAutor() const { return autor; }
std::string Libro::VerEditorial() const { return editorial; }
int Libro::VerAnioPub() const { return anio_pub; }
int Libro::VerStock() const { return stock; }

void Libro::ModificarCodigo(int l_codigo) {
	codigo = l_codigo;
}
void Libro::ModificarTitulo(std::string l_titulo){
	titulo = l_titulo;
}
void Libro::ModificarAutor(std::string l_autor){
	autor = l_autor;
}
void Libro::ModificarEditorial(std::string l_editorial){
	editorial = l_editorial;
}
void Libro::ModificarAnioPub(int l_aniopub){
	anio_pub = l_aniopub;
}
void Libro::ModificarStock(int l_stock){
	stock = l_stock;
}

void Libro::setDataLibro(std::ofstream &data){
	reg_libro reg;
	reg.codigo = codigo;
	strcpy(reg.titulo, titulo.c_str());
	strcpy(reg.autor, autor.c_str());
	strcpy(reg.editorial, editorial.c_str());
	reg.anio_pub = anio_pub;
	reg.stock = stock;
	data.write((char*)&reg,sizeof(reg));
}

void Libro::getDataLibro(std::ifstream &data){
	reg_libro reg;
	data.read((char*)&reg,sizeof(reg));
	codigo = reg.codigo;
	titulo = reg.titulo;
	autor = reg.autor;
	editorial = reg.editorial;
	anio_pub = reg.anio_pub;
	stock = reg.stock;
}
