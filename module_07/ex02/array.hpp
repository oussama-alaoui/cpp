#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>

template <typename T>
class Array {
 
 private:
  unsigned int size_;
  T* data_;
 
 public:
  Array() : size_(0), data_(nullptr) {}

  Array(unsigned int n) : size_(n), data_(new T[n]()) {}

  Array(const Array<T>& other) : size_(other.size_), data_(new T[other.size_]) {
    for (unsigned int i = 0; i < size_; i++) {
      data_[i] = other.data_[i];
    }
  }

  Array<T>& operator=(const Array<T>& other) {
    if (this != &other) {
      delete[] data_;
      size_ = other.size_;
      data_ = new T[size_];
      for (unsigned int i = 0; i < size_; i++) {
        data_[i] = other.data_[i];
      }
    }
    return *this;
  }

  T& operator[](unsigned int index) {
    if (index >= size_) {
      throw std::out_of_range("Array index out of bounds");
    }
    return data_[index];
  }

  unsigned int size() const { return size_; }

  ~Array() { delete[] data_; }
};

#endif
