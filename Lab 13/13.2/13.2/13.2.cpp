// John Schmid

#include <iostream>
using namespace std;

//_________________________________________________________________________
// This program declares a class for a circle that will have
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles (spheres in the program)
// initialized  at declaration or set by a function.
//class declaration section   (header file)

class Circles
{
public:
    void setCenter(int x, int y);
    double findArea();
    double findCircumference();
    void printCircleStats(); // This outputs the radius and center of the circle.
    Circles (float r);       // Constructor
    Circles (float r, float x, float y);
    Circles();               // Default constructor
    ~Circles();
    
private:
    float  radius;
    int    center_x;
    int    center_y;
};
const double PI = 3.14;

//Client section
int main()
{
    float radius, center_x, center_y;
    Circles sphere(8);
    sphere.setCenter(9,10);
    sphere.printCircleStats();
    
    cout << "The area of the circle is " << sphere.findArea() << endl;
    cout << "The circumference of the circle is " << sphere.findCircumference() << endl;
    cout << endl;
    
    cout << "Please enter the data of the circle" << endl;
    cin >> radius >> center_x >> center_y;
    Circles sphere1(radius, center_x, center_y);
    sphere1.printCircleStats();
    
    cout << "The area of the circle is " << sphere1.findArea() << endl;
    cout << "The circumference of the circle is " << sphere1.findCircumference() << endl;
    cout << endl;
    
    Circles sphere2;
    sphere2.printCircleStats();
    cout << "The area of the circle is " << sphere2.findArea() << endl;
    cout << "The circumference of the circle is " << sphere2.findCircumference() << endl;
    cout << endl;
    
    Circles sphere3(1,15,16);
    sphere3.printCircleStats();
    cout << "The area of the circle is " << sphere3.findArea() << endl;
    cout << "The circumference of the circle is " << sphere3.findCircumference() << endl;
    cout << endl;
    return 0;
}

//___________________________________________________________________________
//Implementation section     Member function implementation
Circles :: ~Circles ()
{
    cout << "This concludes the Circles Class" << endl;
}

Circles :: Circles(float r, float x, float y)
{
    radius = r;
    center_x = x;
    center_y= y;
}

Circles::Circles()
{
    radius = 1;
    setCenter(0,0);
}

Circles :: Circles(float r)
{
    radius = r;
    setCenter(0,0);
}

double Circles :: findArea()
{
    return PI * radius * radius;
}

double Circles :: findCircumference()
{
    return 2 * PI * radius;
}

void Circles::printCircleStats()

// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
{
    cout << "The radius of the circle is " << radius << endl;
    cout << "The center of the circle is (" << center_x
    << "," << center_y << ")" << endl;
}

void Circles::setCenter(int x, int y)
// This procedure will take the coordinates of the center of the circle from
// the user and place them in the appropriate member data.
{
    center_x = x;
    center_y = y;
}