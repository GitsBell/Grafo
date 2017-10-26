#include <iostream>
#include <array>
#include <string>

using namespace std;


struct institucion{
	
string nombre;
double distancia;

};

const int MAX=8;

array<institucion,MAX>instituciones;

void CaminoMasOptimo();


int main(){

CaminoMasOptimo();

} 


void CaminoMasOptimo(){

void RecopilarDatos();

void OrdenarDatos(array<institucion,MAX>&);

void MostrarEstructura(const array<institucion,MAX>&);

RecopilarDatos();

OrdenarDatos(instituciones);

MostrarEstructura(instituciones);

}


void RecopilarDatos(){

void Almacenar(int, string, double,array<institucion,MAX>& );

string nombre;

double dist;


for(int i=0;i<MAX;++i){

cout<<"Punto nro: "<<i+1<<endl;

cin >> nombre;

cin >> dist;

Almacenar(i,nombre,dist,instituciones);

}

}

void Almacenar(int i, string n, double d,array<institucion,MAX>& a){

a.at(i).nombre=n;

a.at(i).distancia=d; 

}

void OrdenarDatos(array<institucion,MAX>&a){

institucion temp;

for (int i=1; i<MAX; ++i){

    for (int j=0 ; j<MAX - 1; ++j){ 

    if (a.at(j).distancia > a.at(j+1).distancia){

    temp = a.at(j);

    a.at(j) = a.at(j+1);

    a.at(j+1) = temp;

    }

}

}

}

void MostrarEstructura(const array<institucion,MAX>&a){

for(int i=0;i<8;++i){

cout<<i+1<<".-"<<a.at(i).nombre<<endl;

}

}
