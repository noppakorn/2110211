#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  int pos = it - &mData[0];
  return !(pos >= mSize || pos < 0);
}

#endif
