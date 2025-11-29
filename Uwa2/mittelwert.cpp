#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
double meinrand(double, double);
double Mittelwert(double[] , int);
int main()
{
   
    double werte[1000];//Statisch
    double min,max,mittelwert;
    double temp,summe=0.0;
    int anzahl,i,j;
    int Sortiert=0;
    cout<<"Wie viele Zufallszahlen moechten Sie generieren?\n";
    cin>>anzahl;
    cout<<"Bitte die untere Grenze eingeben\n";
    cin>>min;
    cout<<"Bitte die obere Grenze eingeben\n";
    cin>>max;
    srand(unsigned(time(NULL)));
	cout<<"Ausgabe vor dem Sortieren :"<<endl;
    	for(i=0;i<anzahl;i++)
    	{
        	cout<<endl<<"Wert "<<(i+1)<<": ";
        	werte[i]=meinrand(min,max);
        	cout<<werte[i]<<endl;
    	} 
    //Mittelwert berechnen
	mittelwert=  Mittelwert(werte,anzahl);
	cout<<"Mittelwert = "<<mittelwert<<endl;
   //Min und Max Werte finden

	double maxwerte=werte[0];
	double minwerte=werte[0];
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
	cout<<"Maximum Werte = "<<maxwerte<<endl;
	cout<<"Minimum Werte = "<<minwerte<<endl;
	
   //Sortierung (bubblesort)
	while(!Sortiert)
	{
		Sortiert=1;
		for(i=1;i<anzahl;i++)
		{
			if(werte[i]<werte[i-1])
			{
				Sortiert=0;
				temp=werte[i];
				werte[i]=werte[i-1];
				werte[i-1]=temp;
			}
		}
	}
		
	 
    


    cout<<"Ausgabe nach dem Sortieren: "<<endl;
    for(i=0;i<anzahl;i++)
        cout<<endl<<"Wert "<<(i+1)<<": "<<werte[i]<<endl;
    
    return 0;
    
}

 double meinrand(double min, double max)
 {
	double werte;
	werte=min+(max-min)*rand()/RAND_MAX;
	return werte;
 }

double Mittelwert(double werte[], int anzahl)
{
	double mittelwert,summe=0.0;
	int i;
	for(i=0;i<anzahl; i++)
	{
		summe += werte[i];
	}
	mittelwert= summe/anzahl;
	return mittelwert;
}