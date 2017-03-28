
#ifndef INTSET_H
#define INTSET_H


#include <iostream>
#include <string>
#include <sstream>


class IntSet{
 public:
  //default constructor
  IntSet(int =-1,int =-1, int =-1, int =-1, int =-1);

  //Precondition: the bool array is initialized to false
  //Postcondition: inserting an element by changing the position to true
  void insertElement(int);

  //Precondition: the array index is true or false
  //Postcondition: deleting the element by changing the position to false
  void deleteElement(int);

  //Precondition: the set contains all elements with position set to true
  //Postcondition: printing a string with all elements in a string
  std::string toString() const;

  //Precondition: two sets with with max 5 elements
  //Postcondition: creating a set that contains all elements in the two sets 
  void unionOf(IntSet &, IntSet &);

  //Precondition: two sets with max 5 elements
  //Postcondition: creating a set that contains only the same common elements
  void intersectionOf(IntSet &, IntSet &);

  //Precondition: two sets with max 5 elements
  //Postcondition: checking if the sets have the same elements
  bool equals(IntSet&) const;

  //Precondition: one set with max 5 elements
  //Postcondition: checking if the set has a particular element
  bool hasElement(int) const;

  //function that return the capacity of the set
  int static getMax(){ return MAXSETVAL; }



 private:
  static const int MAXSETVAL=1000;
  bool data[MAXSETVAL+1];
};



#endif
