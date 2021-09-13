#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  if (pos.size() == 0) {
    return;
  }
  T* tmp = new T[size() - pos.size() + 1];
  int curr_erase = 0;
  for (int i = 0; i < size(); ++i) {
    if (curr_erase < pos.size() && i == pos[curr_erase]) {
      ++curr_erase;
    } else {
      tmp[i - curr_erase] = mData[i];
    }
  }
  delete [] mData;
  mData = tmp;
  mSize = size() - pos.size();
  mCap = mSize + 1;
}

#endif

