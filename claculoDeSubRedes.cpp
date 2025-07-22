#include <iostream>  
#include <cmath>

using namespace std; 

int main() {
         
    int numero,cantidadMaximaDeHost=255;
	int calculoDen,calculoDeMascara;
	int acumu=0,suma=0,salto=0,cont=0;;
	int primerOctero,segundoOctero,tercerOcteto,cuartoOcteto;
	char clase;
	int clases;
	
	cout << "Ingrese el numero de primer octeto: ";
    cin >> primerOctero;
    cout << "Ingrese el numero de primer octeto: ";
    cin >> segundoOctero;
    cout << "Ingrese el numero de primer octeto: ";
    cin >> tercerOcteto;
    cout << "Ingrese el numero de primer octeto: ";
    cin >> cuartoOcteto;
    cout << "Ingrese la cantidad de sub redes que debe calcular: ";
    cin >> numero;
	
	while(calculoDen < numero){//esta condicion nos permite ejecutar el ciclo hasta que se encuentre el numero pertinente
			calculoDen = 2<<(acumu);//se eleva el numero al cuadrado 
			acumu++;//nos sirve para saber la cantidad de veces que se elevo al cuadrado 
	}
	for(int i=7; i>7-acumu;i--){//este ciclo lo que hace es calcular 2^n hasta que n=0 y suma el resultado ejemplo 2^7 + 2^6... + 2^0, para asi calcular la nueva mascare de red  
		suma += pow(2,i);
		if(suma > 256){
			cout<<"no es posible realizar esta operacion";
		}
	}
	
	salto = 256-suma;//formula para calcular el salto
	
	//Clasificacion por tipo de clase
	if (primerOctero >= 1 && primerOctero <= 126) {
		clase = 'A';
	} else if (primerOctero >= 128 && primerOctero <= 191) {
				clase = 'B';
		} else if (primerOctero >= 192 && primerOctero <= 223) {
					clase = 'C';
	}

    
	
	switch (clase) {
        case 'A':
        	cout<<"la direccion ip es: "<<primerOctero<<"."<<segundoOctero<<"."<<tercerOcteto<<"."<<cuartoOcteto<<"\n";
			cout<<"su clase es tipo: "<<clase<<"\n";
			cout<<"el numero al que se eleva N es: "<<acumu<<"\n";
			cout<<"resultado de elevar 2 a la "<<acumu<<" es:"<<calculoDen<<"\n";
			cout<<"el salto es: "<<salto<<"\n";
			cout<<"la mascara con "<<calculoDen<<" subredes es :"<<suma<<endl;
            cout<<"mascara de subred:";
			cout<<"255."<<suma<<".0"<<".0"<<endl;
            cout<<"\n";
			cout<<"Direccion subred\n";
			for(int b=0;b<calculoDen;b++){
				cout<<primerOctero<<"."<<cont<<"."<<tercerOcteto<<"."<<cuartoOcteto<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Primera direccion de host\n";
			cont =0;
			for(int c=0;c<calculoDen;c++){
				cuartoOcteto = 1;
				cout<<primerOctero<<"."<<cont<<"."<<tercerOcteto<<"."<<cuartoOcteto<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Ultima direccion de host\n";
			cont = salto -1;
			for(int d=0;d<calculoDen;d++){
				tercerOcteto = cantidadMaximaDeHost;
				cuartoOcteto = cantidadMaximaDeHost - 1;
				cout<<primerOctero<<"."<<cont<<"."<<tercerOcteto<<"."<<cuartoOcteto<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Direccion de broadcast\n";
			cont = salto -1;
			for(int d=0;d<calculoDen;d++){
				tercerOcteto = cantidadMaximaDeHost;
				cuartoOcteto = cantidadMaximaDeHost;
				cout<<primerOctero<<"."<<cont<<"."<<tercerOcteto<<"."<<cuartoOcteto<<endl;
				cont += salto;
			}
			
			break;
        case 'B':
        	cout<<"la direccion ip es: "<<primerOctero<<"."<<segundoOctero<<"."<<tercerOcteto<<"."<<cuartoOcteto<<"\n";
			cout<<"su clase es tipo: "<<clase<<"\n";
			cout<<"el numero al que se eleva N es: "<<acumu<<"\n";
			cout<<"resultado de elevar 2 a la "<<acumu<<" es:"<<calculoDen<<"\n";
			cout<<"el salto es: "<<salto<<"\n";
			cout<<"la mascara con "<<calculoDen<<" subredes es :"<<suma<<endl;
        	cout<<"mascara de subred:";
			cout<<"255."<<"255."<<suma<<".0"<<endl;
			cout<<"\n";
			cout<<"Direccion subred\n";
			for(int b=0;b<calculoDen;b++){
				cout<<primerOctero<<"."<<segundoOctero<<"."<<cont<<"."<<cuartoOcteto<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Primera direccion de host\n";
			cont =0;
			for(int c=0;c<calculoDen;c++){
				cuartoOcteto = 1;
				cout<<primerOctero<<"."<<segundoOctero<<"."<<cont<<"."<<cuartoOcteto<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Ultima direccion de host\n";
			cont = salto - 1;
			for(int d=0;d<calculoDen;d++){
				cuartoOcteto = cantidadMaximaDeHost-1;
				cout<<primerOctero<<"."<<segundoOctero<<"."<<cont<<"."<<cuartoOcteto<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Direccion de broadcast\n";
			cont = salto - 1;
			for(int e=0;e<calculoDen;e++){
				cuartoOcteto = cantidadMaximaDeHost;
				cout<<primerOctero<<"."<<segundoOctero<<"."<<cont<<"."<<cuartoOcteto<<endl;
				cont += salto;
			}
			break;
        case 'C':
          	cout<<"la direccion ip es: "<<primerOctero<<"."<<segundoOctero<<"."<<tercerOcteto<<"."<<cuartoOcteto<<"\n";
			cout<<"su clase es tipo: "<<clase<<"\n";
			cout<<"el numero al que se eleva N es: "<<acumu<<"\n";
			cout<<"resultado de elevar 2 a la "<<acumu<<" es:"<<calculoDen<<"\n";
			cout<<"el salto es: "<<salto<<"\n";
			cout<<"la mascara con "<<calculoDen<<" subredes es :"<<suma<<endl;
			cout<<"mascara de subred:";
			cout<<"255."<<"255"<<".255."<<suma<<endl;
			cout<<"\n";
			cout<<"Direccion subred\n";
			for(int b=0;b<calculoDen;b++){
				cout<<primerOctero<<"."<<segundoOctero<<"."<<tercerOcteto<<"."<<cont<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Primera direccion de host\n";
			cont = 1;
			for(int c=0;c<calculoDen;c++){
				cout<<primerOctero<<"."<<segundoOctero<<"."<<tercerOcteto<<"."<<cont<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Ultima direccion de host\n";
			cont = salto - 2;
			for(int d=0;d<calculoDen;d++){
				cout<<primerOctero<<"."<<segundoOctero<<"."<<tercerOcteto<<"."<<cont<<endl;
				cont += salto;
			}
			cout<<"\n";
			cout<<"Direccion de broadcast\n";
			cont = salto - 1;
			for(int e=0;e<calculoDen;e++){
				cout<<primerOctero<<"."<<segundoOctero<<"."<<tercerOcteto<<"."<<cont<<endl;
				cont += salto;
			}
            break;
        default:
            cout << "Clase no disponible" << endl;
    }
	
	
    return 0;
}

