#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>
using namespace std;

int main() {
	int intentos=0;
	int x;
	
	std::srand(std::time(NULL));
    int numeroAleatorio = std::rand() % 10 + 1; // Rango: 1 

	while(numeroAleatorio !=x){
		cout<<"ingrese el numero correcto: ";
		cin>>x;
		intentos ++;
	}
	
	cout<<"el numero es: "<<x<<"\n";
	cout<<"la cantidad de intentos es:" <<intentos;
}
