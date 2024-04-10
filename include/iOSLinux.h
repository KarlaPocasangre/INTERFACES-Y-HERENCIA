#ifndef IOSLINUX_H
#define IOSLINUX_H
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include "iApariencia.h"
using namespace std;

class iOSLinux : public iApariencia
{
    public:
        iOSLinux();
        virtual ~iOSLinux();
        void PintarLinux();

    protected:

    private:
        char _lin_titulo[100];
        char _lin_area_trabajo[100];
        char _lin_estado[100];
        void DibujarSimbolo(char, int, bool _saltarlinea = false);
        void CentrarTexto(char*);
};

#endif // IOSLINUX_H
