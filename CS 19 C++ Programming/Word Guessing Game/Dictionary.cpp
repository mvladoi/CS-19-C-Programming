/*Full Name: Vladoi Marian
  Pengo Accont Name: mvladoi
  Email: vladoimarian@yahoo.com
  Directory Name: 19-4
  Assignment: Cinco Word Game
  Description: This is a word guessing game
  Code Status: working/tested
  The program compile with no errors and warnings
**/







#include <string>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include "Dictionary.h"

using namespace std;


Dictionary::Dictionary(string fileName){
  words = new vector<string>;

  ifstream inFile(fileName.c_str());
  string data;
  if(inFile.fail()){
    cerr<<"Class Dictionary reported failing opening the text file";
    exit(1);
  }

  while( inFile >>data){
  if(data.length()!= 5){
    cerr << "Illegal word length"<< endl;
  }

  words->push_back(data);
  }

  inFile.close();
  numWords=words->size();

}





Dictionary::~Dictionary(){

  delete words;

}







bool Dictionary:: validWord(string checkString){
  if(binary_search(words->begin(), words->end(),checkString))
    return true;
  return false;
}





string Dictionary::getLegalSecretWord(){
  string temp;
  int wordNumber = rand()%numWords;
  while(!testSecretWord(words->at(wordNumber))){
    wordNumber = rand()%numWords;
  }
  return words->at(wordNumber);
}




bool Dictionary:: testSecretWord(string checkWord){
  int length = checkWord.length();
  for(int i = 0; i < length-1; i++){
    char temp = checkWord.at(i);
    for(int j = i+1; j < length; j++){
      if(checkWord.at(j) == temp)
	return false;
    }
  }
  return true;

}
