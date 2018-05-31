#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


struct Asientos{
string zona;
int numeroasiento;
vector <string> nombrecompleto;
int fecha; //DDMMAAAA
};

struct Precio{
int precio;
string zona;
int jornada;
string nivel;
Asientos localizacion;
};

struct Socio{
int numerosocio;
string nombre;
vector <string> nombrecompleto;
};






