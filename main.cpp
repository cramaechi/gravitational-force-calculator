#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

const double G = (6.673 * pow(10.0, -8));

double gForce(double m1, double m2, double d);
//Precondition: m1, m2, and d are all non-negative, non-zero floating point numbers.
//Postcondition: Returns the gravitational force between to particle like objects.

//void clearScreen(); // Clears the console screen

int main(int argc, char* argv[])
{
   char ans;
   double m1, m2, d;

   do
   {
	   cout<<"Enter the masses (in kilograms) of two objects and the distance (in meters) between them: ";
	   cin>>m1;
	   cin>>m2;
	   cin>>d;
	   cout<<endl;
	   cout<<"The gravitational force between the two bodies is ";
	   cout.setf(ios::showpoint);
	   cout.setf(ios::fixed);
	   cout.precision(15);
	   cout<<gForce(m1, m2, d)<<" dynes\n\n";
	   cout<<"Start over? (y/n) ";
	   cin>>ans;
	   
	   if (ans == 'Y' || ans == 'y')
		   cout<<"\n\n";
   }while(ans == 'y' || ans == 'Y');

   return 0;
}

double gForce(double m1, double m2, double d)
{
	if (m1 <= 0 || m2 <= 0 || d <= 0)
	{
		cout<<"Fatal Error: Terminating Program.\n";
		exit(1);
	}

	double gForce = ((G*m1*m2)/pow(d,2.0));

	return gForce;
}

/*
void clearScreen()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
*/
