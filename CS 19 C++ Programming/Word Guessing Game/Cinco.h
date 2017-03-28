/*Full Name: Vladoi Marian
  Pengo Accont Name: mvladoi
  Email: vladoimarian@yahoo.com
  Directory Name: 19-4
  Assignment: Cinco Word Game
  Description: This is a word guessing game
  Code Status: working/tested
  The program compile with no errors and warnings
**/






#ifndef CINCO_H
#define CINCO_H


#include "Dictionary.h"


class Cinco{
 public:
  Cinco();
  void start(){ ConsoleUI(); } // public interface to play game of cinco
 private:
  int countMatchingLetters(std::string firstWord,std::string secondWord); // find common letters in any order
  int countInPlaceLetters(std::string firstWord,std::string secondWord);  // find common letters in place
  void ConsoleUI();  // play the game with text/keybd/screen UI
  Dictionary *dict; // legal words for the game
  int numGuesses; // track number of guesses used
  bool cheated; // flag set to true if cheat code is used
  std:: string secret; // word to guess
  std::string hint;//hint to see the secret word 
};






#endif
