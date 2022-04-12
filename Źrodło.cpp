#include "autor.h"
#include "gra.h"
#include "witaj.h"
#include "Gra2.h"
#include "levele.h"

using namespace meteroid;

void ZamknijOkno(Object^ sender, FormClosedEventArgs^ e) {
	if (Application::OpenForms->Count == 0){
	Application::Exit();
}
	else {
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
	}
}

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	witaj^ pierwsza = gcnew witaj();
	pierwsza->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
	pierwsza->Show();
	Application::Run();
	return 0;




}
