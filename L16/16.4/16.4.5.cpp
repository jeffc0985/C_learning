//類型內函數的多載
#include <iostream>
using namespace std;

class Cwin
{
    public :
        char id;
        int width;
        int height;

        int area()
        {
            return width * height;
        }

        void set_data(char i, int w, int h)
        {
            id = i;
            width = w;
            height = h;
        }

        void set_data(char i)
        {
            id = i;
        }

        void set_data(int w, int h)
        {
            width = w;
            height = h;
        }

        void show_area()
        {
            cout << "Window " << id << ", area = " << area() << endl;
        }
};

int main()
{
    Cwin win1, win2;
    
    win1.set_data('A',60,48);
    win2.set_data('B');
    win2.set_data(100,80);

    win1.show_area();
    win2.show_area();

    return 0;
}