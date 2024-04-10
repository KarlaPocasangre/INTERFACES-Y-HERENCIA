#include <iostream>
#include "OSWindows.h"
#include "OSLinux.h"
#include "OSOSx.h"
#include <stdlib.h>
// Karla Estefany Hernandez Pocasangre Ing Sistemas
using namespace std;

int main()
{

    OSWindows _win;
    _win.PintarInterfaz();

    system("pause");
    system("cls");

    OSLinux _lin;
    _lin.PintarInterfaz();

    system("pause");
    system("cls");

    OSOSx _os;
    _os.PintarInterfaz();


    return 0;
}
