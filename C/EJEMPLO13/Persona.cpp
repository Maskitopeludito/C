#include "Persona.hpp"
#include <random>
#include <string>
#include <iostream>
Persona::Persona(int edad)
{
	this->genero=generarGenero();
	this->dni=generarDNI();
	this->edad=edad;
}

Persona::~Persona()
{
}

bool Persona::esMujer(int i){
		return (i==1);
	}
	
int Persona::getEdad(){return edad;}

void Persona::setEdad(int edadNueva){this->edad=edadNueva;}

int Persona::generarGenero(){
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(0, 1);
	return distrib(gen);
	}
std::string Persona::generarDNI(){
	std::string letras = "TRWAGMYFPDXBNJZSQVHLCKE";
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(0,9);
	std::string dni="";
	while(dni.length()<8){
		dni+=std::to_string(distrib(gen));
		}
	int numero=std::stoi(dni);
	int resto=numero%23;
	dni+=letras[resto];
	return dni;
	}
	
	void Persona::mostrar(){
		if(esMujer()){
		std::cout<<"La persona es mujer,tiene" <<edad<<" años y su DNI es" <<dni<< std::endl;}
		else{
			std::cout<<"La persona es hombre,tiene" <<edad<<" años y su DNI es" <<dni<< std::endl;
			}
		}