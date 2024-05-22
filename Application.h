#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "Biblioteca.h"

class Application : public wxApp {
	Biblioteca m_biblioteca;
public:
	
	virtual bool OnInit();

};

#endif
