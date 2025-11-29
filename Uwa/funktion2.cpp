#include <iostream>
#include <cmath>
using namespace std;
int main (void)
{
	float p1[3];
	float p2[3];
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
	
	
	float abstand,dx,dy,dz;
	dx=p2[0]-p1[0];
	dy=p2[1]-p1[1];
	dz=p2[2]-p1[2];
	abstand=sqrt((dx*dx)+(dy*dy)+(dz*dz));

	cout << "Der Abstand zwischen Punkten ist " << abstand << endl;
	return 0;
}