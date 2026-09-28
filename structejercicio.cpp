#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int dni;
};
int main (){
    Persona una_Persona;
    una_Persona.nombre= "Gaby";
    una_Persona.dni= 47960233;

    cout<< "Nombre: "<< una_Persona.nombre<<endl;
    cout<< "DNI: "<<una_Persona.dni<<endl;
    
    return 0;
}
