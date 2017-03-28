/*Full Name: Vladoi Marian
  Pengo Accont Name: mvladoi
  Email: vladoimarian@yahoo.com
  Directory Name: 19-4
  Assignment: Cinco Word Game
  Description: This is a word guessing game
  Code Status: working/tested
  The program compile with no errors and warnings
**/



#include "Cinco.h"

using namespace std;



Cinco::Cinco(){
  cheated = false;
  numGuesses = 0;
  dict = new Dictionary("cinco-words.txt");
  secret = dict->getLegalSecretWord();
  hint ="xxxxx";
}




int Cinco:: countMatchingLetters(string firstWord, string secondWord){
  int matchingLetters = 0;
  int foundLetter = secondWord.find_first_of(firstWord);
  while(foundLetter!=string::npos){
    matchingLetters++;
    foundLetter = secondWord.find_first_of(firstWord,foundLetter+1);
  }
  return matchingLetters;

}




int Cinco:: countInPlaceLetters(string firstWord, string secondWord){
  int countLetters = 0;
  for(int i = 0; i < 5; i++){
    if(firstWord.at(i) == secondWord.at(i))
      countLetters++;
  }
  return countLetters++;
}





void Cinco:: ConsoleUI(){
  cout<<"I am thinking of a five letter word..." << endl;
  string playerGuess;
  do{

  cout<<"Your Guess? ";
  cin >>playerGuess;
  cout << playerGuess << endl;

    if(playerGuess == "xxxxx"){
     cout << "Secret word is: " << secret << endl;
      numGuesses++;
     	cheated = true;
 }

   else  if(!dict->validWord(playerGuess)){
       cout << "I do non't know that word." << endl;
 }
 
 
   else if(playerGuess != secret){
     cout << "Matching: " << countMatchingLetters(playerGuess,secret) << endl;
     cout << "In-Place: " << countInPlaceLetters(playerGuess,secret) << endl;
       numGuesses++;
   }

  }while(secret != playerGuess);


  numGuesses++;
  cout << "Correct! You got it in " << numGuesses << " guesses";
  if (cheated){
    cout << "," << endl;
    cout << "but only by cheating." << endl;

}
  else
    cout <<"." << endl;
}
