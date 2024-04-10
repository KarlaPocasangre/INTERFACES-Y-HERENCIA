#ifndef OSLINUX_H
#define OSLINUX_H
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include "iApariencia.h"
using namespace std;
// Karla Estefany Hernandez Pocasangre Ing Sistemas

class OSLinux : public iApariencia
{
public:
    OSLinux();
    virtual ~OSLinux();
    void PintarInterfaz();

protected:

private:
    char _lin_titulo[100];
    char _lin_area_trabajo[100];
    char _lin_estado[100];
    void DibujarSimbolo(char,int,bool _saltarlinea = false);
    void CentrarTexto(char*);
};

#endif // OSLINUX_H
