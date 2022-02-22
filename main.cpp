//============================================================
// file: main.cpp
// Valerie Martinez
// CPSC 335
//============================================================
#include <iostream>

void sortedDisks(int size, int arr[]) {
  int count = 0;
  int temp;
  for(int i = 0; i < size; i++) {
    for(int j = i+1; j < size; j++) {
      // comparing 0's and 1's so trying to find 0's
      if(arr[i] < arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    count++;
  }
  std:: cout << "Sorted disks: [ ";
  for(int i = 0; i < size; i++) {
    std:: cout << arr[i] << " ";
  }
  std:: cout << "]\nNumber of Swaps: " << count << std::endl;
}

int main(int argc, const char * argv[]) {
  int n;

  std::cout << "Enter a positive integer: ";
  std::cin >> n;

  int size = 2 * n;
  int disks[size] = {};

  // generating array of light and dark disks; 0 = dark; 1 = light;
  for(int i = 0; i < size; ++i) {
    if(i % 2 == 0) { disks[i] = 0; }
    else { disks[i] = 1; }
  }

  std:: cout << "Starting disks: [ ";
  for(int i = 0; i < size; i++) {
    std:: cout << disks[i] << " ";
  }
  std:: cout << "]\n";

  sortedDisks(size, disks);

  return 0;
}
