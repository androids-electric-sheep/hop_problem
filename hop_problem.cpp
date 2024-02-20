#include <iostream>

int hop_calculator(int number_of_stairs, int max_hop = 2) {
  if (number_of_stairs < 0) {
    return 0;
  } else if (number_of_stairs == 0) {
    return 1;
  }
  int total = 0;
  for (int hop = 1; hop <= max_hop; ++hop) {
    total += hop_calculator(number_of_stairs - hop, max_hop);
  }
  return total;
}

int main(int argc, char **argv) {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " STAIRCASE_SIZE MAX_HOP" << std::endl;
    return 1;
  }

  int number_of_stairs = std::stoi(argv[1]);
  int max_hop = std::stoi(argv[2]);
  std::cout << "The number of hop paths up a staircase of " << number_of_stairs
            << " stairs with a max hop size of " << max_hop << " is "
            << hop_calculator(number_of_stairs, max_hop) << std::endl;
  return 0;
}
