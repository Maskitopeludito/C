#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <string>

class Persona
{
public:
	Persona(int edad);
	~Persona();
	int getEdad();
	bool esMujer(int i);
	void setEdad(int Edad);
	void mostrar();

	
private:
	bool genero;
	int edad;
	std::string dni;
	int generarGenero();
	std::string generarDNI();

};

#endif // PERSONA_HPP
