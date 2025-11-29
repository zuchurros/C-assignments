#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
float Feldanalyse(float[],int,float[],float[]);
float meinrand(float, float);
double Mittelwert(float[] , int);
int main()
{
   
    float feld[1000];//Statisch
    float min,max,mittelwert;
    float temp,summe=0.0;
    int anzahl=100;
    int i,j;
    
    cout<<"Bitte den Zufallszahlen-Bereich eingeben: untere Grenze = ";
    cin>>min;
    cout<<"                                          obere  Grenze = ";
    cin>>max;
    srand(unsigned(time(NULL)));
    cout<<"\nDie "<<anzahl<<" Feldwerte sind:\n\t\t\t";
    	for(i=0;i<anzahl;i++)
    	{
        	feld[i]=meinrand(min,max);
        	cout<<feld[i]<<"\t";
    	} 
    //Mittelwert berechnen
	
	float maxwerte=feld[0];
	float minwerte=feld[0];
	mittelwert= Feldanalyse(feld,anzahl,minwerte,maxwerte)

	
	cout<<"Maximum Werte = "<<maxwerte<<endl;
	cout<<"Minimum Werte = "<<minwerte<<endl;
	
   
    return 0;
    
}



float meinrand(float min, float max)
 {
	float werte;
	werte=min+(max-min)*rand()/RAND_MAX;
	return werte;
 }

float Feldanalyse(float werte[], int anzahl, float minwerte[], float maxwerte[])
{
	float mittelwert,summe=0.0;
	int i;
	for(i=0;i<anzahl; i++)
	{
		summe += werte[i];
	}
	mittelwert= summe/anzahl;

	
	for(i=0;i<anzahl;i++)
	{
		if(werte[i]>maxwerte)
		{
			maxwerte=werte[i];
		}
		if(werte[i]<minwerte)
		{
			minwerte=werte[i];
		}
	}
	return mittelwert;
}