#include <iostream>
#include <cstdio>

#define RESET "\033[0m"
#define CYAN "\033[36m" // Cyan

using std::cin;
using std::cout;

void dog() {
  cout << CYAN;
  printf("\n                 ╭────────────────────────╮");
  printf("\n                 │                        │");
  printf("\n    .-----.      │   ╭────────────────╮   │");
  printf("\n  .`       `.   ╭│   | Select Subject |   │");
  printf("\n / /-() ()-\\ \\  ││   ╰────────────────╯   │");
  printf("\n \\_|   ○   |_/  ││                        │");
  printf("\n  '.       .'   ╯│      DSA        1      │");
  printf("\n    `-._.-'      │      OS         2      │");
  printf("\n                 │                        │");
  printf("\n                 ╰────────────────────────╯\n");
  cout << RESET;

  int subject_code;
  cout << "\n Enter Subject " << CYAN << "Code" << RESET << ": ";
  cin >> subject_code;

  if (subject_code == 1) {
    cout << " DSA\n";
  } else if (subject_code == 2) {
    cout << " OS\n";
  } else {
    cout << "Please choose correct subject code.";
  }
}
