#include <iostream>
// permite entrada y salida de datos por pantalla
#include <typeinfo>
//Para saber el tipo de variable
using namespace std;
//Indicamos que no hace falta poner std antes de cada funcion de la librería
//
//
//Esta variable es global no debemos usarlas bajo ningun concepto
int n = 5;

int main(){
	float a,b;
	//Introducir datos y sacarlos
	std::cout<<" Introduce el valor de a: "<< std::endl;
	std::cin>>a;
	std::cout<<"a: "<<a<<std::endl;
	//Definimos los datos probamos casting
	a = 2.3;
	b = 4;
	float res = a+b;//Las variables se pueden declarar en cualquier momento
	cout<<"El resultado es: "<<(int) res<<std::endl;//redefinimos el tipo
	//Probamos operaciones
	int entero1,entero2;
	entero1 = 31;
	entero2 = 3;
	a = entero1/entero2; //Saldra entero
	a = static_cast<float>(entero1)/entero2;// Saldra decimal
	cout<<"El dato es de tipo: "<<typeid(a).name()<<endl;// Muestra por pantalla el tipo de dato
	//Exploramos los operadores incremento decremento
	cout<<"1 c: "<<entero1<<endl;
	cout<<"2 c++: "<<entero1++<<endl;
	cout<<"3 ++c: "<<++entero1<<endl;
	//Ejemplo con if
	a = 8;
	b = 0;
	if (b!=0){
		cout<<"ERROR: Division por cero"<<endl;

	}
	else{
		float c = a/b;// No sale de aquí la declaración
	}
	float max_ab = (a>b)?a:b;// Es quivalente a:
/*
if (a<b){
	max = b;
}
else{
	max = a;
}
*/
	//Ejemplos de SWITCH debe terminarse con un break
	// la ultima puede indicarse con  default
	short int op, error=1;
	double x,y,resultado;
	// En funcion de la opcion suma resta..
	cout<<" 1. suma 2. resta 3. mul 4. div"<<endl;
	cin>>op;
	cout<<"x,y"<<endl;
	cin>>x>>y;

	switch (op)
	{
	case 1:
		resultado = x+y;
		break;//si no pongo el break se ejecuta la línea siguiente
		//En definitiva son obligatorios
	case 2:
		resultado = x-y;
		break;

	default://En caso de que no  este ninguna de las anteriores
		cout<<"ERROR"<<endl;
		break;
	}

	cout<<"El resultado de la operacion es:"<<resultado<<endl;
	//Exploramos bucle while
	cout<<"Exploramos bucle while"<<endl;
	a = -1;
	b = 10;
	while (a<b){
		cout<<a++<<endl;// Imprime y luego le anade, no imprime 10
		//float res, no lo detectaría fuera
	}
	//Exploramos el bucle do while
	cout<<"Exploramos el bucle do while"<<endl;
	do {
		cout<<a--<<endl;//Empieza en diez
	}while(a>0);
	//Exploramos el bucle for
	double suma=0;
	cout<<"Exloramos bucle for"<<endl;
	for (int i=0;i<n;i++){//El scope de i esta dentro del bucle
		suma+=i;
		cout<<suma<<endl;
	}
	//Exploramos arrays, los scopes se mantienen
	int M[5] = {1,2,3,4,5};//Empiezan en cero
	for(int i=0;i<5;i++){
		cout<<"Elemento "<<i<<":"<<M[i]<<endl;
	}

}
