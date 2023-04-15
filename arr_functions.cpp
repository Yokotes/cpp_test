#include <iostream>

template <class T> void push(T *&arr, int &size, const T value) {
  T *newArray = new T[size+1];

  for (int i = 0; i < size; i++) {
    newArray[i] = arr[i];
  }

  delete[] arr;

  newArray[size++] = value;
  arr = newArray;
};

template <class T> void log_arr(const T *arr, const int &size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << ' '; 
  }
}

int main() {

  int size = 5;
  int *test = new int[size];

  log_arr(test, size);
  std::cout << std::endl;
  push(test, size, 5);
  log_arr(test, size);
  std::cout << std::endl;

  delete [] test;

  return 0;
}