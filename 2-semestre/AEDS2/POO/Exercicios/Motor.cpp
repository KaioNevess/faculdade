#include "Motor.h"

Motor::Motor(){
	this->tipo="";
	this->potencia=0.0;
	this->consumo=0.0;
	
}
//set
void Motor::setTipo(string tipo){
	this->tipo= tipo;
		}
void Motor::setPotencia(float potencia){
	this->potencia=potencia;
}

void Motor::setConsumo(float consumo){
	this->consumo = consumo;
} 

//get
string Motor::getTipo(){
	return this->tipo;
}

float Motor::getPotencia(){
	return this->potencia;
}

float Motor::getConsumo(){
	return this->consumo;
}

void Motor::preencher(){
	cout<<"Tipo: ";
	cin>>this->tipo;
	cout<<"Potencia: ";
	cin>>this->potencia
	cout<<"Consumo: ";
	cin>>this->consumo;
}

void Motor::imprimir(){
	cout<<"Tipo: "<< tipo << endl
		<<"Potencia: "<< potencia <<endl
		<<"Consumo: "<< consumo <<endl
				
		}
}


