#include <iostream>
#include <array>

using namespace std;
class Color {
    private:
        int red;
        int green;
        int blue;
    public:
        void setColor(int r, int g, int b){
            red = r;
            green = g;
            blue = b;
        }
        array<int,3> getColor() const{
            return {red, green, blue};
        }
        void print(){
            cout << "The color is: " << endl;
            cout << red << ", " << green << ", " << blue << endl;
        }
};