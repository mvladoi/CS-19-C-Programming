/*
Full Name: VLADOI MARIAN
Pengo Account Name: mvladoi
Email: vladoimarian@yahoo.com
File Name: 19-5
Assignment 5: Splat The Schmoo
Description : This program is a Schmoo game.
              Schmoos are imaginary creatures who love being splatted with juicy mud balls.  
Code Status: working/tested
The program compile with no error and warnings
**/





#include <iostream>
#include "Schmoo.h"


using std::cout;
using std::endl;
using std::ios;



Schmoo::Schmoo()
{
  x = 0.0;
  y = 0.0;
  mud = 0;
}




Schmoo::Schmoo(double xValue, double yValue){
  x = xValue;
  y = yValue;
  mud = 0;
}




Schmoo::Schmoo(Schmoo& otherSchmoo)
{
  if (this != &otherSchmoo){
  x = otherSchmoo.x;
  y = otherSchmoo.y;
  mud = otherSchmoo.mud;
  }
}





void Schmoo::outputSchmoo(){
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "Schmoo at ("<< x << ", " << y << ") was hit with mud " << mud;
  if(mud == 1 || mud == 0)
    cout<<" time." << endl;
  else 
    cout << " times." << endl;
}





