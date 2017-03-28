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




#ifndef DICTIONARY_H
#define DICTIONARY_H
#include "WNode.h"

class Dictionary
{
 public:
  Dictionary(std::string fileName);//Default Constructor
  virtual ~Dictionary();//Destructor
  void addAdjWords();//Function to add the adjacent words to the vector of vectors and print the path
  void setInputWord(std::string word);//Function to set the word inputed by the user to be the first vector in our vector of vectors
  void deleteWordFromContainer(WNodePtr data, int pos);//Function to delete the adjacent words from container


 private:
  bool compareWords(std::string firstWord, std::string secondWord);//Function that compare two words and return true if only one character is different
  WNodePtrVector* container;//pointer to vector that contains all the words from the file
  VecOfWNodePtrVector* adjacentWordsVector;//pointer to vectors of vectors that store adjacent words
  WNodePtr inputWord;//pointer to the word inputed by the user

};

#endif // DICTIONARY_H
