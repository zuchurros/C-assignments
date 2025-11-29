#include <iostream>
#include <cmath>
using namespace std;
//Deklaration der Funktion
float berechnenAbstand(float [], float []);
int main (void)
{
	//Deklaration der Variablen
	float punktA[3];
	float punktB[3];
	float punktC[3];
	float abstandAB,abstandAC,abstandBC;
	//Eingabe vom Benutzer
	cout<<"Punkt A:"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"punktA["<<i<<"] =";
		cin>>punktA[i];
		cout<<endl;
	}
	cout<<"Punkt B:"<<endl;
	for(int j=0;j<3;j++)
	{
		cout<<"punktB["<<j<<"] =";
		cin>>punktB[j];
		cout<<endl;
	}
	cout<<"Punkt C:"<<endl;
	for(int k=0;k<3;k++)
	{
		cout<<"punktC["<<k<<"] =";
		cin>>punktC[k];
		cout<<endl;
	}
	
	
	//Aufruf der Funktion
	abstandAB=berechnenAbstand(punktA,punktB);
	abstandBC=berechnenAbstand(punktB,punktC);
	abstandAC=berechnenAbstand(punktA,punktC);
	cout << "Der Abstand zwischen Punkt A und B ist " << abstandAB << endl;
	cout << "Der Abstand zwischen Punkt B und C ist " << abstandBC << endl;
	cout << "Der Abstand zwischen Punkt A und C ist " << abstandAC << endl;
	
	return 0;
}

//Definition der Funktion
float berechnenAbstand (float p1[], float p2[])
{
	
	float abstand,dx,dy,dz;
	dx=p2[0]-p1[0];
	dy=p2[1]-p1[1];
	dz=p2[2]-p1[2];
	abstand=sqrt(pow(dx,2)+pow(dy,2)+pow(dz,2));
	return abstand;
}