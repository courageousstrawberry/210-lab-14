#include <iostream>
#include <array>

using namespace std;
class Color {
    private:
        int red;
        int green;
        int blue;
    public:
        Color(int r, int g, int b) {
            setColor(r,g,b);
        }
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

int main() {
    Color red(255,0,0);
    Color green(0,255,0);
    Color blue(0,0,255);

    red.print();
    green.print();
    blue.print();
}