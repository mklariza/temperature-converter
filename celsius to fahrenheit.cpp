#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();

float ctemp,ftemp;
cout<<"Celsius to Fahrenheit"<<endl;

cout << "Enter the temperature in Celsius : " << endl;
cin>>ctemp;
ftemp=(1.8*ctemp)+32;
cout << "Temperature in Fahrenheit = " << ftemp << endl;


getch();
}