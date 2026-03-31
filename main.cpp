#include <iostream>
#include <cstdlib>
#include "functions.hpp"
using namespace std;

int main()
{
  for (int i = 0; i < 10; i++)
  {
    // Game Selection
    cout << "Black Souls = 1" << endl;
    cout << "Black Souls = 2" << endl;
    cout << "Which of these games do you need help with? ";

    int game; // Variable for game selection
    cin >> game;
    while (game < 1 || game > 2)
    {
      cout << "Please choose 1 or 2.";
      cin >> game;
    }

    if (game == 1)
    {
      cout << "\nThere are 4 endings for Black Souls 1. Which ending do you need help with? ";
      cout << R"([For endings A to E, the player needs to reach a progression level of 10, 
      indicated by the torches lit above the white door in the Library Dream. This will open the doors, 
      leading you to the supposed end of the story.])" << endl;

      cout << "\nThese are Black Souls 1 endings;" << endl;
      BS1Endings();
    }
    else if (game == 2)
    {
      cout << "\nThere are 10 endings for Black Souls 2. Which ending do you need help with? ";
      BS2Endings();
    }

    if (!HelpChapter())
    {
      break;
    }
  }

  int breakpoint; // Variable for breakpoint
  cin >> breakpoint; // Wait for user input before closing the console
  return 0;
}
