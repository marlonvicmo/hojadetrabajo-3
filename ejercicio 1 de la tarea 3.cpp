#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>     
#include <stdlib.h> 
using namespace std;
int menupp(int mpp)
{int y;
    if (mpp==1)
    {y=0;}
    else{y=1;}
    return y;}
int rangosalario(int edad)
{   int salario;
    if (edad>=15 && edad <=21)
    {salario=1400;}
    else{
        if(edad>=21 && edad <=25)
    {salario=1500;}
    else{
        if(edad>=26 && edad <=30)
    {salario=1200;}
         else { if (edad>30)
             {salario=800;}}}} return salario;}
int extranjero(string nacional)
{int aumento;
    if(nacional=="guatemalteco")
    {aumento=0;}
    else{aumento=500;}
    return aumento;}

int main ()
    {int seleccion,repeticion,regreso;
      repeticion=0;
      fstream ingresojugador;
ingresojugador.open("datos.txt",ios::app);
        while (repeticion==0)//Ciclo repetitivo para el menu de opciones//
      {
	   ifstream archivo;
archivo.open("datos.txt",ios::in);
	  FILE *entrada;
   int ch, num_lineas;
   if ((entrada = fopen("datos.txt", "r")) == NULL){
      perror("datos.txt");
      return 1;}
   num_lineas = 0;
   while ((ch = fgetc(entrada)) != EOF)
      if (ch == '\n')
         num_lineas++;
   fclose(entrada);
   int numerolineas;
string texto;
numerolineas=num_lineas-1;
string datos1[num_lineas];

   for(int i=0;i<=numerolineas;i++){
  fflush(stdin);
getline(archivo,texto);
datos1[i]=texto;}
ofstream ingresojugador;
ingresojugador.open("datos.txt",ios::app);
 cout<<"BIENVENIDOS AL PROGRAMA DEL MEJOR CLUB DE FUTBOL DEL MUNDO \n Seleccione alguna de las siguientes opciones \n 1. Ingreso de jugador  \n 2.Verificacion pago planilla \n 3. Verificacion de rango de edad \n";
cin>>seleccion;
if (seleccion==1)       {
	fstream ingresojugador;
ingresojugador.open("datos.txt",ios::app);
 string nacionalidad,nombre;
    int edad,bono,sueldo,total;
    cout<<"Ingrese el nombre del jugador: ";
	cin>>nombre;
    cout<<"Ingrese la  nacionalidad del jugador: "<<"\n"<<endl;
	cin>>nacionalidad;
    cout<<"Ingrese la edad del jugador "<<endl;
	cin>>edad;
    bono=extranjero(nacionalidad);
    sueldo=rangosalario(edad);
    total=bono+sueldo;
ingresojugador<<nombre<<"\n"<<nacionalidad<<"\n"<<total<<"\n"<<edad<<"\n"; fflush(stdin);
ingresojugador.close();
cout<<"Si desea regresar al menu oprima 1, si no presione 2 ";
cin>>regreso;
repeticion=menupp(regreso);
system("CLS");}
else { if (seleccion==2){
int  valores[numerolineas],indicador12=0,suma=0;
   for ( int xy=2;xy<=numerolineas;)
   {valores[indicador12]=atoi(datos1[xy].c_str());;
   suma=suma+valores[indicador12];
   xy=xy+4;
   indicador12=indicador12+1;}
   cout<<endl<<"El total a pagar de planilla es :"<<suma<<endl;
   cout<<"Si desea regresar al menu oprima 1, si no presione 2 "<<endl;
cin>>regreso;
repeticion=menupp(regreso);
system("CLS");}
else {if(seleccion==3)
    {int rango1=0,rango2=0,rango3=0,rango4=0;
        int indicador1=0,valores1[numerolineas];
        int sumatotal1=0, sumatotal2=0, sumatotal3=0, sumatotal4=0;
        int valores2[numerolineas],indicador2=0;
 for ( int x1=2;x1<=numerolineas;)
   {valores2[indicador2]=atoi(datos1[x1].c_str());
   x1=x1+4;
   indicador2=indicador2+1;
   
   }
          for ( int xz=3;xz<=numerolineas;)
   {valores1[indicador1]=atoi(datos1[xz].c_str());
   if (valores1[indicador1]>=15 && valores1[indicador1]<=20)
   {rango1=rango1+1;
   sumatotal1=sumatotal1+valores2[indicador1];
   }
   else{if(valores1[indicador1]>=21 && valores1[indicador1]<=25)
{rango2=rango2+1;
sumatotal2=sumatotal2+valores2[indicador1];} 
 else{if(valores1[indicador1]>=26 && valores1[indicador1]<=30)
{rango3=rango3+1;
sumatotal3=sumatotal3+valores2[indicador1];
} else {rango4=rango4+1;
sumatotal4=sumatotal4+valores2[indicador1];} }}
xz=xz+4;
indicador1=indicador1+1;}

 
 if (sumatotal1>sumatotal2 && sumatotal1>sumatotal3 && sumatotal1>sumatotal4   )
 {
 	 cout<<endl<<"El rango de edad entre 15 y 20 es el mas renumerado  "<<endl;}
 else {
 	if(sumatotal2>sumatotal1 && sumatotal2>sumatotal3 && sumatotal2>sumatotal4  ) 
 	{ cout<<endl<<"El rango de edad entre 21 y 25 es el mas renumerado  "<<endl;
 	
	 
	 }
	 else {
	 	
	 	if(sumatotal3>sumatotal1 && sumatotal3>sumatotal2 && sumatotal3>sumatotal4){
	 		cout<<endl<<"El rango de edad entre 26 y 30 es el mas renumerado  "<<endl;
		 }
		 else {cout<<endl<<"El rango de edad mayor a  30  es el mas renumerado  "<<endl; } }	  }

 cout<<endl<<"La cantida de jugadores entre 15 y 20 es de: "<<rango1<<endl;
   cout<<endl<<"La cantida de jugadores entre 21 y 25 es de: "<<rango2<<endl;
        cout<<endl<<"La cantida de jugadores entre 26 y 30 es de: "<<rango3<<endl;
        cout<<endl<<"La cantida de jugadores mayores a  30 es de : "<<rango4<<endl;
         cout<<endl<<"Si desea regresar al menu oprima 1, si no presione 2 "<<endl;
cin>>regreso
;
repeticion=menupp(regreso);system("CLS");  }}}}}
