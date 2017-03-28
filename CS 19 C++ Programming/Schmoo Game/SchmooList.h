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



#ifndef SCHMOOLIST_H
#define SCHMOOLIST_H

#include "LinkNode.h"
#include "Schmoo.h"

class SchmooList
{
 public:
  SchmooList();//default constructor
  virtual ~SchmooList();//destructor
  void insertFront(Schmoo& schmooObject);//function to insert a Schmoo object in my List
  void throwMudAt(double xVal, double yVal);//function to throw mud (within 5 feet the Schmoo object was hit)
  void removeAt(double xVal, double yVal);//function to remove a Schmoo object( within 1 feet the Schmoo object was deleted)
  void getPopulation();//function to get the number of Schmoo object in the List
  void printAll();//function to print the Schmoo Objects coordinate, and how many times the object was hit 
  

 private:
  LinkNode* first;//pointer to last node
  LinkNode* last;//pointer to first node
  int population;//number of Schmoo objects
  double calculateDistance(double x1Value, double y1Value,double x2Value, double y2Value);//function to
  // calculate the distance between two points
  static const  double error = 0.1e-4;//error variable to avoid the floating point comparison problem
  double mudArea;//distance to hit an oject seted to 5.0 feet
  double deleteSchmooArea; //distance to delete an object seted to 1.0 feet
  bool checkMudArea(double distance);//function to check if the distance is <=5.0
  bool checkDeleteArea(double distance);//function to check if the distance is <=1.0
  bool isEmpty();//function to check if the list is empty
};

#endif // SCHMOOLIST_H


