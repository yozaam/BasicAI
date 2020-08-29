#include <iostream>
#include "Hanoi.h"

int main() {

  std::cout << "I am trying towers of Hanoi for 4 towers!\n\n";

  Hanoi::solve(4,'A','B','C');

  std::cout << "\n\nI am trying towers of Hanoi for 5 towers!\n\n";

  Hanoi::solve(5,'A','B','C');

  return 0;
}