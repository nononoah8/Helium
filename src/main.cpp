#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char** argv){
  if(argc != 2){
    std::cout << "Incorrect usage. Correct usage:\n";
    std::cout << "helium <filename>\n";
    return EXIT_FAILURE;
  }

  std::fstream input(argv[1], std::ios::in);
  std::stringstream contents_stream;


  return EXIT_SUCCESS;
}