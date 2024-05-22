#include "Utils.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <vector>


///Calcula Fecha Actual del sistema devuelve un int YYYYMMDD
	int FechaActual(){
		auto t = std::time(nullptr);
		auto tm = *std::localtime(&t);
		std::ostringstream oss;
		oss << std::put_time(&tm, "%Y%m%d");
		int fecha = stoi(oss.str());
		return fecha;
	}
///Recibe el año y devuelve un vector con los dias de cada mes y si es o no año bisiesto
	std::vector<int> Meses(int a){
		std::vector<int> mes={31,28,31,30,31,30,31,31,30,31,30,31};
		if (a%4 == 0)
			mes[1]= 29;
		else
			mes[1]= 28;
		return mes;
	}
		
////Recibe un entero y devuelve la fecha de sumar el entero mas la fecha actual formato YYYYMMDD
	int Fecha_Devolucion(int fd){
		int nfecha, a, m, nd;
		a = FechaActual()/10000;
		m = (FechaActual()%10000)/100;
		nd = fd+(FechaActual()%100);
		std::vector<int> mes = Meses(a);
			while(nd > mes[m-1]){
				nd -= mes[m-1];
				m++;
				if(m>12){
					m=1;
					mes = Meses(a+1);
					a += 1;
				}
			}
		return	nfecha  = a*10000+m*100+nd;
	}
void pasar_a_minusculas(std::string &s) {
	int i,c=s.size();
		for (i=0;i<c;i++)
			s[i]=tolower(s[i]);
	}

bool is_number(std::string str) {
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}	
