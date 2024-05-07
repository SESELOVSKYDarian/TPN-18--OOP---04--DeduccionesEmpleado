#include <iostream>
#include <string>
using namespace std;

class CEmpleado{
	private:
    	string nombre;
    	string apellido;
    	string direccion;
    	int sueldoBasico;
    	int cantidadHijos;
    	int antiguedad;
    	float jubilacion;
    	float obraSocial;
    	float INSSJP;

	public:
    	CEmpleado(string, string, string, int, int, int);
    	string setNombre(string nom);
    	string setApellido(string ape);
    	string setDireccion(string dir);
    	int setSueldoBasico(int sue);
    	int setCantidadHijos(int cant);
    	int setAntiguedad(int ant);
    	float setJubilacion();
    	float setObraSocial();
    	float setINSSJP();
    	float esDeduccion();
};

CEmpleado::CEmpleado(string nom, string ape, string dir, int sue, int cant, int ant){
	nombre = setNombre(nom);
	apellido = setApellido(ape);
	direccion = setDireccion(dir);
	sueldoBasico = setSueldoBasico(sue);
	cantidadHijos = setCantidadHijos(cant);
	antiguedad = setAntiguedad(ant);
	jubilacion = setJubilacion();
	obraSocial = setObraSocial();
	INSSJP = setINSSJP();
}
string CEmpleado::setNombre(string nom){
	nombre = nom;
	return nombre;
}
string CEmpleado::setApellido(string ape){
	apellido = ape;
	return apellido;
}
string CEmpleado::setDireccion(string dir){
	direccion = dir;
	return direccion;
}
int CEmpleado::setSueldoBasico(int sue){
	sueldoBasico = sue;
	return sue;
}
int CEmpleado::setCantidadHijos(int cant){
	cantidadHijos = cant;
	return cant;
}
int CEmpleado::setAntiguedad(int ant){
    antiguedad = ant;
    return antiguedad;
}

float CEmpleado::setJubilacion(){
    jubilacion = sueldoBasico * 0.11;
    return jubilacion;
}
float CEmpleado::setObraSocial(){
    obraSocial = sueldoBasico * 0.03;
    return obraSocial;
}
float CEmpleado::setINSSJP(){
    INSSJP = sueldoBasico * 0.03;
    return INSSJP;
}

float CEmpleado::esDeduccion(){
    float deducciontotal = sueldoBasico - (jubilacion + obraSocial + INSSJP);
    return deducciontotal;
}

int main(){
    CEmpleado empleado("Juan","Rodriguez","Juana Manzo 2930",900000,3,12);
    cout<<"La deduccion es: "<<empleado.esDeduccion()<<endl;
    return 0;
}