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




#include <iostream>
#include <string>
#include "Dictionary.h"


using std::string;
using std::cout;
using std::cin;


int main(int argc, char **argv)
{

  
 
  string fileName;
  string inputWord;
  

  if (argc < 2){
    cout << "Please enter the file name:";
    cin >> fileName;
  }
  else{
    fileName = argv[1];
   }

 
  Dictionary VectorOfStringNodes(fileName);

    cout<< "Your word?";
    cin >>inputWord;

  VectorOfStringNodes.setInputWord(inputWord);
  VectorOfStringNodes.addAdjWords();
 


  return 0;
}
