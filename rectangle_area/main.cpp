#include <iostream>

using namespace std;

class Rectangle
{
protected:
    int aWidth;
    int aHeight;
public:
    void display()
    {
        cout << aWidth << " " << aHeight << endl;
    }
    void Constrain(int &val)
    {
        if(val<1)
            val=1;
        else if(val>100)
            val=100;
    }
};

class RectangleArea : public Rectangle
{
private:

public:
    void read_input()
    {
        cin >> aWidth >> aHeight;
        Constrain(aWidth);
        Constrain(aHeight);
    }
    
    void display()
    {
        cout << aHeight*aWidth << endl;
    }
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}