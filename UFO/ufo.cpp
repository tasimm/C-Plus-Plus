// Hangman-like game except with a UFO. Correct word is "pizzapie". Player has 7 chances to miss before game over. Header file and function file in folder

#include <iostream>
#include "ufo_functions.hpp"

int main() {

  std::string codeword = "pizzapie";

  std::string answer = "________";

  int misses = 0;

  greet();

  std::vector<char> incorrect;
  bool guess = false;

  char letter;

  while (answer != codeword && misses < 7) {

    display_misses(misses);

    display_status(incorrect, answer);

    std::cout << "\nPlease enter your guess: ";
    std::cin >> letter;

    for (int k = 0; k < codeword.length(); k++) {

      if (letter == codeword[k]) {
 
    answer[k] = letter;
    guess = true;
 
  }
}

  if (guess) {
 
  std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
 
} else {
 
  std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
  incorrect.push_back(letter);
   misses++;
}
 guess = false;
    }

end_game(answer, codeword);
  
}
