#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Arithmetic operations: ask user to enter a geometric body and calculate the volume
// calculate volume of cube, sphere, cone

int main(int argc, char **argv)
{
	char body[100];
	const string CUBE = "cube";
	const string CONE = "cone";
	const string SPHERE = "sphere";
	float volume = 0;
	
	
	cout << "Enter what volume you want? (cube, sphere, cone) \n";
	cin.get(body, 100);
	
	if(body == CUBE){
		float sideLength = 0;
		
		cout << "Enter side length: \n";
		cin  >> sideLength;
		
		volume = pow(sideLength,3);
		cout << "The volume is: " << volume << "\n";
		}
		
	if(body == CONE){
		float radius = 0;
		float height = 0;
		char comma;
		
		cout << "Enter radius and height (radius, height): \n";
		cin  >> radius >> comma >> height;
		
		volume = M_PI * pow(radius,2) * (height/3);
		cout << "The volume is: " << volume << "\n";
		}
		
	if(body == SPHERE){
		float radius = 0;
		
		cout << "Enter radius: \n";
		cin  >> radius;
		
		volume = M_PI * (4/3) * pow(radius,3);
		cout << "The volume is: " << volume << "\n";
		}
		
	return 0;
}

