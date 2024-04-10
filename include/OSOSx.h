#ifndef OSOSX_H
#define OSOSX_H
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include "iApariencia.h"
// Karla Estefany Hernandez Pocasangre Ing Sistemas

using namespace std;

class OSOSx : public iApariencia
{
public:
    OSOSx();
    virtual ~OSOSx();
    void PintarInterfaz();
protected:

private:
    char _os_titulo[100];
    char _os_area_trabajo[100];
    char _os_estado[100];
    void DibujarSimbolo(char,int,bool _saltarlinea = false);
    void CentrarTexto(char*);
};

#endif // OSOSX_H
