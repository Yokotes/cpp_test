#include <iostream>

using namespace std;

class Rectangle {
  public: 
    int side;

    int get_square() {
      return side * side;
    }

    void print() {
      cout << "Side: " << side << endl;
    }
};

int main() {
  Rectangle rect1;
  Rectangle rect2;

  rect1.side = 5;
  rect2.side = 14;

  cout << "Rect1 square: " << rect1.get_square() << endl;
  cout << "Rect2 square: " << rect2.get_square() << endl;

  rect1.print();
  rect2.print();

  return 0;
}