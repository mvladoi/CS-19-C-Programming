
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




#ifndef SCHMOO_H
#define SCHMOO_H


class Schmoo
{
 public:
  Schmoo();//default constructor
  Schmoo(double xValue, double yValue);//Schmoo constructor taking two double parameter
  Schmoo(Schmoo& otherSchmoo);//Copy constructor
  double schmooGetX(){return x;}//get function to access the private variable x
  double schmooGetY(){return y;}//get function to access the private variable y
  int getMud(){return mud;}//get function to access the private variable mud
  void setSchmooX(double newValue){x = newValue;}// set function to modify the private variable x
  void setSchmooY(double newValue){y = newValue;}//set function to modify the private function y
  void increaseMud(){mud ++;}//function to increase the variable mud after a Schmoo was splatted with mud
  void outputSchmoo();// function to print the Schmoo object

 private:
  double x;//x coordinate
  double y;//y coordinate
  int mud;//how many times the object was hit with mud


};

#endif // SCHMOO_H
