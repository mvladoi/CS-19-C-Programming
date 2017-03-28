/**
FULL NAME: VLADOI MARIAN
PENGO ACCOUNT NAME: mvladoi
EMAIL: vladoimarian@yahoo.com
FILENAME: 19-6
ASSIGNMENT 6: Six Degrees of Bacon
DESCRIPTION: This program finds the shortest path from the word "bacon" to the word inputed by the user
CODE STATUS: working/tested
THE PROGRAM COMPILE WITH NO ERRORS AND WARNINGS
*/





#ifndef WNODE_H
#define WNODE_H

#include <iostream>
#include <vector>




class WNode
{
  friend class Dictionary;
 public:
  WNode(std::string s="");//Constructor taking a string as argument

 private:
  std::string word;
  WNode* link;
};


typedef WNode* WNodePtr;
typedef std::vector<WNode*> WNodePtrVector;
typedef std::vector< WNodePtrVector > VecOfWNodePtrVector;

#endif // WNODE_H
