#ifndef OSWINDOWS_H
#define OSWINDOWS_H
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include "iApariencia.h"
// Karla Estefany Hernandez Pocasangre Ing Sistemas
using namespace std;

class OSWindows : public iApariencia
{
public:
    OSWindows();
    virtual ~OSWindows();
    void PintarInterfaz();

protected:
    char _win_titulo[100];
    char _win_area_trabajo[100];
    char _win_estado[100];
    void DibujarSimbolo (char, int, bool _saltarlinea = false);
    void CentrarTexto(char*);

private:
};

#endif // OSWINDOWS_H
