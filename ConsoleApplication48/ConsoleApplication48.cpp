#include <iostream>
#include <time.h>
using namespace std;

template<class T>
class MyArray {
    T* mas;
    int size;
public:
    MyArray();
    void Output();
    ~MyArray();
};

template<class T>
MyArray<T>::MyArray() {
    size = 10;
    mas = new T[size];
    for (int i = 0; i < size; i++) {
        mas[i] = T(); 
    }
}

template<class T>
void MyArray<T>::Output() {
    for (int i = 0; i < size; i++) {
        cout << mas[i] << "\t";
    }
    cout << endl;
}

template<class T>
MyArray<T>::~MyArray() {
    delete[] mas;
}

class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
 

    MyArray<int> intArray;
    cout << "Int Array: ";
    intArray.Output();

    MyArray<char> charArray;
    cout << "Char Array: ";
    charArray.Output();

    MyArray<double> doubleArray;
    cout << "Double Array: ";
    doubleArray.Output();

    MyArray<Point> pointArray;
    cout << "Point Array: ";
    pointArray.Output();

}
