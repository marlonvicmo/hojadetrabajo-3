/*Ejercicio # 2:
En la Pizzeria "Gran sabor" se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta(Q100.00), recibe un descuento de 20%

Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.

Grabar los datos a un archivo y mostrar el total global de la venta del dia y
determinar el total de lo vendido por producto, mostrando tambien el porcentaje
con relacion al total.
*/
#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;
// creo la estructura principal
struct pizzeria{
	int tipopizza;
	int cantidad;
	float preciounitario;
	float preciopagar;
	float calculo;
};
void mp();
void inventario();
void leer_archivo();	
void grabar_archivo();
int main(){
	mp();
}
 //aqui creo la funcion del menu principal
void mp(){
	 int resp;
	 do{	
	 	system("CLS");
		cout<<"	MENU PRINCIPAL PIZZERIA EL GRAN SABOR "<<"\n";
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<"\n";
		cout<<" 1 - Ingresar nueva venta de pizza "<<"\n";
		cout<<" 2 - Mostrar la venta del dia "<<"\n";
		cout<<" 3 - Salir  "<<"\n";
	cout<<"**********************************************************"<<"\n";
		cout<<"  - POR FAVOR!! SELECCIONE SU OPCION "<<"\n";
		cin>>resp;
		if (resp==1){
			system("CLS");
			grabar_archivo();
		}
		else if(resp==2){
			system("CLS");
			leer_archivo();
		}
		else if(resp==3)
			break;
		else 
		    break; 
		}
		while (resp!='3');
	}
	void grabar_archivo(){
    int tipop;
	int cantidadp;
	float preciopagar;
	float calculo;
	float c_p_g = 0;
	float c_p_f = 0;
	float c_p_fi = 0;
	int rango1=0,rango2=0,rango3=0,rango4=0;	
	//ofstream archivo;
	fflush(stdin);
	    cout<<"ingrese el tipo de pizza que desea: "<<endl<<"1. grande "<<"\t"<<"2. familiar "<<"\t"<<"3. Fiesta "<<endl;
	    /*getline*/ cin>>tipop;
	    fflush(stdin);
		cout<<"ingrese la cantidad de pizza que desea: "<<endl;
		/*getline(cin*/cin>>cantidadp;
		//establezco las condiciones
		if (tipop == 1){
			calculo=cantidadp*80;
			preciopagar=calculo-(calculo*0.10);
			cout<<preciopagar;
			c_p_g=c_p_g+preciopagar;
			cout<<c_p_g;
		}
		else if (tipop==2){
			calculo=cantidadp*115;
			preciopagar=calculo-(calculo*0.15);
			cout<<preciopagar;
		}
			else{
				calculo=cantidadp*100;
				preciopagar=calculo-(calculo*0.20);
				cout<<preciopagar;	
			}
		//agregamos los datos al archivo
		ofstream archivo;
		archivo.open("pizzeria.txt",ios::app);
		archivo<<tipop<<"\t"<<cantidadp<<"\t"<<preciopagar<<endl;
		archivo.close();
		//aqui es donde tengo que crear mi funcion para leer el archivo
		void leer_archivo () {
		
			ifstream archivo;
			archivo.open("pizzeria.txt,",ios::in);
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"tipo de pizza"<<"\t"<<"cantidad de pizza"<<"\t"<<"total a pagar"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	int lineas, i=0;
	string s,linea;
	float sumatoriasalarial=0.00;}
	if(archivo.fail()){
		cout<<"WARNING!! NO SE PUDO ABRIR EL ARCHIVO!!!";
		exit;
		}
		while (getline(archivo. s))
		lineas++;
		archivo.close();
		
		pizzeria recordset[lineas];
		archivo.open("pizzeria.txt",ios::in);
		if(archivo.fail()){
			cout<<"no se pudo abrir el archivo!!!!";
			exit(1);
		}
		}
		//leer datos del archivo
		for (int i=0; i< lineas; i++)
		{if(!archivo)
		}
		cerr<<"no se pudo abrir el archivo"<<end;
		system("PAUSE");
		}
		archivo>>recordset[i].tipop>>recordset[i].cantidadp>>recordset[i].preciopagar;
			}
			archivo.close();
			for (int i=0; i< lineas; i++){
				cout<<recordset[i].tipop<<"\t"<<recordset[i].cantidadp<<"<\t"<<recordset[i].preciopagar<<endl;
	sumatoriaventa+=recordset[i].preciopagar;
			}
			cout<<endl<<"TOTAL VENTA DEL DIA: "<<"Q."<<sumatoriaventa<<endl<<endl;
			system("PAUSE");
					}

}

