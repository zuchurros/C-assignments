#include <iostream>
#include <cmath>
using namespace std;
int main (void)
{
	float punkt1[3] = {1.0, 7.3, -3.1};
	float punkt2[3] = {8.17, -6.5, 0.0};
	float abstand,dx,dy,dz;
	dx=punkt2[0]-punkt1[0];
	dy=punkt2[1]-punkt1[1];
	dz=punkt2[2]-punkt1[2];
	abstand=sqrt((dx*dx)+(dy*dy)+(dz*dz));

	cout << "Der Abstand zwischen Punkten ist " << abstand << endl;
	return 0;
}