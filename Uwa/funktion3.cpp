#include <iostream>
#include <cmath>
using namespace std;
//Deklaration der Funktion
float berechnenAbstand(float [], float []);
int main (void)
{
	//Deklaration der Variablen
	float p1[3];
	float p2[3];
	float abstand;
	//Eingabe vom Benutzer
	cout<<"Erster Punkt:"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"p1["<<i<<"] =";
		cin>>p1[i];
		cout<<endl;
	}
	cout<<"Erster Punkt:"<<endl;
	for(int j=0;j<3;j++)
	{
		cout<<"p2["<<j<<"] =";
		cin>>p2[j];
		cout<<endl;
	}
	
	
	//Aufruf der Funktion für punkt1 und punkt2
	abstand=berechnenAbstand(p1,p2);
	cout << "Der Abstand zwischen Punkten ist " << abstand << endl;
	return 0;
}

//Definition der Funktion
float berechnenAbstand (float p1[], float p2[])
{
	
	float abstand,dx,dy,dz;
	dx=p2[0]-p1[0];
	dy=p2[1]-p1[1];
	dz=p2[2]-p1[2];
	abstand=sqrt((dx*dx)+(dy*dy)+(dz*dz));
	return abstand;
}

/*float berechnenAbstand (float p1[], float p2[])
{
	float laenge=0,arr[3];
	int i;
	for(i=0;i<3;i++)
	{laenge += pow(p2[i]-p1[i],2);}
	abstand= sqrt(laenge);
	return abstand;
}*/