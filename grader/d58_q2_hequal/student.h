#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  if (mSize != other.mSize) return false;
  CP::priority_queue<T,Comp> mine = *this;
  CP::priority_queue<T,Comp> yours = other;
  while (!mine.empty()) {
    if (mine.top() != yours.top()) return false;
    mine.pop();
    yours.pop();
  }
  return true;
}

#endif
