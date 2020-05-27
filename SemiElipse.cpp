#include<iostream>
#include<stdlib.h>
#include <math.h>
using namespace std;
class Punto{
	public://Atributos
		int puntoX, puntoY;
	public://M�todos
		void leerPuntos();
		
};
void Punto::leerPuntos(){//M�todo que lee los componentes de cada objeto de tipo punto
	cout<<"Ingrese componente X del Punto: ";
	cin>>puntoX;
	cout<<"Ingrese componente Y del Punto: ";
	cin>>puntoY;
}
class Linea{
	private://Atributos
		int puntoYMayor, puntoYMenor;
	public://M�todos
		Linea(int,int);
		void longitudLinea();
		
};
Linea::Linea(int _punto1Y, int _punto2Y){//Constructor de la clase linea
	puntoYMayor = _punto1Y;
	puntoYMenor = _punto2Y;
}
void Linea::longitudLinea(){//M�todo que muestra la longitud de la linea
	cout<<"La longitud de la linea es: "<<puntoYMayor-puntoYMenor<<endl;
}
class Arco{
	private://Atributos
		int a, b;
	public://M�todos
		Arco(int,int);
		void longitudArco();
		
};
Arco::Arco(int _radioMayor, int _radioMenor){//Constructor de la clase linea
	a = _radioMayor;
	b = _radioMenor;
}
void Arco::longitudArco(){//M�todo que muestra la longitud del arco
	float arco;
	arco = 3.141592*(3*(a+b)-(sqrt((3*a+b)*(a+3*b))));
	cout<<"La longitud del arco es: "<<arco/2<<endl;
}
class SemiElipse{
	private://Atributos
		int punto1X, punto1Y, punto2X, punto2Y, punto3X, punto3Y, puntoMedioX, puntoMedioY, radioMayor, radioMenor;
	public://M�todos
		void obtenerPuntos();
		void mostrarPuntos();
		void arco();
		void linea();
		void area();
};
void SemiElipse::obtenerPuntos(){//M�todo que crea los objetos de tipo Punto
	int _punto1X, _punto1Y, _punto2X, _punto2Y;
	Punto punto1;
	Punto punto2;
	Punto punto3;
	punto1.leerPuntos();
	punto2.leerPuntos();
	punto3.leerPuntos();
	punto1X = punto1.puntoX;
	punto1Y = punto1.puntoY;
	punto2X = punto2.puntoX;
	punto2Y = punto2.puntoY;
	punto3X = punto3.puntoX;
	punto3Y = punto3.puntoY;
}
void SemiElipse::mostrarPuntos(){//M�todo que muestra los puntos
	cout<<"Punto 1: ["<<punto1X<<","<<punto1Y<<"]"<<endl;
	cout<<"Punto 2: ["<<punto2X<<","<<punto2Y<<"]"<<endl;
	cout<<"Punto 3: ["<<punto3X<<","<<punto3Y<<"]"<<endl;
}
void SemiElipse::area(){//M�todo que calcula el �rea de la semiElipse
	float area;
	puntoMedioX = (punto1X+punto2X)/2;
	puntoMedioY = (punto1Y+punto2Y)/2;
	radioMayor =   punto3X - puntoMedioX;
	radioMenor = punto1Y - puntoMedioY;
	area = radioMayor*radioMenor*3.141592;
	cout<<"El area de la semiElipse es: "<<area/2<<endl;
}
void SemiElipse::linea(){//M�todo que crea objetos de tipo Linea
	Linea linea(punto1Y,punto2Y);
	linea.longitudLinea();
}
void SemiElipse::arco(){//M�todo que crea objetos de tipo Arco
	Arco arco(radioMayor,radioMenor);
	arco.longitudArco();
	
}

int main(){
	SemiElipse figura;
	figura.obtenerPuntos();
	figura.mostrarPuntos();
	figura.linea();
	figura.arco();
	figura.area();
	system("pause");
	return 0;
}
