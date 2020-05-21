#include <iostream>
#include <stdlib.h>
#include <fstream>
#include<string>
#include <regex> 	
#include <fstream>
#include <stdio.h>
#include <sstream> 
#include <regex>
#include <iomanip>

#define datos "vehiculos.txt"

using namespace std;


int main()
{
	int x=1,eleccion;
float salarioxhora, cantidadhoras,prueba,descuento,totalfinal;

	while(x==1)
	{
		cout<<"BIENVENIDOS, MENU PRINCIPAL, SEGUROS DE VEHICULOS \n Seleccione alguna opcion \n 1.Venta de seguro. \n 2.Ver datos de seguros."<<endl;
		cin>>eleccion;
		system("cls");
		
		if (eleccion==1)
		
		{
			
		
		
		int edad,modelo,color;float precio,total;
	cout<<"Ingrese su edad"<<endl;
	cin>>edad;
	cout<<"Seleccione \n 1. Para elegir el modelo a \n 2 Para elegir el modelo b  "<<endl;
	cin>> modelo ; 
	cout<<"Seleccione \n 1. Color blanco \n 2. Color metalizado \n 3. Otro color. "<<endl;
	cin>> color  ;
	
	
	
	
	switch (modelo)
	{
		case 1:
			switch (color)
			{
				case 1:
				precio=240.5;
				break;
				case 2:
				precio=330;
				break;
				case 3:
				precio=270.5;
				break;
			}
		break;
		
		case 2:
			switch (color)
			{
				case 1:
				precio=300;
				break;
				case 2:
				precio=360.5;
				break;
				case 3:
				precio=330;
				break;
			}
		break;
		
		
	}
	
	if (edad<31)
	{
		descuento=0.25;
	}
	else {
		if(edad>31 && edad<65)
			{
				descuento=0;
			}
			else
				{
					descuento=0.3;
				}
	}
	total=precio-(precio*descuento);
		cout<<"Segun lo seleccionado se tiene un precio base de "<<precio<<", por la edad de "<<edad<<" Se tiene un descuento de "<<descuento*100<<" \n Total a pagar : "<<	total<<endl;	
	
ofstream ingresodatos;
		ingresodatos.open(datos,ios::app);
		ingresodatos<<edad<<"\t"<<modelo<<"\t"<<color<<"\t"<<total<<endl;
		ingresodatos.close();
		
				cout<<"Desea regresar al menu principal escriba 1, de lo contrario cualquier digito  "<<endl;
		cin>>x;
}	

	
		
		else {
			
			
			if(eleccion==2)
			{
				
				
				
				
				ifstream lecturaarchivo;
				lecturaarchivo.open(datos,ios::in);
				int tedad,tmodelo,tcolor,venta=1;float ttotal;
				while(lecturaarchivo>>tedad>>tmodelo>>tcolor>>ttotal)
				{
					cout<<"\n Venta numero "<<venta<<endl;
					cout<<"Edad del comprador "<<tedad<<endl;
					
					switch (tmodelo)
	{
		case 1:
			cout<<"Modelo A"<<endl;
			switch (tcolor)
			{
				case 1:
				cout<<"Color blanco"<<endl;
				break;
				case 2:
				cout<<"Color metalizado"<<endl;
				break;
				case 3:
				cout<<"Otro color"<<endl;
				break;
			}
		break;
		
		case 2:
			cout<<"Modelo B"<<endl;
			switch (tcolor)
			{
					case 1:
				cout<<"Color blanco"<<endl;
				break;
				case 2:
				cout<<"Color metalizado"<<endl;
				break;
				case 3:
				cout<<"Otro color"<<endl;
				break;
			}
		break;
		
		
	}
	
	cout<<"El total de la venta con descuento es de "<<ttotal<<"\n"<<endl;
	venta=venta+1;
					
				}
				
					cout<<"Desea regresar al menu principal escriba 1, de lo contrario cualquier digito  "<<endl;
		cin>>x;
				
			}
			
			
			

	}
	
	
	
	
}
}
