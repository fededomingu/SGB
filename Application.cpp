#include <wx/image.h>
#include "Application.h"
#include "WPrincipal.h"

IMPLEMENT_APP(Application)
	
bool Application::OnInit() {
	
	WPrincipal *win = new WPrincipal(&m_biblioteca);
	win->Show();
	return true;
}

