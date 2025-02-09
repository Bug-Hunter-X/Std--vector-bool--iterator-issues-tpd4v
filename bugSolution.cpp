#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Correct approach: Use std::vector<char> or std::vector<int>
  std::vector<char> vec; 
  vec.push_back(1); //Represents true
  vec.push_back(0); //Represents false

  std::cout << std::boolalpha; //to print true and false
  for(char b: vec){
    std::cout << static_cast<bool>(b) << " ";
  }
  std::cout << std::endl; 

  return 0;
}
