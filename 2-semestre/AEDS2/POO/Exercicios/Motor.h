#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
	public:
		Motor();
		//setters
		void setTipo(string tipo);
		void setPotencia(float potencia);
		void setConsumo(float consumo);
		
		//getters
		string getTipo();
		float getPotencia();
		float getConsumo();
		
		//preencher e mostrar
		
		void preencher();
		void imprimir();
		
	private:
		string tipo;
		float potencia;
		float consumo;
		
};

#endif