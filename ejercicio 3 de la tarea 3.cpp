/*Ejercicio # 3:
Un empresa que se dedica a la venta de seguros de vehiculos, calcula el importe
según el modelo y color del automovil, asi como la edad del conductor.

Modelo       Color             Precio
A              Blanco           240.50
                  Metalizado    330.00
                Otros             270.50
B               Blanco          300.00
                 Metalizado     360.50
                 Otros             330.00
           
Incremento de precio
Edad            % Incremento
<31                    25%
Entre 31 y 65    0%
>65                   30%

Determine el importe a pagar mostrandolo en pantalla según los datos del vehículo (modelo y color)
y la edad del conductor.

Grabe los datos a un archivo.*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

struct seguros{
	char modelo;
	float precio;
	char color;
	int edad;
	
	cout<<" DATOS DE POLIZA PARA VEHICULOS"<<endl;
	cout <<"ingrese el modelo del automovil"<<endl;
	cin>>modelo;
	cout<<"ingrese el color del autmovil"<<endl;
	cin>>color;
	cout<<"ingrese la edad del conductor"<<endl;
	cin>>edad;
	
	

	
	modelo=toupper(modelo);
	color=toupper(color);
	if (modelo=='A') {
		if 	(color == 'B')
		precio = 240.50;
		else if (color ==M);
		precio = 330.00;
		else if (color =='O')
		precio = 270.50
	}
	else
	cout<<"modelo incorrecto por favor vuelva a ingresar los datos correctos nuevamente" <<endl;
	
	modelo=toupper(modelo);
	color=toupper(color);
	if (modelo == 'B') { 
	if (color =='B')
	precio = 300;
	else if (color == 'M')
	precio = 360;
	else if (color == 'O')
	}	
	else
	cout<<"modelo incorrecto por favor vuelva a ingresar los datos correctos nuevamente" <<endl;
	
	if (edad>=18 && edad <31){
	
	precio=precio+(precio *0.25);
	else if (edad>=31 && edad <=65)
	precio=precio+(precio*1);
	else if (edad>65 && edad <=80);
	precio=precio+(preci*0.30);
	
	cout<<"precio de poliza a pagar: "<<precio;
}
	
	ofstream miarchivo; try{
		miarchivo.open("mivehiculo.txt",ios::app);
		miarchivo<<modelo<<"\t"<<color<<"\t"<<edad"\t"<<precio"\t"<<miarchivo.close();
		cout<<" datos han sido guardados en el archivo"<<endl;
		
				
	}
	
	
		
}

