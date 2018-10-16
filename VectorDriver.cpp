#include "VectorDriver.h"
#include <algorithm>

using std::sort;

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);
  vector<short> sample_vector2(0);

  // My section added.
  cout << "new vector: ";
  print(sample_vector2);
  cout << endl;

  add_numbers(sample_vector2);

  cout << "vector with random added numbers: ";
  print(sample_vector2);
  cout << endl;

  add_numbers(sample_vector2);

  cout << "vector with random added numbers again: ";
  print(sample_vector2);
  cout << endl;

  cout << "printing only the even spots: ";
  print_even(sample_vector2);
  cout << endl;

  sample_vector2.push_back(12);

  cout << "checking to see if is_present will catch 12: ";
  is_present(sample_vector2, 12);
  cout << endl;

  cout << "now with a number that could be in the random value but most likely not: ";
  is_present(sample_vector2, 72);
  cout << endl;

  sort(sample_vector2.begin(), sample_vector2.end());

  cout << "the vector has been sorted: ";
  print(sample_vector2);
  cout << endl;
  // End of my section.

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

  system("pause");
  return 0;
}