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




#ifndef LINKNODE_H
#define LINKNODE_H
#include "Schmoo.h"

class LinkNode
{
  friend class SchmooList;

 public:
  LinkNode();//default constructor
  LinkNode(Schmoo& schmooObject);//copy constructor
  virtual ~LinkNode();//distructor

 private:
  Schmoo* schmooPtr;//pointer to Schmoo object
  LinkNode* next;//pointer to next node in the list
  LinkNode* previous;//pointer to previous node in the list
};

#endif // LINKNODE_H
