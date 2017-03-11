// JOHN SCHMID

#include <iostream>
using namespace std;

class Square
{
private:
    float side;
    
public:
    Square(float side_1);
    Square();
    ~Square();
    void setSide(float);
    float findArea();
    float findPerimeter();
};

int main()
{
    Square box;
    float   size;         // size contains the length of a side of the square
    Square box1(9);
    
    cout << "Please input the lentgh of the side of the square" << endl;
    cin >> size;
    box.setSide(size);
    
    cout << "The area of the square is " << box.findArea() << endl;
    cout << "The perimeter of the square is " << box.findPerimeter() << endl;
    
    cout << "The area of box1 is " << box1.findArea() << endl;
    cout << "The perimeter of box1 is " << box1.findPerimeter() << endl << endl;
    
    return 0;
}

//__________________________________________________________________
//Implementation section     Member function implementation
//**************************************************
//                  setSide
//
// task:    This procedure takes the length of a side and
//          places it in the appropriate member data
// data in: length of a side
//***************************************************

Square :: ~Square()
{
}
Square :: Square()
{
    side = 1;
}
Square :: Square(float side_1)
{
    side = side_1;
}

void Square::setSide(float length)

{
    side = length;
}

//**************************************************
//                 findArea
//
// task:    This finds the area of a square
// data in: none (uses value of data member side)
// data returned:  area of square
//***************************************************

float Square::findArea()
{
    return side * side;
}

//**************************************************
//                 findPerimeter
//
// task:    This finds the perimeter of a square
// data in: none (uses value of data member side)
// data returned:  perimeter of square
//***************************************************

float Square::findPerimeter()
{
    return 4 * side;
}