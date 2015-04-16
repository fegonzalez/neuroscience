#include "levenshtein_distance.h"

#include <string>
#include <iostream>


int main()
{
  std::string s1, s2;
  // std::string s1 = "EXECUTION";
  // std::string s2 = "INTENTION";
  std::cout << "write word 1" << std::endl;
  std::cin >> s1;
  std::cout << "write word 2" << std::endl;
  std::cin >> s2;
  std::cout << "levenshtein_distance(" << s1 << ", " << s2 << ") = "
       << levenshtein_distance(s1, s2) << std::endl;
  // std::cout << "levenshtein_distance(" << s2 << ", " << s1 << ") = "
  //      << levenshtein_distance(s2, s1) << std::endl;
  return 0;
}
