#ifndef IAPARIENCIA_H
#define IAPARIENCIA_H
// Karla Estefany Hernandez Pocasangre Ing Sistemas

class iApariencia
{
public:
    virtual void PintarInterfaz() = 0;
    virtual void DibujarSimbolo(char, int, bool) = 0;
    iApariencia();
    virtual ~iApariencia();

protected:

private:
};

#endif // IAPARIENCIA_H
