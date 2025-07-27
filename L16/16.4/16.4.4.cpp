//傳遞引數到類別內函數
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
};

//一般函數
void show_area(Cwin wind)
{
    cout << "Window " << wind.id << ", area = " << wind.area() << endl; 
}

int main()
{
    Cwin win1;

    win1.set_data('A',80,48);
    show_area(win1);

    return 0;
}