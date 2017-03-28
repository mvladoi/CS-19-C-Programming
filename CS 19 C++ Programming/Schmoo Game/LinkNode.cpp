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






#include "LinkNode.h"

LinkNode::LinkNode(){
  schmooPtr = 0;
  previous = 0;
  next = 0;
}

LinkNode::LinkNode(Schmoo& schmooObject)
{
  schmooPtr = new Schmoo(schmooObject);
  previous = 0;
  next = 0;
}

LinkNode::~LinkNode()
{
  delete schmooPtr;
}

