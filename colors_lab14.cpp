#include <iostream>

class Color {
    private:
        int red;
        int green;
        int blue;
    public:
        void set_color(int r, int g, int b){
            red = r;
            green = g;
            blue = b;
        }
};