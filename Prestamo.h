#ifndef PRESTAMO_H
#define PRESTAMO_H

struct reg_prestamo{
	//completar con el registro que se guradar tit autor nom ape dom movil et.
}
class Prestamo {
	Socio s;
	Libro l;
	int cant_dias, dia_p, mes_p, anio_p,
		dia_d, mes_d, anio_d;
public:
	Prestamo(Socio s, Libro l, int cant_d, int d_p, int m_p, int a_p);
	int verdCantidadDias();
	int verDiaPrestamo();
	int verMesPrestamo();
	int verAnioPrestamo();
	
private:
};

#endif

