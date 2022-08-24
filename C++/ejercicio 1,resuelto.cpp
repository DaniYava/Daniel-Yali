#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	system("color F1");
	//declarando variables
	int num_paq, tipo_hab, tipo_menu, tipo_atrac;
	float prec_hab, prec_menu, prec_atrac, costo_total=0;
	bool band=true;
	//mostrando los paquetes disponibles
	cout<<"Bienvenido a la agencia de turismo FUNAL\n";
	cout<<"----------------------------------------\n\n";
	cout<<"Contamos con 4 paquetes de viaje para Ud.\n\n";
	cout<<"Paquete 1\n";
	cout<<"---------\n";
	cout<<"\tCantidad de personas: 1\n";
	cout<<"\tEstad�a: 6 d�as y 5 noches\n\n";
	cout<<"Paquete 2\n";
	cout<<"---------\n";
	cout<<"\tCantidad de personas: 4\n";
	cout<<"\tEstad�a: 6 d�as y 5 noches\n\n";
	cout<<"Paquete 3\n";
	cout<<"---------\n";
	cout<<"\tCantidad de personas: 2\n";
	cout<<"\tEstad�a: 3 d�as y 2 noches\n\n";
	cout<<"Paquete 4\n";
	cout<<"---------\n";
	cout<<"\tCantidad de personas: 2\n";
	cout<<"\tEstad�a: 6 d�as y 5 noches\n\n";
	cout<<"Ingrese el n�mero de paquete en el que est� interesado(1-4): ";
	cin>>num_paq;
	cout<<"\nCotizaci�n del paquete "<<num_paq<<endl;
	cout<<"--------------------------\n";
	//calculando el costo seg�n paquete
	switch(num_paq){
	case 1:
	case 3:	//tipo de habitaci�n
		cout<<"\n\tElija el tipo de habitaci�n que desea:\n";
		cout<<"\t\t1. Regular\n";
		cout<<"\t\t2. Ejecutivo\n";
		cout<<"\t\t3. Gold\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_hab;
		switch(tipo_hab){
		case 1:	prec_hab=500; break;
		case 2:	prec_hab=750; break;
		case 3:	prec_hab=1000; break;
		default:cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
		band=false;
		}
		if(band) costo_total+=prec_hab;
		else break;
		//tipo de alimentaci�n
		cout<<"\n\tElija el tipo de alimentaci�n que desea:\n";
		cout<<"\t\t1. Men� ejecutivo\n";
		cout<<"\t\t2. Men� buffete\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_menu;
		if(tipo_menu==1) prec_menu=200;
		else{
			if(tipo_menu==2) prec_menu=300;
			else{
				cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
				band=false; }  }
		if(band) costo_total+=prec_menu;
		else break;
		//tipo de atracciones
		cout<<"\n\tElija el tipo de acceso a las atracciones del lugar:\n";
		cout<<"\t\t1. B�sico\n";
		cout<<"\t\t2. VIP\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_atrac;
		switch(tipo_atrac){
		case 1:	prec_atrac=300; break;
		case 2:	prec_atrac=600; break;
		default:cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
		band=false;
		}
		if(band) costo_total+=prec_atrac;
		break;
		
	case 2:	//tipo de habitaci�n
		cout<<"\n\tElija el tipo de habitaci�n que desea:\n";
		cout<<"\t\t1. Regular\n";
		cout<<"\t\t2. Ejecutivo\n";
		cout<<"\t\t3. Gold\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_hab;
		switch(tipo_hab){
		case 1:	prec_hab=2000; break;
		case 2:	prec_hab=3000; break;
		case 3:	prec_hab=4000; break;
		default:cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
		band=false;
		}
		if(band) costo_total+=prec_hab;
		else break;
		//tipo de alimentaci�n
		cout<<"\n\tElija el tipo de alimentaci�n que desea:\n";
		cout<<"\t\t1. Men� ejecutivo\n";
		cout<<"\t\t2. Men� buffete\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_menu;
		if(tipo_menu==1) prec_menu=800;
		else{
			if(tipo_menu==2) prec_menu=1200;
			else{
				cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
				band=false; }  }
		if(band) costo_total+=prec_menu;
		else break;
		//tipo de atracciones
		cout<<"\n\tElija el tipo de acceso a las atracciones del lugar:\n";
		cout<<"\t\t1. B�sico\n";
		cout<<"\t\t2. VIP\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_atrac;
		switch(tipo_atrac){
		case 1:	prec_atrac=1200; break;
		case 2:	prec_atrac=2400; break;
		default:cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
		band=false;
		}
		if(band) costo_total+=prec_atrac;
		break;
		
	case 4:	//tipo de habitaci�n
		cout<<"\n\tElija el tipo de habitaci�n que desea:\n";
		cout<<"\t\t1. Regular\n";
		cout<<"\t\t2. Ejecutivo\n";
		cout<<"\t\t3. Gold\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_hab;
		switch(tipo_hab){
		case 1:	prec_hab=1000; break;
		case 2:	prec_hab=1500; break;
		case 3:	prec_hab=2000; break;
		default:cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
		band=false;
		}
		if(band) costo_total+=prec_hab;
		else break;
		//tipo de alimentaci�n
		cout<<"\n\tElija el tipo de alimentaci�n que desea:\n";
		cout<<"\t\t1. Men� ejecutivo\n";
		cout<<"\t\t2. Men� buffete\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_menu;
		if(tipo_menu==1) prec_menu=400;
		else{
			if(tipo_menu==2) prec_menu=600;
			else{
				cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
				band=false; }  }
		if(band) costo_total+=prec_menu;
		else break;
		//tipo de atracciones
		cout<<"\n\tElija el tipo de acceso a las atracciones del lugar:\n";
		cout<<"\t\t1. B�sico\n";
		cout<<"\t\t2. VIP\n";
		cout<<"\tIngrese el n�mero de la opci�n: ";
		cin>>tipo_atrac;
		switch(tipo_atrac){
		case 1:	prec_atrac=600; break;
		case 2:	prec_atrac=1200; break;
		default:cout<<"\tUd. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
		band=false;
		}
		if(band) costo_total+=prec_atrac;
		break;
		
	default:cout<<"Ud. ha ingresado un n�mero de opci�n que no pertenece al men�\n\n";
	band=false;
	}
	if(band)
		   cout<<"\nEl costo total del paquete "<<num_paq<<" es: S/. "<<costo_total;
	
	return 0;
}
