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

#define datos "pizza.txt"

using namespace std;


int main()
{
	int x=1,eleccion;
float salarioxhora, cantidadhoras,prueba;

	while(x==1)
	{
		cout<<"WELCOME!! PIZZERIA ++EL GRAN SABOR++ \n Seleccione alguna opcion \n 1.Ingreso de datos. \n 2.Ver datos de planilla."<<endl;
		cin>>eleccion;
		system("cls");
		
		if (eleccion==1)
		
		{
			int tipopizza;float total;
			
		ofstream ingresopizza;
		ingresopizza.open(datos,ios::app);
		
		
		
	cout<<"Seleccione una de las siguientes pizzas \n 1.Grande Q.80 \n 2.Familiar Q.115  \n 3.Fiesta Q.100."<<endl;
	cin>>tipopizza;
if(tipopizza==1)
{
	total=80-(80*0.1);
	
}
else{
	if (tipopizza==2)
	{
		total=115-(115*0.15);
	}
	else
	{
		total=100-(100*0.2);
	}
}	

		ingresopizza<<tipopizza<<"\t"<<total<<endl;
		ingresopizza.close();
		
				cout<<"Desea regresar al menu principal escriba 1, de lo contrario cualquier digito  "<<endl;
		cin>>x;
	
		}
		else {
			
			
			if(eleccion==2)
			
			
			
			
			
			{
				
				fstream  datosin;
			datosin.open(datos,ios::in);
			
			
			 int tpizza,tp1=0,tp2=0,tp3=0;float tmonto,totalventas=0,porcentaje1,porcentaje2,porcentaje3,divisor;
			
			
			while (datosin>>tpizza>>tmonto)
			{
				totalventas=totalventas+tmonto;
				
				if (tpizza==1)
				{
					tp1=tp1+1;
					
				
				}
				else
				{
					if(tpizza==2)
					{
						tp2=tp2+1;
					}
					else
					{
						if(tpizza==3)
						{
							tp3=tp3+1;
						}
					}
				}
				
				
				
			 } 
cout<<"El total de ventas en el dia es de  "<<totalventas<<endl;
cout<<"La cantidad de pizza 1 vendidas es de "<<tp1<<endl;
cout<<"La cantidad de pizza 2 vendidas es de "<<tp2<<endl;
cout<<"La cantidad de pizza 3 vendidas es de "<<tp3<<endl;
divisor=tp1+tp2+tp3;
porcentaje1=(tp1/divisor)*100;
cout<<"El porcentaje de las ventas de la pizza 1 es de "<<porcentaje1<<endl;
porcentaje2=(tp2/divisor)*100;
cout<<"El porcentaje de las ventas de la pizza 2 es de "<<porcentaje2<<endl;
porcentaje3=(tp3/divisor)*100;
cout<<"El porcentaje de las ventas de la pizza 3 es de "<<porcentaje3<<endl;



				cout<<"Desea regresar al menu principal escriba 1, de lo contrario cualquier digito  "<<endl;
		cin>>x;
			}
		}
				
	}
	
	
	
	
}
