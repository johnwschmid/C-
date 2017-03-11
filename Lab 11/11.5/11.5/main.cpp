// Option 1: Re-write Sample Program 11.2 so that it works for an array of
// structures. Write the program so that it compares 6 circles. You will need
// to come up with a new way of determining which circle’s center is closest
// to the origin.
//
// John Schmid

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct circle {
    float x;
    float y;
    float radius;
    float area;
    float circumference;
    float distance_from_origin;
};

const float PI = 3.14159;
const short MAX_CIRCLES = 6;
short num_circles = 0;

circle cs[MAX_CIRCLES];

bool addCircle()
{
 
    if (num_circles >= MAX_CIRCLES)
    {
        cerr << "MAX_CIRCLES has been reached. (" << num_circles << ")\n";
        cout << "\n";
        return false;
    }
    
    circle c;
    

    cout << "Please enter the radius of circle " << (num_circles + 1) << ": ";
    cin >> c.radius;
    cout << endl
    << "Please enter the x-coordinate of the center: ";
    cin >> c.x;
    cout << endl
    << "Please enter the y-coordinate of the center: ";
    cin >> c.y;
    cout << endl << endl;
    
  
    c.area = PI * pow(c.radius, 2.0);
    c.circumference = 2 * PI * c.radius;
    c.distance_from_origin = sqrt(pow(c.x,2.0) + pow(c.y,2.0));
    
    cs[num_circles] = c;
    num_circles++;
    
    return true;
}

void printClosestCircle()
{
    short index = 0;
    
    for (short i = 1; i < num_circles; i++)
    {
        if (cs[i].distance_from_origin < cs[index].distance_from_origin)
            index = i;
    }
    
    cout << "Circle " << (index+1) << " is centered closest to the origin.\n\n";
    
    return;
}

bool printCircle()
{
    static short print_cnt = 0;
    
    if (print_cnt >= num_circles)
        return false;
    
    cout << setprecision(2) << fixed << showpoint;
    cout << "The area of circle " << (print_cnt+1) << " is: ";
    cout << cs[print_cnt].area << endl;
    cout << "The circumference of circle " << (print_cnt+1) << " is: ";
    cout << cs[print_cnt].circumference << endl << endl;
    
    print_cnt++;
    
    return true;
}

int main()
{
    while (addCircle());
    printClosestCircle();
    while (printCircle());
    return 0;
}
