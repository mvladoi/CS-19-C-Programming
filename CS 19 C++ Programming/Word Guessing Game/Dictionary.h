/*Full Name: Vladoi Marian
  Pengo Accont Name: mvladoi
  Email: vladoimarian@yahoo.com
  Directory Name: 19-4
  Assignment: Cinco Word Game
  Description: This is a word guessing game
  Code Status: working/tested
  The program compile with no errors and warnings
**/










#ifndef DICTIONARY_
#define DICTIONATY_

#include <iostream>
#include <vector>


class Dictionary{
  friend class Cinco;
 public:
  Dictionary(std::string filename); // arg: filename of input words text file
  ~Dictionary();
  bool validWord(std::string word); // check if word is in Dictionary 
  std::string getLegalSecretWord(); // return a random word (w/out repeated letters)
 private:
  bool testSecretWord(std::string word); // test if word n has only unique letters
  std::vector<std::string>*words; // vector storing all the words of the dictionary
  int numWords; // number of words in the dictionary
};



#endif
