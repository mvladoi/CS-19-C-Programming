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



#include "WNode.h"




WNode::WNode(std::string stringWord)
{
  word = stringWord;
  link = 0;
}


