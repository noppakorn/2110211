#include<math.h>
template<typename T,typename Comp>
int CP::priority_queue<T,Comp>::height() const {return !mSize ? -1 : log2(mSize);}