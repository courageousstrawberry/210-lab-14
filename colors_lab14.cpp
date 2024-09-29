#include <iostream>
#include <array>

using namespace std;

// Create color class.
class Color {
    private:
        // Three private integer colors to represent the color.
        int red;
        int green;
        int blue;
    public:
        // Constructor for the class.
        Color(int r, int g, int b) {
            // Use setter to initialize the object
            setColor(r,g,b);
        }
        // Setter function to set each integer to it's corresponding private variables.
        void setColor(int r, int g, int b){
            red = r;
            green = g;
            blue = b;
        }
        // Getter function that returns an array with each integer.
        array<int,3> getColor() const{
            return {red, green, blue};
        }
        // Print function that displays the integer values of the color.
        void print(){
            cout << "The color is: " << endl;
            cout << red << ", " << green << ", " << blue << endl;
        }
};

int main() {
    // Create four color objects.
    Color red(255,0,0);
    Color green(0,255,0);
    Color blue(0,0,255);
    Color orange(255,165,0);

    // Display all four colors.
    cout << "Red" << endl;
    cout << "-----------" << endl;
    red.print();
    cout << "Green" << endl;
    cout << "-----------" << endl;
    green.print();
    cout << "Blue" << endl;
    cout << "-----------" << endl;
    blue.print();
    cout << "Orange" << endl;
    cout << "-----------" << endl;
    orange.print();
}