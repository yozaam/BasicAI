#include <iostream>
#include "Hanoi.h"

int main() {


  std::cout << "I am trying towers of Hanoi for 4 towers!\n";

  Hanoi::solve(4,'A','B','C');

  return 0;
}