#include<iostream>
using namespace std;
template<class T>
class WEST {
public:
    WEST(T b);
    T show();
private:
    T a[90];
};
template<class T>
WEST<T>::WEST(T b) :a{b} {
    show();
}
template<class T>
 T WEST<T>::show() {
    cout << "find :" << *a;
    return 0;
}

int main() {
    WEST<int>y(90);
    return 0;
}
